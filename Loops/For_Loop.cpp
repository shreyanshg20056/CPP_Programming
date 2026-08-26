#include<iostream>
using namespace std;
// This is the basic for loop
//  for loop is the loop where we know the condition means we knnow from whereto where iteration run
// break keyword: it breaks the loop block when condition is met
// continue keyword: it skips the iteration when condition is met

int main(){
    int i;
    // for(i=0;i<=10;i++){
    //     cout<<i<<"\n";
    // }
    // for(i=0;i<10;i++){
    //     if(i==5){
    //         break;
    //     }
    //     else{
    //         cout<<i<<endl;
    //     }
    // }
    for(i=0;i<10;i++){
        if(i==5){
            continue;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}