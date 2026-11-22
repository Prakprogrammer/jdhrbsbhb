//! 128-bit keys for ID strings. Two independently seeded 64-bit lanes over
//! the bytes and the length, so equal strings give equal keys and distinct
//! strings collide with probability about 2^-128 per pair.

const P0: u64 = 0xa076_1d64_78bd_642f;
const P1: u64 = 0xe703_7ed1_a0b4_28db;
const P2: u64 = 0x8ebc_6af0_9c88_c6e3;
const P3: u64 = 0x5899_65cc_7537_4cc3;

#[inline(always)]
fn mum(a: u64, b: u64) -> u64 {
    let r = (a as u128).wrapping_mul(b as u128);
    (r as u64) ^ ((r >> 64) as u64)
}

#[inline(always)]
fn lane(s: &[u8], seed: u64) -> u64 {
    let n = s.len();
    let mut h = seed ^ mum(seed ^ P0, n as u64 ^ P1);
    let mut i = 0;
    while i + 8 <= n {
        let w = u64::from_le_bytes(s[i..i + 8].try_into().unwrap());
        h = mum(h ^ w ^ P2, P1 ^ h.rotate_left(23));
        i += 8;
    }
    if i < n {
        let mut b = [0u8; 8];
        b[..n - i].copy_from_slice(&s[i..]);
        let w = u64::from_le_bytes(b);
        h = mum(h ^ w ^ P3, P0 ^ h.rotate_left(41));
    }
    mum(h ^ P1, h ^ P2 ^ n as u64)
}

#[inline]
pub fn k128(s: &[u8]) -> u128 {
    ((lane(s, 0x243f_6a88_85a3_08d3) as u128) << 64) | lane(s, 0x1319_8a2e_0370_7344) as u128
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn distinct() {
        let mut s: Vec<String> = (0..200_000u32)
            .flat_map(|i| [format!("u{i:x}"), format!("u{i}"), format!("{i}"), format!("U{i:x}")])
            .collect();
        s.extend(["".into(), "\0".into(), "\0\0".into(), "a\0".into()]);
        s.sort_unstable();
        s.dedup();
        let mut v: Vec<u128> = s.iter().map(|x| k128(x.as_bytes())).collect();
        v.sort_unstable();
        v.dedup();
        assert_eq!(v.len(), s.len());
        assert_eq!(k128(b"abc"), k128(b"abc"));
        assert_ne!(k128(b"abc"), k128(b"abc\0"));
    }
}
