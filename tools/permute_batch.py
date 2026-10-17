#!/usr/bin/env python3
"""Run decomp-permuter on near-miss drafts and keep exact matches.

For each function in build/m2c/report.txt with at most --max-diff differing instructions,
set up build/permute/<func>/ (tools/permute_setup.py), run the permuter for --seconds, and
if it finds a zero score, turn its output back into repo style (common.h instead of the
expanded typedefs), verify it with tools/diff.py and write it to src/game/.

usage: tools/permute_batch.py [--max-diff 6] [--seconds 120] [--jobs 4] [func ...]
"""
import argparse
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
PY = sys.executable
PERMUTER = ROOT / "tools" / "permuter_src" / "permuter.py"


def common_lines():
    pre = subprocess.run(["cpp", "-P", "-nostdinc", f"-I{ROOT / 'include'}", str(ROOT / "include" / "common.h")],
                         capture_output=True, text=True).stdout
    return {re.sub(r"\s+", " ", l).strip() for l in pre.splitlines() if l.strip()}


def to_repo_style(src, common):
    out = []
    for line in src.splitlines():
        if re.sub(r"\s+", " ", line).strip() in common:
            continue
        out.append(line)
    head = '#include "common.h"\n'
    return head + "\n" + "\n".join(out).strip() + "\n"


def one(name, seconds, common):
    r = subprocess.run([PY, "tools/permute_setup.py", name], cwd=ROOT, capture_output=True, text=True)
    if r.returncode != 0:
        return name, False
    d = ROOT / "build" / "permute" / name
    for o in d.glob("output-*"):
        subprocess.run(["rm", "-rf", str(o)])
    try:
        subprocess.run([PY, str(PERMUTER), str(d), "-j1", "--stop-on-zero", "--best-only"], cwd=ROOT,
                       capture_output=True, timeout=seconds)
    except subprocess.TimeoutExpired:
        pass
    for o in sorted(d.glob("output-0-*")):
        text = to_repo_style((o / "source.c").read_text(), common)
        trial = d / "candidate.c"
        trial.write_text(text)
        v = subprocess.run([PY, "tools/diff.py", "-q", "--file", str(trial), name], cwd=ROOT,
                           capture_output=True, text=True)
        if v.returncode == 0:
            (ROOT / "src" / "game" / f"{name}.c").write_text(text)
            return name, True
    return name, False


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("funcs", nargs="*")
    ap.add_argument("--max-diff", type=int, default=6)
    ap.add_argument("--seconds", type=int, default=120)
    ap.add_argument("--jobs", type=int, default=4)
    a = ap.parse_args()
    done = {p.stem for p in (ROOT / "src" / "game").glob("*.c")}
    todo = a.funcs
    if not todo:
        for line in (ROOT / "build" / "m2c" / "report.txt").read_text().splitlines():
            n, b = line.split(" ", 1)
            if b.isdigit() and int(b) <= a.max_diff:
                todo.append(n)
    todo = [n for n in todo if n not in done]
    common = common_lines()
    matched = 0
    with ThreadPoolExecutor(a.jobs) as ex:
        for name, ok in ex.map(lambda n: one(n, a.seconds, common), todo):
            if ok:
                matched += 1
                print(f"MATCH {name}", flush=True)
    print(f"permute batch: {matched} / {len(todo)} matched")


if __name__ == "__main__":
    main()
