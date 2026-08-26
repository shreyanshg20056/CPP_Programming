#include<iostream>
using namespace std;
int main(){
    //  In do while the flaw is that this loop first run do block and then while condition.
    int i = 10;
    do{
        cout<<i<<endl;
        i--;
    }while(i>0);
}