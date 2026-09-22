# ──────────────────────────────────────────────────
# Link        https://www.hackerrank.com/challenges/python-print/problem?isFullScreen=true
# Problem     Print Function
# Difficulty  Easy
# Subdomain   Introduction
# Platform    HackerRank
# Language    python3
# Status      Accepted
# Submitted   2026-09-22, 06:52 a.m.
# ──────────────────────────────────────────────────

if __name__ == '__main__':
    n = int(input())
    ans=""
    for i in range(1,n+1):
        ans+=str(i)
    print(ans)
