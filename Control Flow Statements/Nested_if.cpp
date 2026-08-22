#include<iostream>
using namespace std;
int main(){
    // Control Flow Statements
    // Nested If Statement
    float height, weight;
    
    if(height>5){
       
        if(weight>70){
            cout<<"You Got Good BMI"<<endl;

        }
        else{
            cout<<"You Got Bad BMI"<<endl;
        }
    }
    else{
        cout<<"You Got Bad Height"<<endl;
    }
    return 0;
}