#include<iostream>
using namespace std;
//a simple function
int sum(int a, int b){
    int c=a+b;
    return c;
} 
//function prototyping
int difference(int,int);
void g(void);  //or /*void g();*/
int main(){
    int num1,num2;
    cout<<"Enter two no.'s";
    cin>>num1>>num2;
    cout<<"\nThe sum is"<<sum(num1,num2);
    cout<<"\nThe difference is "<<difference(num1,num2);
    g(); //call to a void function
    return 0;
}
//defined after main but protype already passed before main()
int difference(int a, int b){
    int c=a-b;
    return c;
} 
void g(){
    cout<<"\n Good morning";
}