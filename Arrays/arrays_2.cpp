#include<iostream>
using namespace std;
int main(){
    int i,arr[5];
    float max = arr[0];
    
    for(i=0;i<5;i++){
        cin>>arr[i];
    }

    for(i=0;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }

    cout<<"Max:"<<max<<endl;
    return 0;
}