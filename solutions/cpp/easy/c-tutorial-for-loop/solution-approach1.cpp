// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true
// Problem     For Loop
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-20, 04:47 p.m.
// ──────────────────────────────────────────────────

#include <iostream>
#include <cstdio>
using namespace std;
string name(int n){
    string a;
    if(n==1){
        a="one";
    }else if (n==2){
        a="two";
    }else if(n==3){
        a="three";
    }else if(n==4){
        a="four";
    }else if (n==5){
        a="five";
    }else if(n==6){
        a="six";
    }else if(n==7){
        a="seven";
    }else if(n==8){
        a="eight";
    }else {
        a="nine";
    }
    return a;
}

int main() {
    // Complete the code.
    int a,b;
    cin>>a;
    cin>>b;
    string c;
    for(int i=a;i<=b;i++){
        if(i<=9){
            c=name(i);
            cout<<c<<endl;
        }else if (i%2==0){
            cout<<"even"<<endl;
        }else{
            cout<<"odd"<<endl;
        }
    }
    return 0;
}
