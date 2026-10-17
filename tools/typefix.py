#!/usr/bin/env python3
"""Greedy type search for near-miss drafts.

Most m2c drafts that miss by a few instructions have a wrong integer type somewhere
(`lh` vs `lhu`, `lb` vs `lw`, pointer scaling). This tries replacing each integer type
token in the draft with each other one, keeps any change that lowers the number of
differing instructions, and repeats until it matches or nothing helps. Matches are
written to src/game/.

usage: tools/typefix.py [--max-diff 10] [--jobs 4] [func ...]
       (default: functions in build/m2c/report.txt with at most --max-diff differences,
        drafts from build/m2c/best/)
"""
import argparse
import re
import subprocess
import sys
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
PY = sys.executable
TYPES = ["s8", "u8", "s16", "u16", "s32", "u32"]
TOKEN = re.compile(r"\b(" + "|".join(TYPES) + r")\b")


def score(name, text, tag):
    trial = ROOT / "build" / "typefix" / f"{name}.{tag}.c"
    trial.parent.mkdir(parents=True, exist_ok=True)
    trial.write_text(text)
    r = subprocess.run([PY, "tools/diff.py", "-q", "--file", str(trial), name], cwd=ROOT,
                       capture_output=True, text=True)
    trial.unlink()
    if r.returncode == 0:
        c = subprocess.run([PY, "tools/check_obj.py", f"build/diff/{name}.o"], cwd=ROOT,
                           capture_output=True, text=True)
        return 0 if c.returncode == 0 else 10**6
    m = re.search(r"(\d+) of (\d+) differ", r.stdout)
    return int(m[1]) if m else 10**6


RULES = [""]


def search(name, text):
    if "mwcc_pad:" not in text:
        head, _, body = text.partition("\n")
        cands = [head + "\n" + r + body if r else text for r in RULES]
        text = min(cands, key=lambda t: score(name, t, "rule"))
    best = score(name, text, "base")
    while best:
        improved = False
        for i, m in enumerate(list(TOKEN.finditer(text))):
            for t in TYPES:
                if t == m[1]:
                    continue
                cand = text[: m.start()] + t + text[m.end():]
                s = score(name, cand, f"{i}")
                if s < best:
                    best, text, improved = s, cand, True
                    break
            if improved or not best:
                break
        if not improved:
            break
    return best, text


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("funcs", nargs="*")
    ap.add_argument("--max-diff", type=int, default=10)
    ap.add_argument("--jobs", type=int, default=4)
    a = ap.parse_args()
    done = {p.stem for p in (ROOT / "src" / "game").glob("*.c")}
    todo = a.funcs
    if not todo:
        for line in (ROOT / "build" / "m2c" / "report.txt").read_text().splitlines():
            n, b = line.split(" ", 1)
            if b.isdigit() and int(b) <= a.max_diff:
                todo.append(n)
    todo = [n for n in todo if n not in done and (ROOT / "build" / "m2c" / "best" / f"{n}.c").exists()]

    def one(n):
        return n, *search(n, (ROOT / "build" / "m2c" / "best" / f"{n}.c").read_text())

    matched = 0
    with ThreadPoolExecutor(a.jobs) as ex:
        for n, s, text in ex.map(one, todo):
            if s == 0:
                (ROOT / "src" / "game" / f"{n}.c").write_text(text)
                matched += 1
                print(f"MATCH {n}", flush=True)
            else:
                (ROOT / "build" / "m2c" / "best" / f"{n}.c").write_text(text)
    print(f"typefix: {matched} / {len(todo)} matched")


if __name__ == "__main__":
    main()
