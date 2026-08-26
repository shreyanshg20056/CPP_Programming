#include<iostream>
using namespace std;
int main(){
    // Assignment Operator: it simply assigns value and its simple operator is equal.

    int a,b;
    cin>>a>>b;
    
    // Equal operator (=) : assign value of a variable into another variable.
    a = b;
    cout<<"a:"<<a<<endl;

    // Add and assign (+=) operator 
    a += b;
    cout<<"a:"<<a<<endl;
    
    // subtract and assign (+=) operator 
    a -= b;
    cout<<"a:"<<a<<endl;
    
    // Multiply and assign (+=) operator 
    a *= b;
    cout<<"a:"<<a<<endl;
    
    // division and assign (+=) operator 
    a /= b;
    cout<<"a:"<<a<<endl;
    
    // Modulus and assign (+=) operator 
    a %= b;
    cout<<"a:"<<a<<endl;
    
    return 0;
}