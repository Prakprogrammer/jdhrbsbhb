#!/bin/bash
# Rebuild bin/m1nk.bin.gz from the original m1 binary.
#   usage: m1patch/make_m1nk.sh ORIGINAL_M1_BINARY
# ORIGINAL_M1_BINARY is the unpacked bin/pipeline.bin.gz from the main branch
# (md5 6aeaf4703eec072b573a4d60c39e5b9f). Needs gcc, ld, objcopy, python3 on x86-64 Linux.
#
#   1. oddkey.c  -> injected as a new code segment; odd_key's entry jumps to it
#                   (sharded, lock-free ID table instead of one global Mutex<HashMap>)
#   2. nokey.py  -> recover_user_key, recover_event_key, click_key, search_key all
#                   return "failed" immediately, so generator-key recovery cannot run
set -euo pipefail
here="$(cd "$(dirname "$0")" && pwd)"
orig="$(realpath "$1")"
work="$(mktemp -d)"
trap 'rm -rf "$work"' EXIT
cd "$work"
gcc -O2 -march=cascadelake -ffreestanding -fno-builtin -fno-pic -fno-pie -fno-stack-protector \
    -fcf-protection=none -fno-asynchronous-unwind-tables -fno-tree-loop-distribute-patterns \
    -c "$here/oddkey.c" -o oddkey.o
ld -nostdlib -static -T "$here/blob.ld" oddkey.o -o blob.elf 2>/dev/null
[ "$(nm blob.elf | awk '/ odd_key_new$/{print $1}')" = "0000000000880000" ] || { echo "entry not at base" >&2; exit 1; }
objcopy -O binary -j .blob blob.elf blob.bin
python3 "$here/apply.py" "$orig" patched blob.bin
python3 "$here/nokey.py" patched m1nk
gzip -9 -c m1nk > "$here/../bin/m1nk.bin.gz"
echo "wrote bin/m1nk.bin.gz  md5(unpacked)=$(md5sum m1nk | cut -d' ' -f1)"
