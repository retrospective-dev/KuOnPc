#!/usr/bin/env python3
"""Refresh the progress badges and table in README.md from src/game/ and docs/functions.csv.

usage: tools/update_readme.py   (run tools/inventory.py first if docs/functions.csv is missing)
"""
import csv
import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
sys.path.insert(0, str(ROOT / "tools"))
from progress import size  # same byte counting as `make progress`


def bar(frac, width=20):
    eighths = round(frac * width * 8)
    full, part = divmod(eighths, 8)
    s = "█" * full + ("▏▎▍▌▋▊▉"[part - 1] if part else "")
    return s + "░" * (width - len(s))


def main():
    done = {p.stem for p in (ROOT / "src" / "game").glob("*.c")}
    rows = list(csv.DictReader((ROOT / "docs" / "functions.csv").open()))
    is_int = lambda r: r["uses_fpu"] == "0" and r["uses_vu0"] == "0"
    total_bytes = sum(size(r["name"]) for r in rows)
    done_bytes = sum(size(r["name"]) for r in rows if r["name"] in done)
    ints = [r for r in rows if is_int(r)]
    flts = [r for r in rows if not is_int(r)]
    n, n_int, n_flt = len(done & {r["name"] for r in rows}), sum(r["name"] in done for r in ints), \
        sum(r["name"] in done for r in flts)
    f_all, f_code = n / len(rows), done_bytes / total_bytes
    f_int, f_flt = n_int / len(ints), n_flt / len(flts)

    t = (ROOT / "README.md").read_text()
    t = re.sub(r"badge/functions-[^-]+-blue", f"badge/functions-{n}%20%2F%20{len(rows):,}".replace(",", "%2C") + "-blue", t)
    t = re.sub(r"badge/code-[\d.]+%25-orange", f"badge/code-{100 * f_code:.1f}%25-orange", t)
    t = re.sub(r"^\| \*\*All game functions\*\* \|.*$",
               f"| **All game functions** | {n} / {len(rows):,} | `{bar(f_all)}` {100 * f_all:.1f}% |", t, flags=re.M)
    t = re.sub(r"^\| \*\*Game code \(by size\)\*\* \|.*$",
               f"| **Game code (by size)** | {done_bytes // 1000} KB / {total_bytes // 1000} KB | "
               f"`{bar(f_code)}` {100 * f_code:.1f}% |", t, flags=re.M)
    t = re.sub(r"^\| Integer functions \(phase 1\) \|.*$",
               f"| Integer functions (phase 1) | {n_int} / {len(ints):,} | `{bar(f_int)}` {100 * f_int:.1f}% |", t, flags=re.M)
    t = re.sub(r"^\| Float / VU0 functions \(phase 2\) \|.*$",
               f"| Float / VU0 functions (phase 2) | {n_flt} / {len(flts)} | `{bar(f_flt)}` {100 * f_flt:.1f}% |", t, flags=re.M)
    (ROOT / "README.md").write_text(t)
    print(f"README: {n} functions, {100 * f_code:.1f}% of code")


if __name__ == "__main__":
    main()
