#!/usr/bin/env python3
"""Pad branch targets in a CodeWarrior object the way Kuon's compiler did.

Kuon's CodeWarrior build aligns basic-block starts to 8 bytes (an EE dual-issue
fetch pair) by inserting a `nop` before a branch target that code also falls through
into. The CodeWarrior PS2 releases we have don't do that, so this pass emulates it:
the object is disassembled with spimdisasm, a `nop` is inserted before each such label
that sits at 4 mod 8 from the function start, and the result is reassembled.

A label right after a branch/jump delay slot (no fall-through) is left alone, and so is the
join of a value-producing `?:` (see ternary_joins).

Whether a join came from `?:` or from an `if` isn't visible in the asm, so a C file can pick
the rule with a comment: `/* mwcc_pad: any */` also treats conditional-branch joins as `?:`,
`/* mwcc_pad: off */` disables padding for the file. The default is `b` (unconditional only).

usage: tools/mwcc_pad.py in.o out.o [source.c]
"""
import re
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
CROSS = "mips-linux-gnu-"
# control transfers that don't fall through to the instruction after their delay slot
NO_FALL = re.compile(r"^(b|beq|bne|beqz|bnez|bgez|bgtz|blez|bltz|bc1f|bc1t|bc0f|bc0t|beql|bnel|"
                     r"beqzl|bnezl|bgezl|bgtzl|blezl|bltzl|bc1fl|bc1tl|j|jr)$")
INSN = re.compile(r"^\s+/\* [0-9A-F]+ [0-9A-F]+ [0-9A-F]+ \*/\s+(\S+)")


def dest(insn):
    """Register written by an instruction, or None for stores, branches and nops."""
    p = insn.split(None, 1)
    if len(p) < 2 or p[0] in ("sw", "sh", "sb", "sd", "sq", "swc1", "sdc1", "nop") or \
            p[0].startswith(("b", "j")):
        return None
    return p[1].split(",")[0].strip()


def ternary_joins(asm, any_branch=False):
    """Labels joining the arms of a value-producing `?:`: some `b` to the label has a delay
    slot writing the same register as the instruction just before the label. CodeWarrior
    doesn't treat these as block starts, so they aren't padded. With any_branch, a conditional
    branch whose delay slot sets the default value (`c ? x : 0`) counts too."""
    ins = [(m[1], line.split("*/", 1)[1].strip()) for line in asm.splitlines()
           if (m := INSN.match(line))]
    b_delay = {}
    for k, (op, text) in enumerate(ins):
        if (op == "b" or (any_branch and NO_FALL.match(op) and op.startswith("b"))) and k + 1 < len(ins):
            b_delay.setdefault(text.split()[-1].split(",")[-1].strip(), []).append(dest(ins[k + 1][1]))
    joins, last, before = set(), None, None
    for line in asm.splitlines():
        m = re.match(r"^\s*(\.L\w+):", line)
        if m and last:
            # an arm ending in a call produces its value in $v0/$f0
            made = {"$v0", "$f0"} if before and before.split()[0] in ("jal", "jalr") else {dest(last)}
            if made & set(b_delay.get(m[1], [])) - {None}:
                joins.add(m[1])
        elif INSN.match(line):
            before, last = last, line.split("*/", 1)[1].strip()
    return joins


def pad(asm, rule="b"):
    joins = ternary_joins(asm, any_branch=(rule == "any"))
    out, offset, prev2, prev1, changed = [], None, None, None, False
    for line in asm.splitlines():
        if line.startswith("glabel "):
            offset, prev2, prev1 = 0, None, None
        elif (m := re.match(r"^\s*(\.L\w+):", line)) and offset is not None:
            falls = prev2 is None or not NO_FALL.match(prev2)
            if falls and offset % 8 == 4 and m[1] not in joins:
                out.append("    nop")
                offset += 4
                changed = True
                prev2, prev1 = prev1, "nop"
        elif line.startswith("endlabel"):
            offset = None
        else:
            m = INSN.match(line)
            if m and offset is not None:
                offset += 4
                prev2, prev1 = prev1, m[1]
        out.append(line)
    return "\n".join(out) + "\n", changed


def main():
    src, dst = sys.argv[1], sys.argv[2]
    rule = "b"
    if len(sys.argv) > 3:
        m = re.search(r"/\* mwcc_pad: (\w+) \*/", Path(sys.argv[3]).read_text())
        if m:
            rule = m[1]
    if rule == "off":
        Path(dst).write_bytes(Path(src).read_bytes())
        return
    with tempfile.TemporaryDirectory() as tmp:
        r = subprocess.run([sys.executable, "-m", "spimdisasm.elfObjDisasm", "--instr-category", "r5900",
                            "--compiler", "MWCCPS2", src, tmp], capture_output=True, text=True)
        files = list(Path(tmp).glob("*.text.s"))
        if r.returncode != 0 or len(files) != 1:
            sys.exit(f"mwcc_pad: disassembly of {src} failed\n{r.stdout}{r.stderr}")
        asm, changed = pad(files[0].read_text(), rule)
        if not changed:
            Path(dst).write_bytes(Path(src).read_bytes())
            return
        s = Path(tmp) / "padded.s"
        s.write_text(asm)
        r = subprocess.run([CROSS + "as", "-EL", "-march=r5900", "-mabi=eabi", "-G0", "-no-pad-sections",
                            "-I", str(ROOT / "include"), "-o", dst, str(s)], capture_output=True, text=True)
        if r.returncode != 0:
            sys.exit(f"mwcc_pad: reassembly of {src} failed\n{r.stderr}")


if __name__ == "__main__":
    main()
