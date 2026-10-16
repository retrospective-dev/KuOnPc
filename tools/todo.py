#!/usr/bin/env python3
"""List the next unmatched game functions to work on, easiest first.

usage: tools/todo.py [--bucket tiny|small|medium|large] [--limit 20] [--allow-float] [--module SfxMng.c]
"""
import argparse
import csv
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--bucket")
    ap.add_argument("--limit", type=int, default=20)
    ap.add_argument("--allow-float", action="store_true", help="include FPU/VU0 functions")
    ap.add_argument("--module", help="only functions referencing this source file string")
    a = ap.parse_args()
    done = {p.stem for p in (ROOT / "src" / "game").glob("*.c")}
    wip = {p.stem for p in (ROOT / "src" / "wip").glob("*.c")}
    rows = list(csv.DictReader((ROOT / "docs" / "functions.csv").open()))
    rows = [r for r in rows if r["name"] not in done]
    if a.bucket:
        rows = [r for r in rows if r["bucket"] == a.bucket]
    if not a.allow_float:
        rows = [r for r in rows if r["uses_fpu"] == "0" and r["uses_vu0"] == "0"]
    if a.module:
        rows = [r for r in rows if r["module_hint"] == a.module]
    rows.sort(key=lambda r: (r["name"] in wip, int(r["instructions"]), r["name"]))
    for r in rows[: a.limit]:
        tag = " [wip]" if r["name"] in wip else ""
        hint = f"  {r['candidate_name']}" if r["candidate_name"] else ""
        print(f"{r['name']}  {int(r['instructions']):4d} instr  {r['bucket']:<6}{hint}{tag}")
    print(f"-- {len(rows)} remaining in this filter")


if __name__ == "__main__":
    main()
