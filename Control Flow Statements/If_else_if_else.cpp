#include<iostream>
using namespace std;
int main(){
    // Control Flow Statements
    // If-Else-If-Else Statement
    int m1,m2,m3,m4,m5,average;
    cout<<"Enter Marks:"<<endl;
    cin>>m1>>m2>>m3>>m4>>m5;
    average = (m1 + m2 + m3 + m4 + m5)/5;
    cout<<average<<endl;


    if(average>90 && average<100){
        cout<<"Grade A"<<endl;
    }
    else if(average>80 && average<90){
        cout<<"Grade B"<<endl;
    }
    else if(average>70 && average<80){
        cout<<"Grade C"<<endl;
    }
    else if(average>60 && average<70){
        cout<<"Grade D"<<endl;
    }
    else{
        cout<<"Fail!!"<<endl;
    }
    return 0;
}