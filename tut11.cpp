#include<iostream>
using namespace std;
 
int main(){
    //break
    for(int i=1;i<=4;i++){
        
        if(i==2){
            break;
        }
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=1;i<=4;i++){
        
        if(i==2){
            continue;
        }
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}