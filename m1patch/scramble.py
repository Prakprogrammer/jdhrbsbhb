# Consistently remap ID characters (keeps hex->hex, g-z->g-z, keeps prefix letter and quotes),
# so IDs stay valid opaque strings but no longer come from the generator's keyed bijection.
import sys, os, shutil, re
from concurrent.futures import ProcessPoolExecutor
src, dst = sys.argv[1], sys.argv[2]
hexs = "0123456789abcdef"; rest = "ghijklmnopqrstuvwxyz"
hp = "7c2e94a0f1d3b685"; rp = "qzmgtkyrhuwnopxjsilv"
T = bytes.maketrans((hexs+rest).encode(), (hp+rp).encode())
def fix(field):
    q = field.startswith(b'"')
    body = field[1:-1] if q and field.endswith(b'"') and len(field) > 1 else field
    if len(body) < 2: return field
    nb = body[:1] + body[1:].translate(T)
    return (b'"' + nb + b'"') if q and field.endswith(b'"') else nb
def do(path):
    rel = os.path.relpath(path, src); out = os.path.join(dst, rel)
    with open(path, 'rb') as f: lines = f.read().split(b'\n')
    o = [lines[0]]
    for ln in lines[1:]:
        p = ln.split(b',', 2)
        if len(p) >= 2:
            p[0] = fix(p[0]); p[1] = fix(p[1])
        o.append(b','.join(p))
    with open(out, 'wb') as f: f.write(b'\n'.join(o))
jobs = []
for root, _, files in os.walk(src):
    os.makedirs(os.path.join(dst, os.path.relpath(root, src)), exist_ok=True)
    for fn in files:
        p = os.path.join(root, fn); top = os.path.relpath(p, src).split(os.sep)[0]
        if top in ("events", "clicks", "links"): jobs.append(p)
        else: shutil.copy(p, os.path.join(dst, os.path.relpath(p, src)))
with ProcessPoolExecutor(4) as ex: list(ex.map(do, jobs))
print("done", len(jobs))
