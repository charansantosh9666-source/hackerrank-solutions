// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-strings/problem?isFullScreen=true
// Problem     Strings
// Difficulty  Easy
// Subdomain   Strings
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-27, 08:14 p.m.
// ──────────────────────────────────────────────────

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a;
    cin>>b;
    string c=a+b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<c<<endl;
    a[0]=b[0],b[0]=c[0];
    cout<<a<<" "<<b;
    return 0;
}
