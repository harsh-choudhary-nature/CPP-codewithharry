#include<iostream>
using namespace std;
int main(){
    //for loop
    for(int i=1; i<=40; i++){
        cout<<i<<" ";
    }
    //while loop
    int i=1;
    cout<<endl;
    while(i<=40){
        cout<<i<<" ";
        i++;
    }    
    //do-while loop
    //atleast runs once
    int j=1;
    cout<<endl;
    do{
        cout<<j<<" ";
        j++;
    }while(false);
   
    //homework
    int no;
    cout<<"Enter the no. whose table you want: ";
    cin>>no;
    for(int i=1; i<=10; i++){
        cout<<no<<" * "<<i<<" = "<<no*i<<endl;
    }
     return 0;
}