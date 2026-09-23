# ──────────────────────────────────────────────────
# Link        https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem?isFullScreen=true
# Problem     Find the Runner-Up Score!  
# Difficulty  Easy
# Subdomain   Basic Data Types
# Platform    HackerRank
# Language    python3
# Status      Accepted
# Submitted   2026-09-23, 07:29 a.m.
# ──────────────────────────────────────────────────

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    fg=arr[0]
    sg=0
    for i in arr:
        
        if i>fg :
            sg=fg
            fg=i
        elif i>sg and i!=fg:
            sg=i
        elif sg==0 and i<0:
            sg=min(sg,i)
    print(sg)
