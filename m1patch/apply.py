# Inject blob.bin (linked at BASE) into m1 as a new PT_LOAD (reusing the PT_NOTE header)
# and redirect odd_key's entry to it.  usage: apply.py IN OUT BLOB
import struct, sys
BASE = 0x880000
ODD_KEY = 0x6a37c0
src, dst, blobp = sys.argv[1:4]
elf = bytearray(open(src, 'rb').read())
blob = open(blobp, 'rb').read()
assert elf[:4] == b'\x7fELF' and elf[4] == 2
phoff, = struct.unpack_from('<Q', elf, 0x20)
phentsize, phnum = struct.unpack_from('<HH', elf, 0x36)
phdrs = [list(struct.unpack_from('<IIQQQQQQ', elf, phoff + i * phentsize)) for i in range(phnum)]
# file offset of odd_key (inside the R E segment)
off = None
for p in phdrs:
    t, fl, o, va, pa, fs, ms, al = p
    if t == 1 and va <= ODD_KEY < va + fs:
        off = ODD_KEY - va + o
    if t == 1:
        assert va + ms <= BASE, "BASE overlaps an existing segment"
assert off is not None
note = next(i for i, p in enumerate(phdrs) if p[0] == 4)
pad = (-len(elf)) % 0x1000
foff = len(elf) + pad
elf += b'\0' * pad + blob
phdrs[note] = [1, 7, foff, BASE, BASE, len(blob), len(blob), 0x1000]
struct.pack_into('<IIQQQQQQ', elf, phoff + note * phentsize, *phdrs[note])
rel = BASE - (ODD_KEY + 5)
elf[off:off + 5] = b'\xe9' + struct.pack('<i', rel)
open(dst, 'wb').write(elf)
print(f"patched: odd_key@{off:#x} -> {BASE:#x}, blob {len(blob)} bytes at file {foff:#x}")
