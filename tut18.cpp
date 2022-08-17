#include<iostream>
using namespace std;
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a);
    int m;
    cout<<"\nWhich term of fibonacci sequence you want? ";
    cin>>m;
    cout<<"The term at "<<m<<" position in fibonacci sequence is "<<fib(m);
    return 0;
}