#!/usr/bin/env python3
"""Map retail game functions to named functions in the Aug 2004 US prototype.

The prototype executable (SLUS_210.07, not committed: put it in disc/proto/) is unstripped.
Each function's instructions are compared with relocated fields masked out (jump targets,
%hi/%lo and $gp offsets), using the prototype's relocation table and the split asm's
symbol references for retail. Exact matches come first; the rest are aligned in address
order, since both builds lay functions out in nearly the same order.

Writes build/proto/map.txt: retail name, prototype name, similarity (1.0 = same code).

usage: tools/proto_match.py
"""
import difflib
import re
import struct
import subprocess
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
PROTO = ROOT / "disc" / "proto" / "SLUS_210.07"
CROSS = "mips-linux-gnu-"
VRAM = 0x100000


def mask(word):
    op = word >> 26
    if op in (2, 3):  # j, jal
        return word & 0xFC000000
    return word


def proto_functions():
    elf = PROTO.read_bytes()
    # section "main" holds everything: find its file offset and address
    out = subprocess.run([CROSS + "readelf", "-S", "-W", str(PROTO)], capture_output=True, text=True).stdout
    m = re.search(r"\]\s+main\s+PROGBITS\s+([0-9a-f]+) ([0-9a-f]+) ([0-9a-f]+)", out)
    base, off, size = (int(x, 16) for x in m.groups())
    relocated = set()
    rel = subprocess.run([CROSS + "readelf", "-r", "-W", str(PROTO)], capture_output=True, text=True).stdout
    for line in rel.splitlines():
        r = re.match(r"^([0-9a-f]{8})\s+[0-9a-f]+\s+R_MIPS_(HI16|LO16|GPREL16|26|LITERAL|GOT16)", line)
        if r:
            relocated.add(int(r[1], 16))
    syms = []
    for line in subprocess.run([CROSS + "nm", "-n", str(PROTO)], capture_output=True, text=True).stdout.splitlines():
        p = line.split()
        if len(p) == 3 and p[1] in "Tt" and not p[2].startswith(("$", "gcc2_", "__gnu_compiled")):
            syms.append((int(p[0], 16), p[2]))
    syms = sorted({a: n for a, n in syms}.items())
    funcs = []
    for i, (a, n) in enumerate(syms):
        end = syms[i + 1][0] if i + 1 < len(syms) else base + size
        if not base <= a < base + size:
            continue
        words = []
        for x in range(a, min(end, base + size), 4):
            w = struct.unpack_from("<I", elf, off + x - base)[0]
            words.append(w & 0xFFFF0000 if x in relocated else mask(w))
        while words and words[-1] == 0:
            words.pop()
        funcs.append((a, n, tuple(words)))
    return funcs


def retail_functions():
    rom = (ROOT / "SLES_534.11.rom").read_bytes()
    funcs = []
    for name in (ROOT / "game_order.txt").read_text().split():
        words, start = [], None
        for line in (ROOT / "asm" / "game" / f"{name}.s").read_text().split("endlabel")[0].splitlines():
            m = re.match(r"\s+/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/\s+(.*)", line)
            if not m:
                continue
            a = int(m[1], 16)
            start = a if start is None else start
            w = struct.unpack_from("<I", rom, a - VRAM)[0]
            words.append(w & 0xFFFF0000 if re.search(r"%(hi|lo|gp_rel)\(", m[2]) else mask(w))
        while words and words[-1] == 0:
            words.pop()
        funcs.append((start, name, tuple(words)))
    return funcs


def main():
    proto, retail = proto_functions(), retail_functions()
    by_code = {}
    for a, n, w in proto:
        by_code.setdefault(w, []).append(n)
    pidx = {n: i for i, (_, n, _) in enumerate(proto)}
    ridx = {n: i for i, (_, n, _) in enumerate(retail)}
    paddr = {a: (n, w) for a, n, w in proto}
    sim = lambda x, y: difflib.SequenceMatcher(None, x, y, autojunk=False).ratio()
    cands = []
    for a, n, w in retail:
        if a in paddr and sim(w, paddr[a][1]) >= 0.9:
            cands.append((ridx[n], pidx[paddr[a][0]]))  # same address, same code shape
        elif len(by_code.get(w, [])) == 1 and len(w) >= 4:
            cands.append((ridx[n], pidx[by_code[w][0]]))
    # keep the largest set of anchors in the same order in both builds
    cands.sort()
    tails, prev, pos = [], [-1] * len(cands), []
    import bisect
    for k, (_, pj) in enumerate(cands):
        i = bisect.bisect_left([cands[t][1] for t in tails], pj)
        if i:
            prev[k] = tails[i - 1]
        if i == len(tails):
            tails.append(k)
        else:
            tails[i] = k
    chain, k = [], tails[-1] if tails else -1
    while k >= 0:
        chain.append(cands[k])
        k = prev[k]
    result = {}
    for ri, pj in chain:
        result[retail[ri][1]] = (proto[pj][1], round(sim(retail[ri][2], proto[pj][2]), 3))
    # align the rest in order between matched anchors
    anchors = sorted((ridx[r], pidx[p]) for r, (p, s) in result.items())
    anchors = [(-1, -1)] + anchors + [(len(retail), len(proto))]
    for (r0, p0), (r1, p1) in zip(anchors, anchors[1:]):
        rs, ps = retail[r0 + 1:r1], proto[p0 + 1:p1]
        used = set()
        for _, rn, rw in rs:
            best, score = None, 0.0
            for j, (_, pn, pw) in enumerate(ps):
                if j in used:
                    continue
                s = difflib.SequenceMatcher(None, rw, pw, autojunk=False).ratio()
                if s > score:
                    best, score = j, s
            if best is not None and score >= 0.6:
                used.add(best)
                result[rn] = (ps[best][1], round(score, 3))
    out = ROOT / "build" / "proto" / "map.txt"
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text("".join(f"{r} {p} {s}\n" for r, (p, s) in sorted(result.items())))
    exact = sum(1 for p, s in result.values() if s == 1.0)
    print(f"{len(result)} / {len(retail)} retail functions named ({exact} identical code)")


if __name__ == "__main__":
    main()
