//! Global allocator: large blocks (>= 1 MiB) come straight from mmap with
//! MADV_HUGEPAGE, so the big record arrays fault in 2 MiB pages instead of
//! 4 KiB ones. Small blocks go to the system allocator.

use std::alloc::{GlobalAlloc, Layout, System};

const BIG: usize = 1 << 20;
const HUGE: usize = 2 << 20;

extern "C" {
    fn mmap(addr: *mut u8, len: usize, prot: i32, flags: i32, fd: i32, off: i64) -> *mut u8;
    fn munmap(addr: *mut u8, len: usize) -> i32;
    fn madvise(addr: *mut u8, len: usize, advice: i32) -> i32;
    fn mremap(old: *mut u8, old_len: usize, new_len: usize, flags: i32, ...) -> *mut u8;
}
const PROT_RW: i32 = 0x1 | 0x2;
const MAP_PRIVATE_ANON: i32 = 0x02 | 0x20;
const MADV_HUGEPAGE: i32 = 14;
const MREMAP_MAYMOVE: i32 = 1;

pub struct Alloc;

#[inline]
fn round(n: usize) -> usize {
    (n + HUGE - 1) & !(HUGE - 1)
}

unsafe fn big_alloc(size: usize) -> *mut u8 {
    let len = round(size);
    let p = mmap(std::ptr::null_mut(), len, PROT_RW, MAP_PRIVATE_ANON, -1, 0);
    if p as isize == -1 {
        return std::ptr::null_mut();
    }
    madvise(p, len, MADV_HUGEPAGE);
    p
}

unsafe impl GlobalAlloc for Alloc {
    #[inline]
    unsafe fn alloc(&self, l: Layout) -> *mut u8 {
        if l.size() >= BIG && l.align() <= 4096 {
            big_alloc(l.size())
        } else {
            System.alloc(l)
        }
    }
    #[inline]
    unsafe fn alloc_zeroed(&self, l: Layout) -> *mut u8 {
        if l.size() >= BIG && l.align() <= 4096 {
            big_alloc(l.size()) // fresh anonymous pages are already zero
        } else {
            System.alloc_zeroed(l)
        }
    }
    #[inline]
    unsafe fn dealloc(&self, p: *mut u8, l: Layout) {
        if l.size() >= BIG && l.align() <= 4096 {
            munmap(p, round(l.size()));
        } else {
            System.dealloc(p, l)
        }
    }
    unsafe fn realloc(&self, p: *mut u8, l: Layout, new: usize) -> *mut u8 {
        let old_big = l.size() >= BIG && l.align() <= 4096;
        let new_big = new >= BIG && l.align() <= 4096;
        match (old_big, new_big) {
            (false, false) => System.realloc(p, l, new),
            (true, true) => {
                let (ol, nl) = (round(l.size()), round(new));
                if ol == nl {
                    return p;
                }
                let q = mremap(p, ol, nl, MREMAP_MAYMOVE);
                if q as isize == -1 {
                    return std::ptr::null_mut();
                }
                madvise(q, nl, MADV_HUGEPAGE);
                q
            }
            _ => {
                let q = self.alloc(Layout::from_size_align_unchecked(new, l.align()));
                if !q.is_null() {
                    std::ptr::copy_nonoverlapping(p, q, l.size().min(new));
                    self.dealloc(p, l);
                }
                q
            }
        }
    }
}
