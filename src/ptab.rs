//! Open-addressing table from a 128-bit ID key to a u32 value, built once
//! and then only read. Linear probing over slots indexed by the low key bits
//! (keys are already uniform hashes), so a caller can prefetch a key's slot
//! well before looking it up. Key 0 marks an empty slot.

#[derive(Clone, Copy)]
#[repr(C, align(32))]
struct Slot {
    k: u128,
    v: u32,
}

pub struct PTab {
    slots: Vec<Slot>,
    mask: usize,
}

impl PTab {
    pub fn new(entries: &[(u128, u32)]) -> PTab {
        let cap = (entries.len() * 2 + 16).next_power_of_two();
        let mut slots = vec![Slot { k: 0, v: 0 }; cap];
        let mask = cap - 1;
        for &(k, v) in entries {
            let mut i = (k as usize) & mask;
            loop {
                if slots[i].k == 0 {
                    slots[i] = Slot { k, v };
                    break;
                }
                if slots[i].k == k {
                    break;
                }
                i = (i + 1) & mask;
            }
        }
        PTab { slots, mask }
    }

    #[inline(always)]
    pub fn prefetch(&self, k: u128) {
        #[cfg(target_arch = "x86_64")]
        unsafe {
            use std::arch::x86_64::{_mm_prefetch, _MM_HINT_T0};
            let i = (k as usize) & self.mask;
            _mm_prefetch(self.slots.as_ptr().add(i) as *const i8, _MM_HINT_T0);
        }
    }

    #[inline(always)]
    pub fn get(&self, k: u128) -> Option<u32> {
        let mut i = (k as usize) & self.mask;
        loop {
            // SAFETY: i is always masked into range.
            let s = unsafe { self.slots.get_unchecked(i) };
            if s.k == k {
                return Some(s.v);
            }
            if s.k == 0 {
                return None;
            }
            i = (i + 1) & self.mask;
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn lookups() {
        let e: Vec<(u128, u32)> = (1..50_000u32).map(|i| (crate::key::k128(&i.to_le_bytes()), i)).collect();
        let t = PTab::new(&e);
        for &(k, v) in &e {
            assert_eq!(t.get(k), Some(v));
        }
        assert_eq!(t.get(crate::key::k128(b"absent")), None);
    }
}
