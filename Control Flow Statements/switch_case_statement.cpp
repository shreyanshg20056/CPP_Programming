#include<iostream>
using namespace std;
int main(){
    // Switch Case Statements: The switch case statement in c++ is a control flow statement that allows you to execute different blocks of code based on the value of an
    //  expression. It's an alternative of if-else statements when you need to compare a variable against multiple values.
    int a,b;
    char opt;
    cout<<"Enter Values Of a and b:"<<endl;
    cin>>a>>b;
    cout<<"Enter Operator:"<<endl;
    cin>>opt;

    switch(opt){
        case '+':
            cout<<"The Addition Of a and b is:"<<a + b<<endl;
            break; 
        case '-':
            cout<<"The Subtraction Of a and b is:"<<a - b<<endl;
            break;
        case '*':
            cout<<"The Multiplication Of a and b is:"<<a * b<<endl;
            break;
        case '/':
            cout<<"The Division Of a and b is:"<<a / b<<endl;
            break;
        case '%':
            cout<<"The Modulus Of a and b is:"<<a % b<<endl;
            break;
        default:
        cout<<"Invalid Operator!! Try Again.";
    }
    return 0;
}