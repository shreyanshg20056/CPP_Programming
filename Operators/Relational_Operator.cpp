// Realtional Operator actually compare operands and give value true or false
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"True:1 and False:0";
    cout<<"Greater:"<<(a<b)<<endl;
    cout<<"Greater Or Equal:"<<(a>=b)<<endl;
    cout<<"Lesser:"<<(a<b)<<endl;
    cout<<"Lesser Or Equal:"<<(a<=b)<<endl;
    cout<<"Equal To:"<<(a==b)<<endl;
    cout<<"Not Equal To:"<<(a!=b)<<endl;
    return 0;
}