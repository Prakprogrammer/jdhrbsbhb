// Drop-in replacement for <pipeline::v3b::Sink>::odd_key (m1 @ 0x6a37c0).
//
// Original semantics (from the decompilation):
//   Shared+0x70  futex Mutex guarding everything below
//   Shared+0x78  names: Vec<Vec<u8>> {cap, ptr, len}   -- drained by m1 between phases
//   Shared+0x90  map:   hashbrown RawTable<(Vec<u8>, u32)>, +0xa8 = items
//   odd_key(key): if key in map -> idx; else idx = items; map.insert(key, idx); names.push(key)
//   returns idx | 1<<63.  Indices are global across drains (they continue from items).
//
// This version: 1024 spinlock shards, a fast hash, our own key store for lookups, and
// a Rust-visible names buffer that is (re)installed after each drain at base = count.
// Shared.items is kept equal to the count; the hashbrown table itself stays the empty
// singleton (bucket_mask 0), which hashbrown never iterates or frees.
//
// Contract:
//   in : rdi = &Sink (Sink[0] = &Shared, Sink[3] = buffer base, Sink[4] = buffer end)
//        rsi = packed (offset << 8 | len), len == 0xff means "scan to delimiter"
//   out: rax = idx | 1<<63
typedef unsigned long u64; typedef unsigned int u32; typedef unsigned char u8;
typedef long i64;

#define NSHARD 1024
#define MAXCTX 16
#define NAMES_CAP (1ul << 27)       /* entries per names buffer / key store, reserved lazily */
#define CHUNK (4ul << 20)

#define OFF_NAMES_CAP 0x78
#define OFF_NAMES_PTR 0x80
#define OFF_NAMES_LEN 0x88
#define OFF_ITEMS     0xa8

/* m1's own global allocator shim: __rust_alloc(size, align) -> ptr */
typedef u8 *(*rust_alloc_t)(u64, u64);
#define RUST_ALLOC ((rust_alloc_t)0x67c6a0)

static u8 *sys_mmap(u64 len) {
    i64 r;
    register i64 r10 __asm__("r10") = 0x22 | 0x4000;  /* MAP_PRIVATE|MAP_ANONYMOUS|MAP_NORESERVE */
    register i64 r8 __asm__("r8") = -1;
    register i64 r9 __asm__("r9") = 0;
    __asm__ volatile("syscall" : "=a"(r) : "0"(9L), "D"(0L), "S"(len), "d"(3L), "r"(r10), "r"(r8), "r"(r9)
                     : "rcx", "r11", "memory");
    if (r < 0 && r > -4096) { __asm__ volatile("ud2"); }
    return (u8 *)r;
}

/* Memory that m1 will later hand to glibc free(): lay it out as a glibc mmapped chunk
   (prev_size = 0, size = total | IS_MMAPPED) so free() simply munmaps it. */
static u8 *glibc_mmapped(u64 user) {
    u64 total = (user + 16 + 4095) & ~4095ul;
    u8 *b = sys_mmap(total);
    ((u64 *)b)[0] = 0;
    ((u64 *)b)[1] = total | 2;
    return b + 16;
}

static inline void sys_yield(void) {
    i64 r;
    __asm__ volatile("syscall" : "=a"(r) : "0"(24L) : "rcx", "r11", "memory");   /* sched_yield */
}
/* m1 may run more threads than vCPUs: if the holder was preempted, stop burning the CPU it needs */
static inline void spin_lock(volatile u32 *l) {
    while (__atomic_exchange_n(l, 1, __ATOMIC_ACQUIRE)) {
        int n = 0;
        while (__atomic_load_n(l, __ATOMIC_RELAXED)) {
            if (++n < 64) __builtin_ia32_pause(); else { sys_yield(); n = 0; }
        }
    }
}
static inline void spin_unlock(volatile u32 *l) { __atomic_store_n(l, 0, __ATOMIC_RELEASE); }

typedef struct { u64 cap; u8 *ptr; u64 len; } RVec;   /* Vec<u8> as m1 writes it */
typedef struct { const u8 *ptr; u64 len; } Key;

typedef struct {
    volatile u32 lock; u32 pad;
    u64 *tab;        /* (hash_hi32 << 32) | (idx + 1); 0 = empty; tab[-1] = mask */
    u64 used, spare;
    u8 *arena, *arena_end;
    u8 padding[64 - 48];
} Shard;

typedef struct {
    u8 *shared;
    Key *keys;       /* ours, indexed by global idx */
    RVec *names;     /* Rust-visible, indexed by idx - base */
    u64 base;
    u64 count;       /* atomic */
    Shard sh[NSHARD];
} Ctx;

static Ctx *g_ctx[MAXCTX];

static u64 *new_table(u64 mask) {
    u64 *t = (u64 *)sys_mmap((mask + 2) * 8);
    t[0] = mask;
    return t + 1;
}
static volatile u32 g_reg_lock;

static inline u64 rd64(const u8 *p) { u64 v; __builtin_memcpy(&v, p, 8); return v; }
static inline u64 mix(u64 a, u64 b) {
    __uint128_t m = (__uint128_t)(a ^ 0xa0761d6478bd642full) * (b ^ 0xe7037ed1a0b428dbull);
    return (u64)m ^ (u64)(m >> 64);
}
static u64 hash_bytes(const u8 *p, u64 n) {
    u64 h = 0x8ebc6af09c88c6e3ull ^ n;
    while (n >= 8) { h = mix(h, rd64(p)); p += 8; n -= 8; }
    u64 t = 0;
    for (u64 i = 0; i < n; i++) t |= (u64)p[i] << (8 * i);
    return mix(h, t ^ 0x589965cc75374cc3ull);
}
static inline int eq(const u8 *a, const u8 *b, u64 n) {
    while (n >= 8) { if (rd64(a) != rd64(b)) return 0; a += 8; b += 8; n -= 8; }
    while (n) { if (*a++ != *b++) return 0; n--; }
    return 1;
}
static inline void copy(u8 *d, const u8 *s, u64 n) { for (u64 k = 0; k < n; k++) d[k] = s[k]; }

static void install_names(Ctx *c) {
    c->names = (RVec *)RUST_ALLOC(NAMES_CAP * sizeof(RVec), 8);   /* m1 frees it itself */
    if (!c->names) __asm__ volatile("ud2");
    c->base = c->count;
    u8 *sh = c->shared;
    *(u64 *)(sh + OFF_NAMES_CAP) = NAMES_CAP;
    *(RVec **)(sh + OFF_NAMES_PTR) = c->names;
    *(u64 *)(sh + OFF_NAMES_LEN) = 0;
}

static inline int live(Ctx *c, u8 *shared) {
    return c->shared == shared && *(RVec *volatile *)(shared + OFF_NAMES_PTR) == c->names;
}

static Ctx *get_ctx(u8 *shared) {
    for (int i = 0; i < MAXCTX; i++) {
        Ctx *c = __atomic_load_n(&g_ctx[i], __ATOMIC_ACQUIRE);
        if (!c) break;
        if (live(c, shared)) return c;
    }
    spin_lock(&g_reg_lock);
    int i, same = -1;
    for (i = 0; i < MAXCTX && g_ctx[i]; i++) {
        if (live(g_ctx[i], shared)) { Ctx *c = g_ctx[i]; spin_unlock(&g_reg_lock); return c; }
        if (g_ctx[i]->shared == shared) same = i;
    }
    u64 items = *(u64 *)(shared + OFF_ITEMS);
    if (same >= 0 && items != 0 && items == g_ctx[same]->count) {
        /* m1 drained names (mem::take) but kept the map: continue indices from count */
        Ctx *c = g_ctx[same];
        install_names(c);
        spin_unlock(&g_reg_lock);
        return c;
    }
    if (items != 0) __asm__ volatile("ud2");   /* a map we never filled: unexpected */
    int slot = same >= 0 ? same : i;           /* fresh Shared (possibly at a reused address) */
    if (slot == MAXCTX) __asm__ volatile("ud2");
    Ctx *c = (Ctx *)sys_mmap(sizeof(Ctx));
    c->shared = shared;
    c->keys = (Key *)sys_mmap(NAMES_CAP * sizeof(Key));
    for (int s = 0; s < NSHARD; s++) {
        c->sh[s].tab = new_table(1023);
    }
    if (*(u64 *)(shared + OFF_NAMES_LEN) != 0) __asm__ volatile("ud2");
    install_names(c);
    __atomic_store_n(&g_ctx[slot], c, __ATOMIC_RELEASE);
    spin_unlock(&g_reg_lock);
    return c;
}

static void grow(Shard *s) {
    u64 *ot = s->tab, om = ot[-1], nm = om * 2 + 1;
    u64 *nt = new_table(nm);
    for (u64 i = 0; i <= om; i++) {
        u64 e = ot[i];
        if (!e) continue;
        u64 j = (e >> 32) & nm;
        while (nt[j]) j = (j + 1) & nm;
        nt[j] = e;
    }
    /* publish; the old table stays valid (never freed) for lock-free readers */
    __atomic_store_n(&s->tab, nt, __ATOMIC_RELEASE);
}

static inline void atomic_max(u64 *p, u64 v) {
    u64 cur = __atomic_load_n(p, __ATOMIC_RELAXED);
    while (cur < v && !__atomic_compare_exchange_n(p, &cur, v, 1, __ATOMIC_RELEASE, __ATOMIC_RELAXED)) {}
}

static u64 intern(Ctx *c, const u8 *key, u64 len) {
    u64 h = hash_bytes(key, len);
    Shard *s = &c->sh[h >> 54];
    u32 hi = (u32)(h >> 22);
    /* lock-free lookup: entries are write-once and published with release stores */
    {
        u64 *t = __atomic_load_n(&s->tab, __ATOMIC_ACQUIRE);
        u64 m = t[-1], j = hi & m;
        for (;;) {
            u64 e = __atomic_load_n(&t[j], __ATOMIC_ACQUIRE);
            if (!e) break;
            if ((u32)(e >> 32) == hi) {
                u64 idx = (u32)e - 1;
                Key *k = &c->keys[idx];
                if (k->len == len && eq(k->ptr, key, len)) return idx;
            }
            j = (j + 1) & m;
        }
    }
    spin_lock(&s->lock);
    u64 *t = s->tab, m = t[-1], j = hi & m;
    for (;;) {
        u64 e = t[j];
        if (!e) break;
        if ((u32)(e >> 32) == hi) {
            u64 idx = (u32)e - 1;
            Key *k = &c->keys[idx];
            if (k->len == len && eq(k->ptr, key, len)) { spin_unlock(&s->lock); return idx; }
        }
        j = (j + 1) & m;
    }
    /* new key: our lookup copy in the shard arena */
    const u8 *mine = (const u8 *)1;
    if (len) {
        if ((u64)(s->arena_end - s->arena) < len) {
            u64 sz = len > CHUNK ? len : CHUNK;
            s->arena = sys_mmap(sz); s->arena_end = s->arena + sz;
        }
        copy(s->arena, key, len);
        mine = s->arena; s->arena += len;
    }
    u64 idx = __atomic_fetch_add(&c->count, 1, __ATOMIC_RELAXED);
    if (idx >= NAMES_CAP || idx - c->base >= NAMES_CAP) __asm__ volatile("ud2");
    c->keys[idx].ptr = mine; c->keys[idx].len = len;
    __atomic_store_n(&t[j], ((u64)hi << 32) | (idx + 1), __ATOMIC_RELEASE);
    if (++s->used * 2 > m) grow(s);
    spin_unlock(&s->lock);
    /* m1-owned copy for names (m1 frees these with its own allocator) */
    u8 *theirs = (u8 *)1;
    if (len) { theirs = RUST_ALLOC(len, 1); if (!theirs) __asm__ volatile("ud2"); copy(theirs, key, len); }
    RVec *v = &c->names[idx - c->base];
    v->cap = len; v->ptr = theirs; v->len = len;
    atomic_max((u64 *)(c->shared + OFF_NAMES_LEN), idx - c->base + 1);
    atomic_max((u64 *)(c->shared + OFF_ITEMS), idx + 1);
    return idx;
}

__attribute__((section(".text.entry"), used))
u64 odd_key_new(i64 *sink, u64 packed) {
    const u8 *ptr = (const u8 *)(((packed & 0x7fffffffffffffffull) >> 8) + (u64)sink[3]);
    u64 len = packed & 0xff;
    if (len == 0xff) {
        const u8 *end = (const u8 *)sink[4];
        if (ptr + 0xff < end) {
            u64 i = 0xff;
            for (;;) {
                u8 b = ptr[i];
                if (b < 0x2d && ((0x100400000400ull >> (b & 0x3f)) & 1)) { len = i; break; }
                const u8 *q = ptr + i; i++;
                if (!(q + 1 < end)) { len = (u64)(end - ptr); break; }
            }
        }
    }
    Ctx *c = get_ctx((u8 *)sink[0]);
    return intern(c, ptr, len) | 0x8000000000000000ull;
}
