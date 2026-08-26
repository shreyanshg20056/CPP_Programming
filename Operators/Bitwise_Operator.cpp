// Bitwise Operator: It works on bits,for ex: 5 -> 101
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    
    // & bitwise operates such as 5 -> 101 and 4 -> 100= 100 -> 4
    // cout<<(a & b);

    // | or bitwise operator it decides on either one 1 value such as 100 and 101 -> 101,so in this case we got 5
    // cout<<(a | b);

    // NOT ~ bitwise operator
    cout<<(~6)<<endl;

    // left shift operator(<<)
    cout<<(a << 1)<<endl;

    // right shift operator(>>)
    cout<<(a >> 1)<<endl;
   
    // Xor ^ bitwise operator
    cout<<((a^b))<<endl;
    b = float(b);
    cout<<(b);


    return 0;
}