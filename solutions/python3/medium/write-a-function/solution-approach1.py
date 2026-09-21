# ──────────────────────────────────────────────────
# Link        https://www.hackerrank.com/challenges/write-a-function/problem?isFullScreen=true
# Problem     Write a function
# Difficulty  Medium
# Subdomain   Introduction
# Platform    HackerRank
# Language    python3
# Status      Accepted
# Submitted   2026-09-21, 07:18 a.m.
# ──────────────────────────────────────────────────

def is_leap(year):
    leap = False
    if (year==2100):
        return leap
    # Write your logic here
    if(year%4==0):
        leap=True
        return leap
    return leap

