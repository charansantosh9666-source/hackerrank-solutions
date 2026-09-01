// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/vector-erase/problem?isFullScreen=true
// Problem     Vector-Erase
// Difficulty  Easy
// Subdomain   STL
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-09-01, 07:49 p.m.
// ──────────────────────────────────────────────────

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector <int>v;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int x;
    cin>>x;
    v.erase(v.begin()+x-1);
    int a,b;
    cin>>a>>b;
    v.erase(v.begin()+a-1,v.begin()+b-1);
    n=v.size();
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
