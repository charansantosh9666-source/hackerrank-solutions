// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-basic-data-types/problem?isFullScreen=true
// Problem     Basic Data Types
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-20, 04:03 p.m.
// ──────────────────────────────────────────────────

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    float b;
    char c;
    long int d;
    double e;
    scanf("%d %ld %c %f %lf", &a,&d,&c,&b,&e);
    printf("%d \n%ld \n%c \n%f \n%lf", a,d,c,b,e);
    return 0;
} 
