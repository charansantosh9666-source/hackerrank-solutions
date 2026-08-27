// ──────────────────────────────────────────────────
// Link        https://www.hackerrank.com/challenges/c-tutorial-class/problem?isFullScreen=true
// Problem     Class
// Difficulty  Easy
// Subdomain   Classes
// Platform    HackerRank
// Language    cpp
// Status      Accepted
// Submitted   2026-08-27, 08:54 p.m.
// ──────────────────────────────────────────────────

#include <iostream>
#include<string>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{
    private:
        int val1,val2;
        string s1,s2;
    public:
        void set_age(int a){
            val1=a;
        }
        int get_age(){
            return val1;
        }
        void set_standard(int b){
            val2=b;
        }
        int get_standard(){
            return val2;
        }
        void set_first_name(string f){
            s1=f;
        }
        string get_first_name(){
            return s1;
        }
        void set_last_name(string f){
            s2=f;
        }
        string get_last_name(){
            return s2;
        }
        string to_string(){
            stringstream temp,temp2;
            temp << val1;
            temp2 << val2;
            
            return temp.str()+","+s1+","+s2+","+temp2.str();
        }
        
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
