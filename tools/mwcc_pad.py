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
`unsteal` (e.g. `/* mwcc_pad: unsteal */` or `/* mwcc_pad: any unsteal */`) also undoes
3.0.3's filling of branch delay slots from the branch target where 2.4 leaves them empty;
Kuon's compiler mostly doesn't fill from the target, but sometimes does, so it's per file.
`noternary` treats no join as a `?:` (for `if (...) return a; ... return b;`, which looks the same
in the asm).

usage: tools/mwcc_pad.py in.o out.o [source.c]
"""
import os
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
# an instruction line: spimdisasm's (with an address comment) or one this tool inserted
INSN = re.compile(r"^\s+(?:/\* [0-9A-F]+ [0-9A-F]+ [0-9A-F]+ \*/\s+)?([a-z][\w.]*)(?:\s|$)")


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
    ins = [(m[1], insn_text(line)) for line in asm.splitlines()
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
            before, last = last, insn_text(line)
    return joins


def pad(asm, rule="b", fall_only=False):
    joins = set() if rule == "noternary" else ternary_joins(asm, any_branch=(rule == "any"))
    out, offset, prev2, prev1, changed = [], None, None, None, False
    for line in asm.splitlines():
        if line.startswith("glabel "):
            offset, prev2, prev1 = 0, None, None
        elif (m := re.match(r"^\s*(\.L\w+):", line)) and offset is not None:
            op2 = prev2.split()[0] if prev2 else None
            after_jump = op2 in ("b", "j", "jr")
            after_cond = op2 is not None and not after_jump and bool(NO_FALL.match(op2))
            # the arm right after `b join` of a value-producing ?: isn't a block start either
            ternary_arm = op2 == "b" and prev2.split()[-1] in joins
            skip = m[1] in joins or ternary_arm or after_cond or (fall_only and after_jump)
            if not skip and offset % 8 == 4:
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
                prev2, prev1 = prev1, insn_text(line)
        out.append(line)
    return "\n".join(out) + "\n", changed


COND = re.compile(r"^(beq|bne|beqz|bnez|bgez|bgtz|blez|bltz|bc1f|bc1t|bc0f|bc0t)$")
REF_MWCC = ROOT / "tools" / "compilers" / "mwcps2-2.4-001213" / "mwccps2.exe"


def insn_text(line):
    return line.split("*/", 1)[-1].strip()


def branches(asm):
    """(line index of each conditional branch, its target label, delay-slot line index)."""
    lines = asm.splitlines()
    idx = [i for i, l in enumerate(lines) if INSN.match(l) or l.strip() == "nop"]
    out = []
    for k, i in enumerate(idx):
        m = INSN.match(lines[i])
        if m and COND.match(m[1]) and k + 1 < len(idx):
            out.append((i, insn_text(lines[i]).split()[-1].split(",")[-1].strip(), idx[k + 1]))
    return out


def unsteal(asm, ref):
    """Undo "fill the delay slot from the branch target", which 3.0.3 does and Kuon's
    compiler doesn't. 2.4 (same front end) doesn't either, so wherever 2.4 leaves a
    conditional branch's delay slot empty and 3.0.3 filled it, move the instruction back to
    the start of the branch target."""
    ours, theirs = branches(asm), branches(ref)
    if len(ours) != len(theirs):
        return asm
    lines = asm.splitlines()
    ref_lines = ref.splitlines()
    inserts = {}
    for n, ((bi, tgt, di), (_, _, rdi)) in enumerate(zip(ours, theirs)):
        d = insn_text(lines[di])
        if insn_text(ref_lines[rdi]) != "nop" or d == "nop" or not INSN.match(lines[di]):
            continue
        t = next((i for i, l in enumerate(lines) if re.match(rf"^\s*{re.escape(tgt)}:", l)), None)
        if t is None:
            continue
        prev = [i for i in range(t) if INSN.match(lines[i]) or lines[i].strip() == "nop"]
        if not prev:
            continue
        new = f".Lunsteal{n}"
        if INSN.match(lines[prev[-1]]) and insn_text(lines[prev[-1]]) == d:
            # the target's first instruction was copied, not moved: branch to the copy
            inserts.setdefault(prev[-1], []).append(f"  {new}:")
        elif len(prev) >= 2 and INSN.match(lines[prev[-2]]) and NO_FALL.match(INSN.match(lines[prev[-2]])[1]):
            # nothing falls into the target: put the instruction back in front of it, and drop
            # the old label if nothing else branches to it (it's no longer a block start)
            inserts.setdefault(t, []).extend([f"  {new}:", f"    {d}"])
            others = [l for i, l in enumerate(lines) if i != bi and INSN.match(l) and insn_text(l).endswith(tgt)]
            if not others:
                lines[t] = ""
        else:
            continue
        lines[di] = "    nop"
        lines[bi] = lines[bi][: lines[bi].rindex(tgt)] + new
    out = []
    for i, l in enumerate(lines):
        out.extend(inserts.get(i, []))
        out.append(l)
    return "\n".join(out) + "\n"


def disasm(obj, tmp):
    r = subprocess.run([sys.executable, "-m", "spimdisasm.elfObjDisasm", "--instr-category", "r5900",
                        "--compiler", "MWCCPS2", str(obj), str(tmp)], capture_output=True, text=True)
    files = list(Path(tmp).glob("*.text.s"))
    if r.returncode != 0 or len(files) != 1:
        return None
    return files[0].read_text()


def reference(source, tmp):
    """The 2.4 compile of the same source, disassembled, or None."""
    obj = Path(tmp) / "ref.o"
    r = subprocess.run([str(ROOT / "tools" / "wibo"), str(REF_MWCC), "-c", "-O4", "-relax_pointers",
                        "-nostdinc", f"-I{ROOT / 'include'}", str(source), "-o", str(obj)],
                       cwd=ROOT, capture_output=True, text=True)
    if r.returncode != 0 or not obj.exists():
        return None
    (Path(tmp) / "ref").mkdir()
    return disasm(obj, Path(tmp) / "ref")


def main():
    src, dst = sys.argv[1], sys.argv[2]
    words = set()
    if len(sys.argv) > 3:
        m = re.search(r"/\* mwcc_pad: ([\w ]+?) \*/", Path(sys.argv[3]).read_text())
        if m:
            words = set(m[1].split())
    rule = "any" if "any" in words else "noternary" if "noternary" in words else "b"
    if "off" in words:
        Path(dst).write_bytes(Path(src).read_bytes())
        return
    with tempfile.TemporaryDirectory() as tmp:
        (Path(tmp) / "our").mkdir()
        asm = disasm(src, Path(tmp) / "our")
        if asm is None:
            sys.exit(f"mwcc_pad: disassembly of {src} failed")
        orig = asm
        if "unsteal" in words:
            ref = reference(sys.argv[3], tmp)
            if ref is not None:
                asm = unsteal(asm, ref)
        asm, changed = pad(asm, rule, fall_only="fallonly" in words or bool(os.environ.get("KUON_PAD_FALLONLY")))
        if not changed and asm == orig:
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
