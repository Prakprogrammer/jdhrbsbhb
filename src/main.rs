//! Shopping Sessions pipeline: rules.md with 128-bit ID keys and parallel stages.
//! Reads DATA_DIR (default /data), writes OUTPUT_DIR (default /output).

mod alloc;
mod csv;
mod key;
mod part;
mod out;
mod ts;

use memmap2::Mmap;
use parquet::data_type::ByteArray;
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
        .iter()
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

/// One event line (56 bytes). `key` is the key of `event_id`. The person is
/// resolved only for the copy that survives dedup, not for every line.
#[derive(Clone, Copy)]
struct ERec<'a> {
    key: K,
    ingest: i64,
    ts: i64,
    uid: &'a [u8],
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

/// The person of a user ID: (person key, person name).
#[inline]
fn person<'a>(persons: &Persons<'a>, uid: &'a [u8]) -> (u128, &'a [u8]) {
    let k = key::k128(uid);
    match persons.of.get(&k) {
        Some(&i) => (persons.pkey[i as usize], persons.name[i as usize]),
        None => (k, uid),
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
        let cat = if ok { cx.prod.get(f[5]).copied().unwrap_or(cx.unknown) } else { 0 };
        let key = if *X_NOKEY { f[0].len() as u128 } else { key::k128(f[0]) };
        v.push(ERec { key: key.into(), ingest, ts: tsv, uid: f[1], price: price.unwrap_or(0), cat, typ, ok });
    }
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
        let pkey = if ok { person(cx.persons, f[1]).0 } else { 0 };
        v.push(CRec { key: key::k128(f[0]).into(), pkey: pkey.into(), ts: tsv, cid: f[0], camp: camp.unwrap_or(0), ok });
    }
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

/// Linked IDs: key of each linked ID -> (person key, person name).
struct Persons<'a> {
    of: FxHashMap<u128, u32>,
    pkey: Vec<u128>,
    name: Vec<&'a [u8]>,
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
    let name: Vec<&[u8]> = (0..n).map(|i| cname[root[i] as usize].unwrap()).collect();
    let pkey: Vec<u128> = (0..n).map(|i| rkey[root[i] as usize]).collect();
    Persons { of, pkey, name }
}

// ---------------------------------------------------------------- partitioning

const NB: usize = 1 << 12;

#[inline]
fn bucket(k: K) -> usize {
    (k.0 >> (64 - 12)) as usize
}

fn split_mut<'s, T>(v: &'s mut [T], off: &[usize]) -> Vec<&'s mut [T]> {
    let mut out = Vec::with_capacity(off.len() - 1);
    let mut rest = v;
    for w in off.windows(2) {
        let (a, b) = rest.split_at_mut(w[1] - w[0]);
        out.push(a);
        rest = b;
    }
    out
}

/// Buckets per dedup task: each task turns a run of id-buckets into one
/// vector of survivors, so the next scatter has few input pieces.
const GROUP: usize = 64;

/// Events: scatter by event_id key, keep the smallest ingest_ts copy of each
/// key if it is valid. Returns survivors as pieces for the person scatter.
fn dedup_events<'a>(parts: Vec<Vec<ERec<'a>>>, persons: &Persons<'a>) -> Vec<Vec<PEv<'a>>> {
    let (mut v, off) = {
        let pieces: Vec<&[ERec]> = parts.iter().map(|p| &p[..]).collect();
        part::scatter_pieces(&pieces, NB, |x| bucket(x.key))
    };
    free_bg(parts);
    let bs = split_mut(&mut v, &off);
    let mut groups: Vec<Vec<&mut [ERec]>> = vec![];
    let mut it = bs.into_iter();
    loop {
        let g: Vec<&mut [ERec]> = it.by_ref().take(GROUP).collect();
        if g.is_empty() {
            break;
        }
        groups.push(g);
    }
    groups
        .into_par_iter()
        .map(|g| {
            let mut out = Vec::with_capacity(g.iter().map(|b| b.len()).sum());
            for b in g {
                b.sort_unstable_by(|x, y| x.key.cmp(&y.key).then(x.ingest.cmp(&y.ingest)));
                for i in 0..b.len() {
                    let e = &b[i];
                    if (i == 0 || b[i - 1].key != e.key) && e.ok {
                        let (pk, name) = person(persons, e.uid);
                        out.push(PEv { pkey: pk.into(), ts: e.ts, name, price: e.price, cat: e.cat, typ: e.typ });
                    }
                }
            }
            out
        })
        .collect()
}

/// Clicks: copies are identical, keep one per click_id if valid.
fn dedup_clicks<'a>(parts: Vec<Vec<CRec<'a>>>) -> Vec<Vec<PCk<'a>>> {
    let (mut v, off) = {
        let pieces: Vec<&[CRec]> = parts.iter().map(|p| &p[..]).collect();
        part::scatter_pieces(&pieces, NB, |x| bucket(x.key))
    };
    free_bg(parts);
    let bs = split_mut(&mut v, &off);
    let mut groups: Vec<Vec<&mut [CRec]>> = vec![];
    let mut it = bs.into_iter();
    loop {
        let g: Vec<&mut [CRec]> = it.by_ref().take(GROUP).collect();
        if g.is_empty() {
            break;
        }
        groups.push(g);
    }
    groups
        .into_par_iter()
        .map(|g| {
            let mut out = Vec::with_capacity(g.iter().map(|b| b.len()).sum());
            for b in g {
                b.sort_unstable_by(|x, y| x.key.cmp(&y.key));
                for i in 0..b.len() {
                    let c = &b[i];
                    if (i == 0 || b[i - 1].key != c.key) && c.ok {
                        out.push(PCk { pkey: c.pkey, ts: c.ts, cid: c.cid, camp: c.camp });
                    }
                }
            }
            out
        })
        .collect()
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
    let (ev_parts, ck_parts): (Vec<Vec<ERec>>, Vec<Vec<CRec>>) = rayon::join(
        || ev_chunks.par_iter().map(|c| parse_events(c, &cx)).collect(),
        || ck_chunks.par_iter().map(|c| parse_clicks(c, &cx)).collect(),
    );
    lap("parse");

    let n_ev_rows: usize = ev_parts.iter().map(|p| p.len()).sum();
    let pr = &persons;
    let (ev_surv, ck_surv) = rayon::join(move || dedup_events(ev_parts, pr), move || dedup_clicks(ck_parts));
    let n_kept: usize = ev_surv.iter().map(|p| p.len()).sum();
    let n_kclicks: usize = ck_surv.iter().map(|p| p.len()).sum();
    lap("dedup");

    let ((mut pev, eoff), (mut pck, coff)) = {
        let ev_pieces: Vec<&[PEv]> = ev_surv.iter().map(|p| &p[..]).collect();
        let ck_pieces: Vec<&[PCk]> = ck_surv.iter().map(|p| &p[..]).collect();
        rayon::join(
            || part::scatter_pieces(&ev_pieces, NB, |x| bucket(x.pkey)),
            || part::scatter_pieces(&ck_pieces, NB, |x| bucket(x.pkey)),
        )
    };
    free_bg(ev_surv);
    free_bg(ck_surv);
    lap("persons");


    // Each bucket holds whole persons: sort it and build its sessions.
    let ncat = cat_names.len();
    let eb = split_mut(&mut pev, &eoff);
    let cb = split_mut(&mut pck, &coff);
    let (urows, cagg) = eb
        .into_par_iter()
        .zip(cb.into_par_iter())
        .map(|(e, c)| {
            e.sort_unstable_by(|a, b| a.pkey.cmp(&b.pkey).then(a.ts.cmp(&b.ts)));
            c.sort_unstable_by(|a, b| a.pkey.cmp(&b.pkey).then(a.ts.cmp(&b.ts)).then(a.cid.cmp(b.cid)));
            process(e, c, &cat_rank, ncat)
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

    // Output.
    let ur = out::UserRows {
        user_id: urows.iter().map(|r| ByteArray::from(r.name.to_vec())).collect(),
        day: urows.iter().map(|r| r.day).collect(),
        sessions: urows.iter().map(|r| r.sessions).collect(),
        events: urows.iter().map(|r| r.events).collect(),
        revenue: urows.iter().map(|r| r.revenue).collect(),
        top: urows.iter().map(|r| r.top.map(|c| ByteArray::from(cat_names[c as usize].clone()))).collect(),
    };
    let mut ck_rows: Vec<(&(u32, i32), &CAgg)> = cagg.iter().collect();
    ck_rows.sort_by_key(|x| *x.0);
    let cname = |c: u32| -> (Vec<u8>, Vec<u8>) {
        if c == ORGANIC {
            (b"organic".to_vec(), b"organic".to_vec())
        } else {
            (camp_rows[c as usize][0].clone(), camp_rows[c as usize][1].clone())
        }
    };
    let cr = out::CampRows {
        campaign_id: ck_rows.iter().map(|x| ByteArray::from(cname(x.0 .0).0)).collect(),
        channel: ck_rows.iter().map(|x| ByteArray::from(cname(x.0 .0).1)).collect(),
        day: ck_rows.iter().map(|x| x.0 .1).collect(),
        sessions: ck_rows.iter().map(|x| x.1.sessions).collect(),
        purchasing: ck_rows.iter().map(|x| x.1.purchasing).collect(),
        revenue: ck_rows.iter().map(|x| x.1.revenue).collect(),
        assisted: ck_rows.iter().map(|x| x.1.assisted).collect(),
    };
    lap("rows");
    rayon::join(
        || out::write_user(&outd.join("user_daily"), &ur).expect("write user_daily"),
        || out::write_camp(&outd.join("campaign_daily"), &cr).expect("write campaign_daily"),
    );
    lap("write");

    // Self-check from the rules.
    let us: i64 = ur.sessions.iter().sum();
    let cs: i64 = cr.sessions.iter().sum();
    let urv: i64 = ur.revenue.iter().sum();
    let crv: i64 = cr.revenue.iter().sum();
    eprintln!(
        "[check] rows user={} camp={} sessions {us}/{cs} revenue {urv}/{crv} events={n_ev_rows} events_kept={} clicks_kept={} links={}",
        ur.day.len(),
        cr.day.len(),
        n_kept,
        n_kclicks,
        links.len()
    );
    if us != cs || urv != crv {
        eprintln!("[check] MISMATCH");
    }
    std::process::exit(0);
}
