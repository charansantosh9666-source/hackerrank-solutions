// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
// Problem     Functions
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-20, 04:52 p.m.
// ──────────────────────────────────────────────────

#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d){
    if(a>b&&a>c&&a>d){
        return a;
    }else if(b>a&&b>c&&b>d){
        return b;
    }else if(c>b&&c>a&&c>d){
        return c;
    }else if(d>b&&d>c&&d>a){
        return d;
    }
    return -1;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
