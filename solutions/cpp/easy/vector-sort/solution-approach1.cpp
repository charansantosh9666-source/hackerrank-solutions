// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/vector-sort/problem?isFullScreen=true
// Problem     Vector-Sort
// Difficulty  Easy
// Subdomain   STL
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-01, 07:34 p.m.
// ──────────────────────────────────────────────────

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,a;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
