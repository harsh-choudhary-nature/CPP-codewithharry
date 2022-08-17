#include<iostream>
using namespace std;
 
int main(){
    //pointers
    int a=3;
    int* b=&a;
    //&--->address of operator
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    //*--->value at operator
    cout<<"The value at address of a is "<<a<<endl;
    cout<<"The value at address of a is "<<*b<<endl;
    cout<<"The value at address of a is "<<*&a<<endl;
    cout<<"The value at address of a is "<<*(&a)<<endl;
    //pointer to pointer
    int** c=&b;
    cout<<"The address of b is "<<&b<<" or "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at adress of value at value at c is "<<*&(**c)<<endl;
    cout<<"The value at adress of value at value at c is "<<(**c)<<endl;
    return 0;
}