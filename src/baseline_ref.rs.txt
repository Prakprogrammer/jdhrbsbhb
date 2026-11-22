//! Shopping Sessions pipeline, baseline: a direct implementation of rules.md.
//! Reads DATA_DIR (default /data), writes OUTPUT_DIR (default /output).

mod csv;
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

struct Ev<'a> {
    eid: &'a [u8],
    uid: &'a [u8],
    pid: &'a [u8],
    ts: i64,
    ingest: i64,
    price: u32,
    typ: u8,
    ok: bool,
}

struct Ck<'a> {
    cid: &'a [u8],
    uid: &'a [u8],
    ts: i64,
    camp: u32,
    ok: bool,
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

fn parse_events<'a>(chunk: &'a [u8], ws: i64, we: i64) -> Vec<Ev<'a>> {
    let mut v = Vec::with_capacity(chunk.len() / 90);
    for line in chunk.split(|&c| c == b'\n') {
        let Some(f) = csv::fields::<7>(line) else { continue };
        if f[0].is_empty() {
            continue;
        }
        let ingest = ts::parse(f[3]).unwrap_or(i64::MAX);
        let t = ts::parse(f[2]);
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
            && ws <= tsv
            && tsv < we
            && typ != 0
            && !f[5].is_empty()
            && price.is_some()
            && ingest.saturating_sub(tsv) <= LATE;
        v.push(Ev {
            eid: f[0],
            uid: f[1],
            pid: f[5],
            ts: tsv,
            ingest,
            price: price.unwrap_or(0),
            typ,
            ok,
        });
    }
    v
}

fn parse_clicks<'a>(chunk: &'a [u8], ws: i64, we: i64, camps: &FxHashMap<&[u8], u32>) -> Vec<Ck<'a>> {
    let mut v = Vec::with_capacity(chunk.len() / 50);
    let lo = ws - WEEK;
    for line in chunk.split(|&c| c == b'\n') {
        let Some(f) = csv::fields::<4>(line) else { continue };
        if f[0].is_empty() {
            continue;
        }
        let t = ts::parse(f[3]);
        let tsv = t.unwrap_or(i64::MIN);
        let camp = camps.get(f[2]).copied();
        let ok = !f[1].is_empty() && t.is_some() && lo <= tsv && tsv < we && camp.is_some();
        v.push(Ck { cid: f[0], uid: f[1], ts: tsv, camp: camp.unwrap_or(0), ok });
    }
    v
}

fn parse_links(chunk: &[u8]) -> Vec<(&[u8], &[u8])> {
    let mut v = vec![];
    for line in chunk.split(|&c| c == b'\n') {
        let Some(f) = csv::fields::<2>(line) else { continue };
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

// ---------------------------------------------------------------- main

#[derive(Default, Clone, Copy)]
struct CAgg {
    sessions: i64,
    purchasing: i64,
    revenue: i64,
    assisted: i64,
}

struct URow {
    pid: u32,
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
    // Category rank in byte order, for the top_category tie-break.
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

    // Read and parse.
    let ev_maps = map_all(&csv_files(&data.join("events")));
    let ck_maps = map_all(&csv_files(&data.join("clicks")));
    let lk_maps = map_all(&csv_files(&data.join("links")));
    let ev_chunks = chunks(&ev_maps);
    let ck_chunks = chunks(&ck_maps);
    let lk_chunks = chunks(&lk_maps);

    let (mut evs, (mut cks, links)) = rayon::join(
        || ev_chunks.par_iter().flat_map_iter(|c| parse_events(c, ws, we)).collect::<Vec<_>>(),
        || {
            rayon::join(
                || ck_chunks.par_iter().flat_map_iter(|c| parse_clicks(c, ws, we, &camps)).collect::<Vec<_>>(),
                || lk_chunks.par_iter().flat_map_iter(|c| parse_links(c)).collect::<Vec<_>>(),
            )
        },
    );
    lap("parse");

    // Dedup events: smallest ingest_ts per event_id, then keep it if valid.
    evs.par_sort_unstable_by(|a, b| a.eid.cmp(b.eid).then(a.ingest.cmp(&b.ingest)));
    let mut kept: Vec<&Ev> = Vec::with_capacity(evs.len());
    let mut i = 0;
    while i < evs.len() {
        let e = &evs[i];
        if e.ok {
            kept.push(e);
        }
        let mut j = i + 1;
        while j < evs.len() && evs[j].eid == e.eid {
            j += 1;
        }
        i = j;
    }
    // Dedup clicks: copies are identical, keep any one.
    cks.par_sort_unstable_by(|a, b| a.cid.cmp(b.cid));
    let mut kclicks: Vec<&Ck> = Vec::with_capacity(cks.len());
    let mut i = 0;
    while i < cks.len() {
        let c = &cks[i];
        if c.ok {
            kclicks.push(c);
        }
        let mut j = i + 1;
        while j < cks.len() && cks[j].cid == c.cid {
            j += 1;
        }
        i = j;
    }
    lap("dedup");

    // Linked IDs.
    let mut lid: FxHashMap<&[u8], u32> = FxHashMap::default();
    let mut ids: Vec<&[u8]> = vec![];
    let mut parent: Vec<u32> = vec![];
    for &(a, b) in &links {
        let ia = *lid.entry(a).or_insert_with(|| {
            ids.push(a);
            parent.push(ids.len() as u32 - 1);
            ids.len() as u32 - 1
        });
        let ib = *lid.entry(b).or_insert_with(|| {
            ids.push(b);
            parent.push(ids.len() as u32 - 1);
            ids.len() as u32 - 1
        });
        let (ra, rb) = (find(&mut parent, ia), find(&mut parent, ib));
        if ra != rb {
            parent[ra.max(rb) as usize] = ra.min(rb);
        }
    }
    let mut name: Vec<&[u8]> = vec![&[]; ids.len()];
    let mut has_name = vec![false; ids.len()];
    for i in 0..ids.len() as u32 {
        let r = find(&mut parent, i) as usize;
        if !has_name[r] || ids[i as usize] < name[r] {
            name[r] = ids[i as usize];
            has_name[r] = true;
        }
    }
    let roots: Vec<u32> = (0..ids.len() as u32).map(|i| find(&mut parent, i)).collect();
    lap("links");

    // Persons with events.
    let mut pmap: FxHashMap<&[u8], u32> = FxHashMap::default();
    let mut pnames: Vec<&[u8]> = vec![];
    // (pid, ts, typ, price, cat)
    let mut pev: Vec<(u32, i64, u8, u32, u16)> = Vec::with_capacity(kept.len());
    for e in &kept {
        let pn: &[u8] = match lid.get(e.uid) {
            Some(&i) => name[roots[i as usize] as usize],
            None => e.uid,
        };
        let n = pnames.len() as u32;
        let p = *pmap.entry(pn).or_insert_with(|| {
            pnames.push(pn);
            n
        });
        let cat = prod.get(e.pid).copied().unwrap_or(unknown);
        pev.push((p, e.ts, e.typ, e.price, cat));
    }
    // (pid, ts, cid, camp)
    let mut pck: Vec<(u32, i64, &[u8], u32)> = Vec::with_capacity(kclicks.len());
    for c in &kclicks {
        let pn: &[u8] = match lid.get(c.uid) {
            Some(&i) => name[roots[i as usize] as usize],
            None => c.uid,
        };
        if let Some(&p) = pmap.get(pn) {
            pck.push((p, c.ts, c.cid, c.camp));
        }
    }
    pev.par_sort_unstable_by_key(|x| (x.0, x.1));
    pck.par_sort_unstable_by(|a, b| a.0.cmp(&b.0).then(a.1.cmp(&b.1)).then(a.2.cmp(b.2)));
    lap("persons");

    // Person ranges.
    let mut ranges: Vec<(u32, usize, usize)> = vec![];
    let mut i = 0;
    while i < pev.len() {
        let p = pev[i].0;
        let mut j = i + 1;
        while j < pev.len() && pev[j].0 == p {
            j += 1;
        }
        ranges.push((p, i, j));
        i = j;
    }

    let ncat = cat_names.len();
    let (urows, cagg) = ranges
        .par_chunks(256)
        .map(|rs| {
            let mut urows: Vec<URow> = vec![];
            let mut cagg: FxHashMap<(u32, i32), CAgg> = FxHashMap::default();
            let mut catsum = vec![0i64; ncat];
            let mut window: FxHashMap<u32, u32> = FxHashMap::default();
            for &(p, a, b) in rs {
                let ev = &pev[a..b];
                let c0 = pck.partition_point(|x| x.0 < p);
                let c1 = pck.partition_point(|x| x.0 <= p);
                let ck = &pck[c0..c1];
                window.clear();
                let (mut lo, mut hi) = (0usize, 0usize);
                // Current user-day accumulator.
                let mut cur_day = i32::MIN;
                let mut u = URow { pid: p, day: 0, sessions: 0, events: 0, revenue: 0, top: None };
                let mut touched: Vec<u16> = vec![];
                let flush = |u: &mut URow, catsum: &mut Vec<i64>, touched: &mut Vec<u16>, urows: &mut Vec<URow>| {
                    if u.sessions == 0 {
                        return;
                    }
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
                    urows.push(URow { top: best, ..*u });
                };
                let mut s = 0;
                while s < ev.len() {
                    let start = ev[s].1;
                    let mut e = s + 1;
                    while e < ev.len() && ev[e].1 - ev[e - 1].1 <= SESSION_GAP {
                        e += 1;
                    }
                    let sess = &ev[s..e];
                    let day = start.div_euclid(MS_DAY) as i32;
                    let mut rev = 0i64;
                    let mut purch = false;
                    if day != cur_day {
                        flush(&mut u, &mut catsum, &mut touched, &mut urows);
                        u = URow { pid: p, day, sessions: 0, events: 0, revenue: 0, top: None };
                        cur_day = day;
                    }
                    for x in sess {
                        if x.2 == T_PURCHASE {
                            purch = true;
                            rev += x.3 as i64;
                            if catsum[x.4 as usize] == 0 {
                                touched.push(x.4);
                            }
                            catsum[x.4 as usize] += x.3 as i64;
                        }
                    }
                    u.sessions += 1;
                    u.events += sess.len() as i64;
                    u.revenue += rev;

                    // Click window [start - 7d, start].
                    while hi < ck.len() && ck[hi].1 <= start {
                        *window.entry(ck[hi].3).or_insert(0) += 1;
                        hi += 1;
                    }
                    while lo < hi && ck[lo].1 < start - WEEK {
                        let w = window.get_mut(&ck[lo].3).unwrap();
                        *w -= 1;
                        if *w == 0 {
                            window.remove(&ck[lo].3);
                        }
                        lo += 1;
                    }
                    let credited = if hi > lo {
                        let mt = ck[hi - 1].1;
                        let mut k = hi - 1;
                        while k > lo && ck[k - 1].1 == mt {
                            k -= 1;
                        }
                        ck[k].3
                    } else {
                        ORGANIC
                    };
                    let a = cagg.entry((credited, day)).or_default();
                    a.sessions += 1;
                    a.purchasing += purch as i64;
                    a.revenue += rev;
                    for &camp in window.keys() {
                        cagg.entry((camp, day)).or_default().assisted += 1;
                    }
                    s = e;
                }
                flush(&mut u, &mut catsum, &mut touched, &mut urows);
            }
            (urows, cagg)
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
        user_id: urows.iter().map(|r| ByteArray::from(pnames[r.pid as usize].to_vec())).collect(),
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
    out::write_user(&outd.join("user_daily"), &ur).expect("write user_daily");
    out::write_camp(&outd.join("campaign_daily"), &cr).expect("write campaign_daily");
    lap("write");

    // Self-check from the rules.
    let us: i64 = ur.sessions.iter().sum();
    let cs: i64 = cr.sessions.iter().sum();
    let urv: i64 = ur.revenue.iter().sum();
    let crv: i64 = cr.revenue.iter().sum();
    eprintln!(
        "[check] rows user={} camp={} sessions {us}/{cs} revenue {urv}/{crv} events_kept={} clicks_kept={} links={}",
        ur.day.len(),
        cr.day.len(),
        kept.len(),
        kclicks.len(),
        links.len()
    );
    if us != cs || urv != crv {
        eprintln!("[check] MISMATCH");
    }
    std::process::exit(0);
}
