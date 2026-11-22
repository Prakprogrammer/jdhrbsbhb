//! Shopping Sessions pipeline: rules.md with 128-bit ID keys and parallel stages.
//! Reads DATA_DIR (default /data), writes OUTPUT_DIR (default /output).

mod alloc;
mod csv;
mod key;
mod out;
mod ptab;
mod ts;

use memmap2::Mmap;
use rayon::prelude::*;
use rustc_hash::FxHashMap;
use std::fs::File;
use std::path::{Path, PathBuf};
use std::time::Instant;
use ts::MS_DAY;

#[global_allocator]
static GLOBAL: alloc::Alloc = alloc::Alloc;

const SESSION_GAP: i64 = 1_800_000;
const WEEK: i64 = 7 * MS_DAY;
const LATE: i64 = MS_DAY;
const ORGANIC: u32 = u32::MAX;
const CHUNK: usize = 8 << 20;

const T_VIEW: u8 = 1;
const T_CART: u8 = 2;
const T_PURCHASE: u8 = 3;

// ---------------------------------------------------------------- input files

fn csv_files(dir: &Path) -> Vec<PathBuf> {
    let mut v: Vec<PathBuf> = match std::fs::read_dir(dir) {
        Ok(rd) => rd
            .filter_map(|e| e.ok())
            .map(|e| e.path())
            .filter(|p| p.extension().is_some_and(|x| x == "csv") && p.is_file())
            .collect(),
        Err(_) => vec![],
    };
    v.sort();
    v
}

/// Memory-maps every file; empty files are skipped (they hold no rows).
fn map_all(files: &[PathBuf]) -> Vec<Mmap> {
    files
        .par_iter()
        .filter_map(|p| {
            let f = File::open(p).ok()?;
            if f.metadata().ok()?.len() == 0 {
                return None;
            }
            unsafe { Mmap::map(&f).ok() }
        })
        .collect()
}

/// Splits the data part of every file (header skipped, one trailing `\n`
/// removed) into pieces of about CHUNK bytes cut at line boundaries.
fn chunks<'a>(maps: &'a [Mmap]) -> Vec<&'a [u8]> {
    let mut out = vec![];
    for m in maps {
        let buf: &[u8] = m;
        let start = match csv::memchr(b'\n', buf) {
            Some(i) => i + 1,
            None => continue,
        };
        let mut body = &buf[start..];
        if body.last() == Some(&b'\n') {
            body = &body[..body.len() - 1];
        }
        let mut pos = 0;
        while pos < body.len() {
            let end = pos + CHUNK;
            if end >= body.len() {
                out.push(&body[pos..]);
                break;
            }
            match csv::memchr(b'\n', &body[end..]) {
                Some(i) => {
                    out.push(&body[pos..end + i]);
                    pos = end + i + 1;
                }
                None => {
                    out.push(&body[pos..]);
                    break;
                }
            }
        }
    }
    out
}

fn small_csv<const N: usize>(path: &Path) -> Vec<[Vec<u8>; N]> {
    let buf = std::fs::read(path).unwrap_or_default();
    csv::data_lines(&buf)
        .filter_map(|l| csv::fields::<N>(l))
        .map(|f| f.map(|x| x.to_vec()))
        .collect()
}

fn manifest(dir: &Path) -> (i64, i64) {
    let s = std::fs::read_to_string(dir.join("manifest.json")).expect("manifest.json");
    let get = |key: &str| -> i64 {
        let i = s.find(&format!("\"{key}\"")).unwrap_or_else(|| panic!("manifest: no {key}"));
        let rest = &s[i + key.len() + 2..];
        let a = rest.find('"').expect("manifest value") + 1;
        let b = rest[a..].find('"').expect("manifest value end") + a;
        ts::parse(rest[a..b].as_bytes()).expect("manifest timestamp")
    };
    (get("window_start"), get("window_end"))
}

// ---------------------------------------------------------------- records

/// A 128-bit key as (high, low) u64 halves. Ordering matches the u128, but
/// the 8-byte alignment lets records pack without u128's 16-byte padding.
#[derive(Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Default)]
struct K(u64, u64);

impl From<u128> for K {
    #[inline]
    fn from(x: u128) -> K {
        K((x >> 64) as u64, x as u64)
    }
}

impl From<K> for u128 {
    #[inline]
    fn from(k: K) -> u128 {
        ((k.0 as u128) << 64) | k.1 as u128
    }
}

/// Frees record vectors on a background thread so the unmap cost overlaps
/// the next stage instead of stalling it. `T: Copy` has no destructor, so
/// releasing the raw allocations is all a drop would do.
fn free_bg<T: Copy>(vs: Vec<Vec<T>>) {
    let raw: Vec<(usize, std::alloc::Layout)> = vs
        .into_iter()
        .filter(|v| v.capacity() > 0 && std::mem::size_of::<T>() > 0)
        .map(|v| {
            let mut v = std::mem::ManuallyDrop::new(v);
            (v.as_mut_ptr() as usize, std::alloc::Layout::array::<T>(v.capacity()).unwrap())
        })
        .collect();
    std::thread::spawn(move || {
        for (p, l) in raw {
            // SAFETY: each pair is a live Vec allocation we took ownership of.
            unsafe { std::alloc::dealloc(p as *mut u8, l) }
        }
    });
}

/// One event line (72 bytes). `key` is the key of `event_id`. The person
/// is resolved while parsing, when the user ID is still in cache: resolving
/// it after the dedup sort means a cache and TLB miss into the mapped file
/// for every event.
#[derive(Clone, Copy)]
struct ERec<'a> {
    key: K,
    ingest: i64,
    ts: i64,
    pkey: K,
    name: &'a [u8],
    price: u32,
    cat: u16,
    typ: u8,
    ok: bool,
}

/// One click line, resolved to its person. `key` is the key of `click_id`.
#[derive(Clone, Copy)]
struct CRec<'a> {
    key: K,
    pkey: K,
    ts: i64,
    cid: &'a [u8],
    camp: u32,
    ok: bool,
}

/// A surviving event, keyed by its person.
#[derive(Clone, Copy)]
struct PEv<'a> {
    pkey: K,
    ts: i64,
    name: &'a [u8],
    price: u32,
    cat: u16,
    typ: u8,
}

/// A surviving click, keyed by its person.
#[derive(Clone, Copy)]
struct PCk<'a> {
    pkey: K,
    ts: i64,
    cid: &'a [u8],
    camp: u32,
}

fn parse_price(b: &[u8]) -> Option<u32> {
    if b.is_empty() || !b.iter().all(|c| c.is_ascii_digit()) {
        return None;
    }
    let mut v: u64 = 0;
    for &c in b {
        v = v * 10 + (c - b'0') as u64;
        if v > 10_000_000 {
            return None;
        }
    }
    if v >= 1 {
        Some(v as u32)
    } else {
        None
    }
}

#[inline(always)]
fn prefetch<T>(r: &T) {
    #[cfg(target_arch = "x86_64")]
    unsafe {
        use std::arch::x86_64::{_mm_prefetch, _MM_HINT_T0};
        _mm_prefetch(r as *const T as *const i8, _MM_HINT_T0);
    }
}

/// Resolves persons for a parsed chunk. Each valid record arrives holding
/// its user ID's key (and the ID as its name); a linked ID is replaced by
/// its person's key and name. An unlinked ID is its own person, so it keeps
/// both. Two passes, each prefetching D records ahead, so the random reads
/// into the person table overlap instead of stalling one at a time.
fn resolve<'a, T>(
    v: &mut [T],
    p: &Persons<'a>,
    ok: impl Fn(&T) -> bool,
    uk: impl Fn(&T) -> K,
    set: impl Fn(&mut T, K, &'a [u8]),
) {
    const D: usize = 16;
    const NONE: u32 = u32::MAX;
    let n = v.len();
    let mut ix = vec![NONE; n];
    for i in 0..n {
        if i + D < n && ok(&v[i + D]) {
            p.tab.prefetch(uk(&v[i + D]).into());
        }
        if ok(&v[i]) {
            if let Some(j) = p.tab.get(uk(&v[i]).into()) {
                ix[i] = j;
            }
        }
    }
    for i in 0..n {
        if i + D < n && ix[i + D] != NONE {
            prefetch(&p.res[ix[i + D] as usize]);
        }
        if ix[i] != NONE {
            let (k, name) = p.res[ix[i] as usize];
            set(&mut v[i], k, name);
        }
    }
}

static X_NOTS: std::sync::LazyLock<bool> = std::sync::LazyLock::new(|| std::env::var("X_NOTS").is_ok());
static X_NOKEY: std::sync::LazyLock<bool> = std::sync::LazyLock::new(|| std::env::var("X_NOKEY").is_ok());

struct Ctx<'a, 'p> {
    ws: i64,
    we: i64,
    prod: &'p FxHashMap<&'p [u8], u16>,
    unknown: u16,
    camps: &'p FxHashMap<&'p [u8], u32>,
    persons: &'p Persons<'a>,
}

fn parse_events<'a>(chunk: &'a [u8], cx: &Ctx<'a, '_>) -> Vec<ERec<'a>> {
    let mut v = Vec::with_capacity(chunk.len() / 70);
    let mut lines = csv::Lines::new(chunk);
    while let Some(f) = lines.next_fields::<7>() {
        let Some(f) = f else { continue };
        if f[0].is_empty() {
            continue;
        }
        let (ingest, t) = if *X_NOTS { (0, Some(cx.ws)) } else { (ts::parse(f[3]).unwrap_or(i64::MAX), ts::parse(f[2])) };
        let typ = match f[4] {
            b"view" => T_VIEW,
            b"cart" => T_CART,
            b"purchase" => T_PURCHASE,
            _ => 0,
        };
        let price = if typ == T_PURCHASE { parse_price(f[6]) } else { Some(0) };
        let tsv = t.unwrap_or(i64::MIN);
        let ok = !f[1].is_empty()
            && t.is_some()
            && cx.ws <= tsv
            && tsv < cx.we
            && typ != 0
            && !f[5].is_empty()
            && price.is_some()
            && ingest.saturating_sub(tsv) <= LATE;
        let (pkey, name, cat) = if ok {
            (key::k128(f[1]).into(), f[1], cx.prod.get(f[5]).copied().unwrap_or(cx.unknown))
        } else {
            (K::default(), &f[1][..0], 0)
        };
        let key = if *X_NOKEY { f[0].len() as u128 } else { key::k128(f[0]) };
        v.push(ERec { key: key.into(), ingest, ts: tsv, pkey, name, price: price.unwrap_or(0), cat, typ, ok });
    }
    resolve(&mut v, cx.persons, |e| e.ok, |e| e.pkey, |e, k, name| {
        e.pkey = k;
        e.name = name;
    });
    v
}

fn parse_clicks<'a>(chunk: &'a [u8], cx: &Ctx<'a, '_>) -> Vec<CRec<'a>> {
    let mut v = Vec::with_capacity(chunk.len() / 50);
    let lo = cx.ws - WEEK;
    let mut lines = csv::Lines::new(chunk);
    while let Some(f) = lines.next_fields::<4>() {
        let Some(f) = f else { continue };
        if f[0].is_empty() {
            continue;
        }
        let t = ts::parse(f[3]);
        let tsv = t.unwrap_or(i64::MIN);
        let camp = cx.camps.get(f[2]).copied();
        let ok = !f[1].is_empty() && t.is_some() && lo <= tsv && tsv < cx.we && camp.is_some();
        let pkey = if ok { key::k128(f[1]) } else { 0 };
        v.push(CRec { key: key::k128(f[0]).into(), pkey: pkey.into(), ts: tsv, cid: f[0], camp: camp.unwrap_or(0), ok });
    }
    resolve(&mut v, cx.persons, |c| c.ok, |c| c.pkey, |c, k, _| c.pkey = k);
    v
}

fn parse_links(chunk: &[u8]) -> Vec<(&[u8], &[u8])> {
    let mut v = vec![];
    let mut lines = csv::Lines::new(chunk);
    while let Some(f) = lines.next_fields::<2>() {
        let Some(f) = f else { continue };
        if f[0].is_empty() || f[1].is_empty() {
            continue;
        }
        v.push((f[0], f[1]));
    }
    v
}

// ---------------------------------------------------------------- union-find

fn find(p: &mut [u32], mut x: u32) -> u32 {
    let mut r = x;
    while p[r as usize] != r {
        r = p[r as usize];
    }
    while p[x as usize] != r {
        let n = p[x as usize];
        p[x as usize] = r;
        x = n;
    }
    r
}

/// Linked IDs: `tab` maps a linked ID's key to an index into `res`, which
/// holds that ID's (person key, person name).
struct Persons<'a> {
    tab: ptab::PTab,
    res: Vec<(K, &'a [u8])>,
}

fn build_persons<'a>(links: &[(&'a [u8], &'a [u8])]) -> Persons<'a> {
    let mut of: FxHashMap<u128, u32> = FxHashMap::default();
    let mut ids: Vec<&[u8]> = vec![];
    let mut parent: Vec<u32> = vec![];
    let keys: Vec<(u128, u128)> = links.par_iter().map(|&(a, b)| (key::k128(a), key::k128(b))).collect();
    for (&(a, b), &(ka, kb)) in links.iter().zip(&keys) {
        let mut ix = |s: &'a [u8], k: u128| -> u32 {
            *of.entry(k).or_insert_with(|| {
                ids.push(s);
                parent.push(ids.len() as u32 - 1);
                ids.len() as u32 - 1
            })
        };
        let ia = ix(a, ka);
        let ib = ix(b, kb);
        let (ra, rb) = (find(&mut parent, ia), find(&mut parent, ib));
        if ra != rb {
            parent[ra.max(rb) as usize] = ra.min(rb);
        }
    }
    let n = ids.len();
    let mut cname: Vec<Option<&[u8]>> = vec![None; n];
    let mut root = vec![0u32; n];
    for i in 0..n {
        let r = find(&mut parent, i as u32) as usize;
        root[i] = r as u32;
        if cname[r].map_or(true, |c| ids[i] < c) {
            cname[r] = Some(ids[i]);
        }
    }
    let rkey: Vec<u128> = cname.par_iter().map(|c| c.map_or(0, key::k128)).collect();
    let res: Vec<(K, &[u8])> = (0..n).map(|i| (rkey[root[i] as usize].into(), cname[root[i] as usize].unwrap())).collect();
    let entries: Vec<(u128, u32)> = of.into_iter().collect();
    Persons { tab: ptab::PTab::new(&entries), res }
}

// ---------------------------------------------------------------- partitioning
//
// No global scatter. Each parse chunk groups its own records by key into
// NG groups while they are still in cache; a dedup task then gathers its
// group's run from every chunk (sequential copies), dedups it in cache, and
// regroups the survivors by person. Session tasks gather person groups the
// same way. Nothing ever writes randomly into a gigabyte-sized array.

/// Number of groups; also the number of dedup and session tasks.
const NG: usize = 256;

#[inline]
fn group(k: K) -> usize {
    (k.0 >> 56) as usize
}

/// Records grouped by `group`: group `g` is `v[off[g]..off[g + 1]]`.
struct Grouped<T> {
    v: Vec<T>,
    off: Box<[u32; NG + 1]>,
}

impl<T> Grouped<T> {
    #[inline]
    fn run(&self, g: usize) -> &[T] {
        &self.v[self.off[g] as usize..self.off[g + 1] as usize]
    }
}

/// Counting sort of one chunk's records into NG groups (stable).
fn group_local<T: Copy>(v: &[T], key: impl Fn(&T) -> K) -> Grouped<T> {
    let mut off = Box::new([0u32; NG + 1]);
    for x in v {
        off[group(key(x)) + 1] += 1;
    }
    for g in 0..NG {
        off[g + 1] += off[g];
    }
    let mut pos: [u32; NG] = off[..NG].try_into().unwrap();
    let mut out: Vec<T> = Vec::with_capacity(v.len());
    let dst = out.as_mut_ptr();
    for x in v {
        let g = group(key(x));
        // SAFETY: pos[g] stays within group g's range, which is < v.len().
        unsafe { dst.add(pos[g] as usize).write(*x) };
        pos[g] += 1;
    }
    // SAFETY: every slot 0..v.len() was written exactly once.
    unsafe { out.set_len(v.len()) };
    Grouped { v: out, off }
}

/// Concatenates group `g` from every part.
fn gather<T: Copy>(parts: &[Grouped<T>], g: usize) -> Vec<T> {
    let n: usize = parts.iter().map(|p| p.run(g).len()).sum();
    let mut v = Vec::with_capacity(n);
    for p in parts {
        v.extend_from_slice(p.run(g));
    }
    v
}

/// Frees grouped parts on a background thread (see `free_bg`).
fn free_grouped_bg<T: Copy>(parts: Vec<Grouped<T>>) {
    free_bg(parts.into_iter().map(|p| p.v).collect());
}

/// For each distinct key in `b`, marks the one record to keep: the copy
/// `better` prefers, the first one read on a tie. One pass over a
/// linear-probing table of record indices, sized to stay in cache; keys are
/// uniform hashes, so their low bits index the table directly.
fn pick_unique<T>(b: &[T], key: impl Fn(&T) -> K, better: impl Fn(&T, &T) -> bool) -> Vec<bool> {
    const EMPTY: u32 = u32::MAX;
    let cap = (b.len() + b.len() / 2).next_power_of_two().max(16);
    let mask = cap - 1;
    let mut slot = vec![EMPTY; cap];
    for (i, x) in b.iter().enumerate() {
        let k = key(x);
        let mut h = k.1 as usize & mask;
        loop {
            let s = slot[h];
            if s == EMPTY {
                slot[h] = i as u32;
                break;
            }
            let o = &b[s as usize];
            if key(o) == k {
                if better(x, o) {
                    slot[h] = i as u32;
                }
                break;
            }
            h = (h + 1) & mask;
        }
    }
    let mut keep = vec![false; b.len()];
    for s in slot {
        if s != EMPTY {
            keep[s as usize] = true;
        }
    }
    keep
}

/// Events of key group `g`: keep the smallest-ingest_ts copy of each
/// event_id if it is valid (copies with equal ingest_ts are identical),
/// regroup by person.
fn dedup_events<'a>(parts: &[Grouped<ERec<'a>>], g: usize) -> Grouped<PEv<'a>> {
    let b = gather(parts, g);
    let keep = pick_unique(&b, |e| e.key, |a, o| a.ingest < o.ingest);
    let mut out = Vec::with_capacity(b.len());
    for (e, k) in b.iter().zip(keep) {
        if k && e.ok {
            out.push(PEv { pkey: e.pkey, ts: e.ts, name: e.name, price: e.price, cat: e.cat, typ: e.typ });
        }
    }
    group_local(&out, |x| x.pkey)
}

/// Clicks of key group `g`: copies are identical, keep one per click_id if
/// valid, regroup by person.
fn dedup_clicks<'a>(parts: &[Grouped<CRec<'a>>], g: usize) -> Grouped<PCk<'a>> {
    let b = gather(parts, g);
    let keep = pick_unique(&b, |c| c.key, |_, _| false);
    let mut out = Vec::with_capacity(b.len());
    for (c, k) in b.iter().zip(keep) {
        if k && c.ok {
            out.push(PCk { pkey: c.pkey, ts: c.ts, cid: c.cid, camp: c.camp });
        }
    }
    group_local(&out, |x| x.pkey)
}

/// Sessions, credit and assists for a run of persons. Both slices are sorted
/// by (person, ts); clicks also by click_id within equal ts.
fn process<'a>(
    ev_all: &[PEv<'a>],
    pck: &[PCk],
    cat_rank: &[u16],
    ncat: usize,
) -> (Vec<URow<'a>>, FxHashMap<(u32, i32), CAgg>) {
    let mut urows: Vec<URow> = vec![];
    let mut cagg: FxHashMap<(u32, i32), CAgg> = FxHashMap::default();
    let mut catsum = vec![0i64; ncat];
    let mut touched: Vec<u16> = vec![];
    let mut window: FxHashMap<u32, u32> = FxHashMap::default();
    let top_of = |catsum: &mut Vec<i64>, touched: &mut Vec<u16>| -> Option<u16> {
        let mut best: Option<u16> = None;
        for &c in touched.iter() {
            let s = catsum[c as usize];
            best = match best {
                None => Some(c),
                Some(bc) => {
                    let bs = catsum[bc as usize];
                    if s > bs || (s == bs && cat_rank[c as usize] < cat_rank[bc as usize]) {
                        Some(c)
                    } else {
                        Some(bc)
                    }
                }
            };
        }
        for &c in touched.iter() {
            catsum[c as usize] = 0;
        }
        touched.clear();
        best
    };
    let mut ci = 0;
    let mut a = 0;
    while a < ev_all.len() {
        let p = ev_all[a].pkey;
        let mut b = a + 1;
        while b < ev_all.len() && ev_all[b].pkey == p {
            b += 1;
        }
        let ev = &ev_all[a..b];
        let name = ev[0].name;
        while ci < pck.len() && pck[ci].pkey < p {
            ci += 1;
        }
        let c0 = ci;
        while ci < pck.len() && pck[ci].pkey == p {
            ci += 1;
        }
        let ck = &pck[c0..ci];
        window.clear();
        let (mut lo, mut hi) = (0usize, 0usize);
        let mut u = URow { name, day: i32::MIN, sessions: 0, events: 0, revenue: 0, top: None };
        let mut s = 0;
        while s < ev.len() {
            let start = ev[s].ts;
            let mut e = s + 1;
            while e < ev.len() && ev[e].ts - ev[e - 1].ts <= SESSION_GAP {
                e += 1;
            }
            let sess = &ev[s..e];
            let day = start.div_euclid(MS_DAY) as i32;
            if day != u.day {
                if u.sessions > 0 {
                    let top = top_of(&mut catsum, &mut touched);
                    urows.push(URow { top, ..u });
                }
                u = URow { name, day, sessions: 0, events: 0, revenue: 0, top: None };
            }
            let mut rev = 0i64;
            let mut purch = false;
            for x in sess {
                if x.typ == T_PURCHASE {
                    purch = true;
                    rev += x.price as i64;
                    if catsum[x.cat as usize] == 0 {
                        touched.push(x.cat);
                    }
                    catsum[x.cat as usize] += x.price as i64;
                }
            }
            u.sessions += 1;
            u.events += sess.len() as i64;
            u.revenue += rev;

            // Click window [start - 7d, start].
            while hi < ck.len() && ck[hi].ts <= start {
                *window.entry(ck[hi].camp).or_insert(0) += 1;
                hi += 1;
            }
            while lo < hi && ck[lo].ts < start - WEEK {
                let w = window.get_mut(&ck[lo].camp).unwrap();
                *w -= 1;
                if *w == 0 {
                    window.remove(&ck[lo].camp);
                }
                lo += 1;
            }
            let credited = if hi > lo {
                let mt = ck[hi - 1].ts;
                let mut k = hi - 1;
                while k > lo && ck[k - 1].ts == mt {
                    k -= 1;
                }
                ck[k].camp
            } else {
                ORGANIC
            };
            let ag = cagg.entry((credited, day)).or_default();
            ag.sessions += 1;
            ag.purchasing += purch as i64;
            ag.revenue += rev;
            for &camp in window.keys() {
                cagg.entry((camp, day)).or_default().assisted += 1;
            }
            s = e;
        }
        if u.sessions > 0 {
            let top = top_of(&mut catsum, &mut touched);
            urows.push(URow { top, ..u });
        }
        a = b;
    }
    (urows, cagg)
}

// ---------------------------------------------------------------- main

#[derive(Default, Clone, Copy)]
struct CAgg {
    sessions: i64,
    purchasing: i64,
    revenue: i64,
    assisted: i64,
}

struct URow<'a> {
    name: &'a [u8],
    day: i32,
    sessions: i64,
    events: i64,
    revenue: i64,
    top: Option<u16>,
}

fn main() {
    let t0 = Instant::now();
    let args: Vec<String> = std::env::args().collect();
    let data = PathBuf::from(args.get(1).cloned().or_else(|| std::env::var("DATA_DIR").ok()).unwrap_or("/data".into()));
    let outd = PathBuf::from(args.get(2).cloned().or_else(|| std::env::var("OUTPUT_DIR").ok()).unwrap_or("/output".into()));
    let lap = |name: &str| eprintln!("[t] {name}: {:.3}s", t0.elapsed().as_secs_f64());

    let (ws, we) = manifest(&data);

    // Lookups.
    let prod_rows = small_csv::<2>(&data.join("products.csv"));
    let camp_rows = small_csv::<2>(&data.join("campaigns.csv"));
    let mut cat_names: Vec<Vec<u8>> = vec![];
    let mut cat_ix: FxHashMap<Vec<u8>, u16> = FxHashMap::default();
    let mut prod: FxHashMap<&[u8], u16> = FxHashMap::default();
    for r in &prod_rows {
        let n = cat_names.len() as u16;
        let c = *cat_ix.entry(r[1].clone()).or_insert_with(|| {
            cat_names.push(r[1].clone());
            n
        });
        prod.insert(&r[0], c);
    }
    let unknown = {
        let n = cat_names.len() as u16;
        *cat_ix.entry(b"unknown".to_vec()).or_insert_with(|| {
            cat_names.push(b"unknown".to_vec());
            n
        })
    };
    let mut order: Vec<u16> = (0..cat_names.len() as u16).collect();
    order.sort_by(|&a, &b| cat_names[a as usize].cmp(&cat_names[b as usize]));
    let mut cat_rank = vec![0u16; cat_names.len()];
    for (r, &c) in order.iter().enumerate() {
        cat_rank[c as usize] = r as u16;
    }
    let mut camps: FxHashMap<&[u8], u32> = FxHashMap::default();
    for (i, r) in camp_rows.iter().enumerate() {
        camps.insert(&r[0], i as u32);
    }

    // Links first (small): every event and click is resolved to its person
    // while it is parsed.
    let lk_maps = map_all(&csv_files(&data.join("links")));
    let lk_chunks = chunks(&lk_maps);
    let links: Vec<(&[u8], &[u8])> = lk_chunks.par_iter().flat_map_iter(|c| parse_links(c)).collect();
    let persons = build_persons(&links);
    lap("links");

    let ev_maps = map_all(&csv_files(&data.join("events")));
    let ck_maps = map_all(&csv_files(&data.join("clicks")));
    let ev_chunks = chunks(&ev_maps);
    let ck_chunks = chunks(&ck_maps);
    let cx = Ctx { ws, we, prod: &prod, unknown, camps: &camps, persons: &persons };
    let (ev_parts, ck_parts): (Vec<Grouped<ERec>>, Vec<Grouped<CRec>>) = rayon::join(
        || ev_chunks.par_iter().map(|c| group_local(&parse_events(c, &cx), |x| x.key)).collect(),
        || ck_chunks.par_iter().map(|c| group_local(&parse_clicks(c, &cx), |x| x.key)).collect(),
    );
    lap("parse");

    let n_ev_rows: usize = ev_parts.iter().map(|p| p.v.len()).sum();
    let (ev_d, ck_d): (Vec<Grouped<PEv>>, Vec<Grouped<PCk>>) = rayon::join(
        || (0..NG).into_par_iter().map(|g| dedup_events(&ev_parts, g)).collect(),
        || (0..NG).into_par_iter().map(|g| dedup_clicks(&ck_parts, g)).collect(),
    );
    free_grouped_bg(ev_parts);
    free_grouped_bg(ck_parts);
    let n_kept: usize = ev_d.iter().map(|p| p.v.len()).sum();
    let n_kclicks: usize = ck_d.iter().map(|p| p.v.len()).sum();
    lap("dedup");

    // Each person group holds whole persons: gather, sort, build sessions.
    let ncat = cat_names.len();
    let (urows, cagg) = (0..NG)
        .into_par_iter()
        .map(|h| {
            let mut e = gather(&ev_d, h);
            let mut c = gather(&ck_d, h);
            e.sort_unstable_by(|a, b| a.pkey.cmp(&b.pkey).then(a.ts.cmp(&b.ts)));
            c.sort_unstable_by(|a, b| a.pkey.cmp(&b.pkey).then(a.ts.cmp(&b.ts)).then(a.cid.cmp(b.cid)));
            process(&e, &c, &cat_rank, ncat)
        })
        .reduce(
            || (vec![], FxHashMap::default()),
            |(mut ua, mut ca), (ub, cb)| {
                ua.extend(ub);
                for (k, v) in cb {
                    let a = ca.entry(k).or_default();
                    a.sessions += v.sessions;
                    a.purchasing += v.purchasing;
                    a.revenue += v.revenue;
                    a.assisted += v.assisted;
                }
                (ua, ca)
            },
        );
    lap("sessions");

    // Output: columns borrow the names straight from the inputs.
    let organic: &[u8] = b"organic";
    let u_id: Vec<&[u8]> = urows.par_iter().map(|r| r.name).collect();
    let u_day: Vec<i32> = urows.par_iter().map(|r| r.day).collect();
    let u_sess: Vec<i64> = urows.par_iter().map(|r| r.sessions).collect();
    let u_ev: Vec<i64> = urows.par_iter().map(|r| r.events).collect();
    let u_rev: Vec<i64> = urows.par_iter().map(|r| r.revenue).collect();
    let u_top: Vec<Option<&[u8]>> = urows.par_iter().map(|r| r.top.map(|c| &cat_names[c as usize][..])).collect();
    let mut ck_rows: Vec<(&(u32, i32), &CAgg)> = cagg.iter().collect();
    ck_rows.sort_by_key(|x| *x.0);
    let cname = |c: u32| -> (&[u8], &[u8]) {
        if c == ORGANIC {
            (organic, organic)
        } else {
            (&camp_rows[c as usize][0], &camp_rows[c as usize][1])
        }
    };
    let c_id: Vec<&[u8]> = ck_rows.iter().map(|x| cname(x.0 .0).0).collect();
    let c_ch: Vec<&[u8]> = ck_rows.iter().map(|x| cname(x.0 .0).1).collect();
    let c_day: Vec<i32> = ck_rows.iter().map(|x| x.0 .1).collect();
    let c_sess: Vec<i64> = ck_rows.iter().map(|x| x.1.sessions).collect();
    let c_purch: Vec<i64> = ck_rows.iter().map(|x| x.1.purchasing).collect();
    let c_rev: Vec<i64> = ck_rows.iter().map(|x| x.1.revenue).collect();
    let c_ass: Vec<i64> = ck_rows.iter().map(|x| x.1.assisted).collect();
    lap("rows");
    use out::Col;
    let parts = rayon::current_num_threads().clamp(1, 16);
    rayon::join(
        || {
            let cols = [
                ("user_id", Col::Str(&u_id)),
                ("day", Col::Date(&u_day)),
                ("sessions", Col::I64(&u_sess)),
                ("events", Col::I64(&u_ev)),
                ("revenue_cents", Col::I64(&u_rev)),
                ("top_category", Col::OptStr(&u_top)),
            ];
            out::write_table(&outd.join("user_daily"), &cols, parts).expect("write user_daily")
        },
        || {
            let cols = [
                ("campaign_id", Col::Str(&c_id)),
                ("channel", Col::Str(&c_ch)),
                ("day", Col::Date(&c_day)),
                ("sessions", Col::I64(&c_sess)),
                ("purchasing_sessions", Col::I64(&c_purch)),
                ("revenue_cents", Col::I64(&c_rev)),
                ("assisted_sessions", Col::I64(&c_ass)),
            ];
            out::write_table(&outd.join("campaign_daily"), &cols, 1).expect("write campaign_daily")
        },
    );
    lap("write");

    // Self-check from the rules.
    let us: i64 = u_sess.iter().sum();
    let cs: i64 = c_sess.iter().sum();
    let urv: i64 = u_rev.iter().sum();
    let crv: i64 = c_rev.iter().sum();
    eprintln!(
        "[check] rows user={} camp={} sessions {us}/{cs} revenue {urv}/{crv} events={n_ev_rows} events_kept={} clicks_kept={} links={}",
        u_day.len(),
        c_day.len(),
        n_kept,
        n_kclicks,
        links.len()
    );
    if us != cs || urv != crv {
        eprintln!("[check] MISMATCH");
    }
    std::process::exit(0);
}
