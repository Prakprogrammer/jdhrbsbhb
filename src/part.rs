//! Parallel counting scatter: partitions items into `nb` buckets by a
//! bucket function, keeping each bucket contiguous. Two passes over the
//! input (count, then write), both parallel over fixed-size input chunks.

use rayon::prelude::*;
use std::mem::MaybeUninit;

const CH: usize = 1 << 16;

struct SendPtr<T>(*mut T);
unsafe impl<T> Send for SendPtr<T> {}
unsafe impl<T> Sync for SendPtr<T> {}

/// Returns the items grouped by bucket and the bucket start offsets
/// (`nb + 1` entries, so bucket `b` is `out[off[b]..off[b + 1]]`).
pub fn scatter<T, F>(items: &[T], nb: usize, bucket: F) -> (Vec<T>, Vec<usize>)
where
    T: Copy + Send + Sync,
    F: Fn(&T) -> usize + Sync,
{
    let n = items.len();
    let counts: Vec<Vec<u32>> = items
        .par_chunks(CH)
        .map(|c| {
            let mut k = vec![0u32; nb];
            for x in c {
                k[bucket(x)] += 1;
            }
            k
        })
        .collect();
    // Per-chunk write positions, bucket-major so each bucket is contiguous.
    let mut pos: Vec<Vec<usize>> = vec![vec![0; nb]; counts.len()];
    let mut off = vec![0usize; nb + 1];
    let mut run = 0usize;
    for b in 0..nb {
        off[b] = run;
        for (c, k) in counts.iter().enumerate() {
            pos[c][b] = run;
            run += k[b] as usize;
        }
    }
    off[nb] = run;
    debug_assert_eq!(run, n);

    let mut out: Vec<MaybeUninit<T>> = Vec::with_capacity(n);
    unsafe { out.set_len(n) };
    let base = SendPtr(out.as_mut_ptr());
    items.par_chunks(CH).zip(pos.into_par_iter()).for_each(|(c, mut p)| {
        let base = &base;
        for x in c {
            let b = bucket(x);
            // SAFETY: every chunk owns disjoint ranges [pos[c][b], pos[c][b] + count).
            unsafe { (*base.0.add(p[b])).write(*x) };
            p[b] += 1;
        }
    });
    // SAFETY: all n slots were written exactly once above.
    let out = unsafe {
        let mut out = std::mem::ManuallyDrop::new(out);
        Vec::from_raw_parts(out.as_mut_ptr() as *mut T, n, out.capacity())
    };
    (out, off)
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn groups() {
        let v: Vec<u32> = (0..300_000u32).map(|i| i.wrapping_mul(2654435761)).collect();
        let (o, off) = scatter(&v, 64, |x| (*x >> 26) as usize);
        assert_eq!(o.len(), v.len());
        for b in 0..64 {
            assert!(o[off[b]..off[b + 1]].iter().all(|x| (*x >> 26) as usize == b));
        }
        let mut a = v.clone();
        let mut c = o.clone();
        a.sort();
        c.sort();
        assert_eq!(a, c);
    }
}

/// Like `scatter`, but over several input pieces (for example one vector per
/// parse chunk), avoiding a concatenation first.
pub fn scatter_pieces<T, F>(pieces: &[&[T]], nb: usize, bucket: F) -> (Vec<T>, Vec<usize>)
where
    T: Copy + Send + Sync,
    F: Fn(&T) -> usize + Sync,
{
    let n: usize = pieces.iter().map(|p| p.len()).sum();
    let counts: Vec<Vec<u32>> = pieces
        .par_iter()
        .map(|c| {
            let mut k = vec![0u32; nb];
            for x in c.iter() {
                k[bucket(x)] += 1;
            }
            k
        })
        .collect();
    let mut pos: Vec<Vec<usize>> = vec![vec![0; nb]; counts.len()];
    let mut off = vec![0usize; nb + 1];
    let mut run = 0usize;
    for b in 0..nb {
        off[b] = run;
        for (c, k) in counts.iter().enumerate() {
            pos[c][b] = run;
            run += k[b] as usize;
        }
    }
    off[nb] = run;
    let mut out: Vec<MaybeUninit<T>> = Vec::with_capacity(n);
    unsafe { out.set_len(n) };
    let base = SendPtr(out.as_mut_ptr());
    pieces.par_iter().zip(pos.into_par_iter()).for_each(|(c, mut p)| {
        let base = &base;
        for x in c.iter() {
            let b = bucket(x);
            // SAFETY: disjoint ranges per piece and bucket, see `scatter`.
            unsafe { (*base.0.add(p[b])).write(*x) };
            p[b] += 1;
        }
    });
    let out = unsafe {
        let mut out = std::mem::ManuallyDrop::new(out);
        Vec::from_raw_parts(out.as_mut_ptr() as *mut T, n, out.capacity())
    };
    (out, off)
}
