// Logical Operator is also known as Conditional Operator
// It give the value basis on the conditions
#include<iostream>
using namespace std;
int main(){
    int a,b;
    // int c;
    cin>>a>>b;
    // cin>>c;
    // and && operator: The condition is any one condition must be true it basically operates on addition operator 
    // if(a>b && a>c){
    //     cout<<"a is greater.";
    // }
    // else if(b>a && b>c){
    //     cout<<"b is greater.";
    // }
    // else{
    //     cout<<"c is greater.";
    // }
    // or || operator: The condition is both two conditions must be true it basically operates on multiplication operator
    // if(a>b || b<a){
    //     cout<<"a is greater";
    // }
    // else{
    //     cout<<"b is greater";
    // }
    // not ! operator: It simple reverse the result true->false and false->true
     cout<<!(a>b); //1: The original result is 0 as 5<9 so not operator reverse the result 
    return 0;
}