// Unary Operator are Basically increment and decrement operator
// These have two types pre and post
#include<iostream>
using namespace std;
int main(){
    int n,m,r,s;
    n = 10;
    m = 13;
    r = 7;
    s = 9;
    cout<<"n:"<<n<<endl;
    cout<<"m:"<<m<<endl;
    cout<<"r:"<<r<<endl;
    cout<<"s:"<<s<<endl;
    cout<<"n:"<<(++n)<<endl; // pre-increment do the increment first and then print.
    cout<<"m:"<<(m++)<<endl; // post-increment print code first and then increment.
    cout<<"r:"<<(--r)<<endl; // pre-decrement do the decrement first and then print.
    cout<<"s:"<<(s--)<<endl; // post-decrement do print first and then decrement.
    return 0;
}