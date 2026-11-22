# Disable m1's generator-key recovery so the binary can only run its opaque-ID path.
#
# m1 tries to recover the dataset generator's per-seed ID keys (keyrec::recover_user_key,
# keyrec::recover_event_key, setup::click_key -> keyrec::search_key) and, on success,
# inverts the ID bijection. The track rules forbid that, so each entry point is replaced
# with `xor eax,eax; xor edx,edx; ret`: every caller then sees "recovery failed" (bit 0 of
# the returned pair is 0) and takes the same fallback it takes on non-generator IDs.
#
# usage: nokey.py IN OUT
import struct, sys

STUBS = {
    0x734620: "keyrec::recover_user_key",
    0x7364a0: "keyrec::recover_event_key",
    0x729ec0: "setup::click_key",
    0x7342e0: "keyrec::search_key",
}
FAIL = bytes.fromhex("31c031d2c3")   # xor eax,eax ; xor edx,edx ; ret

src, dst = sys.argv[1:3]
elf = bytearray(open(src, 'rb').read())
phoff, = struct.unpack_from('<Q', elf, 0x20)
phentsize, phnum = struct.unpack_from('<HH', elf, 0x36)
text = None
for i in range(phnum):
    t, fl, o, va, pa, fs, ms, al = struct.unpack_from('<IIQQQQQQ', elf, phoff + i * phentsize)
    if t == 1 and fl & 1:          # PT_LOAD with PF_X
        if va <= 0x729ec0 < va + fs:
            text = (o, va, fs)
assert text, "text segment not found"
o, va, fs = text
for addr, name in STUBS.items():
    assert va <= addr < va + fs
    off = addr - va + o
    prologue = bytes(elf[off:off + len(FAIL)])
    elf[off:off + len(FAIL)] = FAIL
    print(f"stubbed {name:28s} @ {addr:#x} (file {off:#x}), was {prologue.hex()}")
open(dst, 'wb').write(elf)
