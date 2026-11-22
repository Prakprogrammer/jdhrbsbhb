#!/bin/bash
# Build the odd_key replacement blob and patch m1.  Run on shopvm from ~/patch.
set -e
cd "$(dirname "$0")"
gcc -O2 -march=cascadelake -ffreestanding -fno-builtin -fno-pic -fno-pie -fno-stack-protector \
    -fcf-protection=none -fno-asynchronous-unwind-tables -fno-tree-loop-distribute-patterns \
    -c oddkey.c -o oddkey.o
ld -nostdlib -static -T blob.ld oddkey.o -o blob.elf
nm blob.elf | grep -q ' odd_key_new$'
[ "$(nm blob.elf | awk '/ odd_key_new$/{print $1}')" = "0000000000880000" ] || { echo "entry not at base"; exit 1; }
objcopy -O binary -j .blob blob.elf blob.bin
python3 apply.py ~/bench/prebuilt ~/bench/m1p blob.bin
chmod +x ~/bench/m1p
