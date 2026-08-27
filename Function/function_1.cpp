#include<iostream>
using namespace std;
int sum(int a,int b){
    int totalsum = a + b;
    return totalsum;
}
int main(){
    // Function:
    // A Function is a way to group code into a single unit.It can take inputs, process them, and return a result.Functions help in organising code,
    // making it more readable and maintainable.
    // Why We Need Functions: Functions reduce repitition,complex tasks,and help in debugging.They also make it easier to test individual parts of your program. 
    int x = 10;
    int y = 5;
    int result = sum(x,y);
    cout<<result;
    return 0;
}