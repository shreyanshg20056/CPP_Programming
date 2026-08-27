#include<iostream>
using namespace std;
int main(){
    // Array:
    // Array is used to store multiple values in a single variable,instead of declaring separate variables for each value. 
    int i,arr[5];
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    for(i=0;i<5;i++){
        cout<<arr[i]<<"\t";
    }

    return 0;
}