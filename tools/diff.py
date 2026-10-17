#!/usr/bin/env python3
"""Compile src/game/<func>.c, link it at its original address, and diff the bytes.

usage: tools/diff.py func_0014A670 [-q] [--file path/to/other.c]

Exit code 0 = exact byte match, 1 = mismatch, 2 = compile/setup error.

The object is linked at the function's retail address against every symbol of the
current full build (build/SLES_534.11.elf), so `D_006B90D0 + 0x148` and `D_006B9218`
resolve to the same address and only real differences are reported.
"""
import argparse
import os
import re
import struct
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
ROM = ROOT / "SLES_534.11.rom"
ELF = ROOT / "build" / "SLES_534.11.elf"
VRAM = 0x100000
MWCC_VER = os.environ.get("KUON_MWCC", "mwcps2-3.0.3-020716")
CFLAGS = ["-c", "-O4", "-relax_pointers", "-nostdinc", "-Iinclude"]
# KUON_NOPAD=1 skips tools/mwcc_pad.py (branch-target padding)
# for experiments: KUON_CFLAGS="-O3 -opt nopeephole" replaces -O4
if os.environ.get("KUON_CFLAGS"):
    CFLAGS = ["-c", *os.environ["KUON_CFLAGS"].split(), "-relax_pointers", "-nostdinc", "-Iinclude"]
CROSS = "mips-linux-gnu-"

TTY = sys.stdout.isatty()
R, G, N = ("\033[31m", "\033[32m", "\033[0m") if TTY else ("", "", "")


def run(cmd, **kw):
    return subprocess.run(cmd, capture_output=True, text=True, **kw)


def target(name):
    path = ROOT / "asm" / "game" / f"{name}.s"
    if not path.exists():
        sys.exit(f"no asm/game/{name}.s")
    addrs, text = [], []
    inside = False
    for line in path.read_text().splitlines():
        if line.startswith(f"glabel {name}"):
            inside = True
            continue
        if inside and line.startswith(f"endlabel {name}"):
            break
        if inside:
            m = re.match(r"\s+/\* [0-9A-F]+ ([0-9A-F]{8}) [0-9A-F]{8} \*/\s+(.*)", line)
            if m:
                addrs.append(int(m.group(1), 16))
                text.append(re.sub(r"\s+", " ", m.group(2).strip()))
    rom = ROM.read_bytes()
    words = [struct.unpack_from("<I", rom, a - VRAM)[0] for a in addrs]
    while words and words[-1] == 0:
        words.pop(); text.pop()
    return addrs[0], words, text


def symbols_ld(exclude):
    """Linker script defining every symbol of the full build except `exclude`."""
    if not ELF.exists():
        sys.exit("build/SLES_534.11.elf missing - run `make` once first")
    out = ROOT / "build" / "diff" / "syms.ld"
    stamp = out.with_suffix(".stamp")
    if not out.exists() or out.stat().st_mtime < ELF.stat().st_mtime:
        lines = []
        for l in run([CROSS + "nm", str(ELF)]).stdout.splitlines():
            p = l.split()
            if len(p) == 3 and re.match(r"^[A-Za-z_.$][\w.$]*$", p[2]):
                lines.append((p[2], p[0]))
        if not lines:
            sys.exit("no symbols read from build/SLES_534.11.elf - is `make` running?")
        out.parent.mkdir(parents=True, exist_ok=True)
        # write atomically: parallel diffs (tools/m2c_batch.py) read this file
        tmp = out.with_suffix(f".{os.getpid()}.tmp")
        tmp.write_text("".join(f"{n} = 0x{a};\n" for n, a in lines))
        os.replace(tmp, out)
        stamp.write_text("")
    text = out.read_text()
    filt = ROOT / "build" / "diff" / f"syms_{exclude}.ld"
    filt.write_text("".join(l + "\n" for l in text.splitlines() if not l.startswith(exclude + " =")))
    return filt


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("func")
    ap.add_argument("-q", "--quiet", action="store_true")
    ap.add_argument("--file", help="C file to test (default src/game/<func>.c)")
    a = ap.parse_args()
    name = a.func
    src = Path(a.file) if a.file else ROOT / "src" / "game" / f"{name}.c"
    if not src.exists():
        sys.exit(f"no {src}")
    work = ROOT / "build" / "diff"
    work.mkdir(parents=True, exist_ok=True)
    obj, linked = work / f"{name}.o", work / f"{name}.elf"
    for p in (obj, linked):
        p.unlink(missing_ok=True)

    cc = run([str(ROOT / "tools" / "wibo"), str(ROOT / "tools" / "compilers" / MWCC_VER / "mwccps2.exe"),
              *CFLAGS, str(src.resolve()), "-o", str(obj)], cwd=ROOT)
    if cc.returncode != 0 or not obj.exists():
        print((cc.stdout + cc.stderr).strip())
        return 2
    if not os.environ.get("KUON_NOPAD"):
        pd = run([sys.executable, str(ROOT / "tools" / "mwcc_pad.py"), str(obj), str(obj), str(src)], cwd=ROOT)
        if pd.returncode != 0:
            print((pd.stdout + pd.stderr).strip())
            return 2

    addr, twords, ttext = target(name)
    syms = symbols_ld(name)
    ld = run([CROSS + "ld", "-EL", "--no-check-sections", "-e", name, "-T", str(syms),
              f"-Ttext=0x{addr:X}", "--unresolved-symbols=report-all", str(obj), "-o", str(linked)])
    if ld.returncode != 0:
        print(ld.stderr.strip())
        print("(undefined symbol? declare it with the same name splat uses, e.g. D_00XXXXXX / func_00XXXXXX)")
        return 2

    dump = run([CROSS + "objdump", "-d", "-z", "-EL", "-m", "mips:5900", "-M", "gpr-names=32", str(linked)]).stdout
    cwords, ctext, inside = [], [], False
    for line in dump.splitlines():
        if re.match(rf"^[0-9a-f]+ <{re.escape(name)}>:", line):
            inside = True
            continue
        if inside and re.match(r"^[0-9a-f]+ <", line):
            break
        m = re.match(r"\s+[0-9a-f]+:\s+([0-9a-f]{8})\s+(.*)", line) if inside else None
        if m:
            cwords.append(int(m.group(1), 16))
            ctext.append(re.sub(r"\s+", " ", m.group(2).strip()))
    while cwords and cwords[-1] == 0:
        cwords.pop(); ctext.pop()

    n = max(len(twords), len(cwords))
    diffs, rows = 0, []
    for i in range(n):
        t = twords[i] if i < len(twords) else None
        c = cwords[i] if i < len(cwords) else None
        same = t is not None and t == c
        diffs += not same
        tt = ttext[i] if i < len(ttext) else ""
        ct = ctext[i] if i < len(ctext) else ""
        rows.append(f"{'' if same else R}{i * 4:4x}  {tt:<46.46} {' ' if same else '|'} {ct}{'' if same else N}")
    if not a.quiet:
        print(f"{'off':>4}  {'TARGET (retail)':<46}   COMPILED")
        print("\n".join(rows))
    if diffs == 0:
        print(f"{G}MATCH{N} {name} ({len(twords)} instructions)")
        return 0
    print(f"{R}NO MATCH{N} {name}: {diffs} of {n} differ (target {len(twords)}, compiled {len(cwords)})")
    return 1


if __name__ == "__main__":
    sys.exit(main())
