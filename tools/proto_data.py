#!/usr/bin/env python3
"""Map retail data symbols (D_XXXXXXXX) to the prototype's named globals.

For each function pair from build/proto/map.txt with the same instruction count, the
address each instruction references is worked out in both builds: retail from the split
asm's %lo/%gp_rel symbol, prototype from the instruction itself (lui + low half, or $gp
plus offset, at a relocated position). Pairs are voted on; each retail symbol gets the
prototype global (and offset into it) seen most often.

Writes build/proto/data_map.txt: retail symbol, prototype address, prototype global+offset, votes.

usage: tools/proto_data.py
"""
import bisect
import re
import struct
import subprocess
from collections import Counter, defaultdict
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
PROTO = ROOT / "disc" / "proto" / "SLUS_210.07"
CROSS = "mips-linux-gnu-"


def sext(x):
    return x - 0x10000 if x & 0x8000 else x


def main():
    elf = PROTO.read_bytes()
    sec = subprocess.run([CROSS + "readelf", "-S", "-W", str(PROTO)], capture_output=True, text=True).stdout
    m = re.search(r"\]\s+main\s+PROGBITS\s+([0-9a-f]+) ([0-9a-f]+) ([0-9a-f]+)", sec)
    base, off, size = (int(x, 16) for x in m.groups())
    gp_sym = re.search(r"([0-9a-f]{8}) \w _gp$", subprocess.run([CROSS + "nm", str(PROTO)], capture_output=True,
                                                                  text=True).stdout, re.M)
    gp = int(gp_sym[1], 16)
    reloc = {}
    for line in subprocess.run([CROSS + "readelf", "-r", "-W", str(PROTO)], capture_output=True, text=True).stdout.splitlines():
        r = re.match(r"^([0-9a-f]{8})\s+[0-9a-f]+\s+R_MIPS_(HI16|LO16|GPREL16)", line)
        if r:
            reloc[int(r[1], 16)] = r[2]
    syms, addrs, start = [], [], {}
    for line in subprocess.run([CROSS + "nm", "-n", "-S", str(PROTO)], capture_output=True, text=True).stdout.splitlines():
        p = line.split()
        # everything is in one section ("main"), so data symbols are typed like code
        if len(p) >= 3 and not p[-1].startswith(("$", "gcc2_", "__gnu_compiled", ".")):
            syms.append((int(p[0], 16), p[-1]))
        if len(p) >= 3 and p[-2] in "Tt":
            start[p[-1]] = int(p[0], 16)
    syms.sort()
    addrs = [a for a, _ in syms]

    def name_of(a):
        i = bisect.bisect_right(addrs, a) - 1
        if i < 0:
            return None
        sa, sn = syms[i]
        return f"{sn}+0x{a - sa:X}" if a != sa else sn

    def proto_refs(a, n):
        """Referenced address per instruction index for n instructions from a."""
        regs, out = {}, {}
        for k in range(n):
            pc = a + 4 * k
            w = struct.unpack_from("<I", elf, off + pc - base)[0]
            op, rs, rt, imm = w >> 26, (w >> 21) & 31, (w >> 16) & 31, w & 0xFFFF
            kind = reloc.get(pc)
            if op == 0x0F and kind == "HI16":
                regs[rt] = imm << 16
            elif kind == "LO16" and rs in regs:
                out[k] = regs[rs] + sext(imm)
            elif kind == "GPREL16":
                out[k] = gp + sext(imm)
        return out

    votes = defaultdict(Counter)
    for line in (ROOT / "build" / "proto" / "map.txt").read_text().splitlines():
        rname, pname, sim = line.split()
        if float(sim) < 0.9 or pname not in start:
            continue
        text = (ROOT / "asm" / "game" / f"{rname}.s").read_text().split("endlabel")[0]
        ins = re.findall(r"\*/\s+(\S[^\n]*)", text)
        prefs = proto_refs(start[pname], len(ins))
        for k, t in enumerate(ins):
            sm = re.search(r"%(?:lo|gp_rel)\(([A-Za-z_]\w*)(?: \+ (0x[0-9A-F]+))?\)", t)
            if sm and k in prefs:
                add = int(sm[2], 16) if sm[2] else 0
                votes[sm[1]][prefs[k] - add] += 1
    out = []
    for d, c in sorted(votes.items()):
        pa, n = c.most_common(1)[0]
        out.append(f"{d} 0x{pa:08X} {name_of(pa)} {n}")
    dst = ROOT / "build" / "proto" / "data_map.txt"
    dst.write_text("\n".join(out) + "\n")
    print(f"{len(out)} retail data symbols mapped to prototype addresses")


if __name__ == "__main__":
    main()
