#include<iostream>
using namespace std;
int main(){
    // Control Flow Statements
    // If-Else Statement
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    if(num%2==0){
        cout<<num<<" Is Even Number"<<endl;
    }
    else{
        cout<<num<<" Is Odd Number"<<endl;

    }
    return 0;
}