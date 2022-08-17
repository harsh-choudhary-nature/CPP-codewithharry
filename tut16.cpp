#include <iostream>
using namespace std;
// non successful swap function
void swap(int a, int b){
    int temp =a;
    a=b;
    b=temp;
} 
//successful swap function by pointers
//call by reference using pointers
void swapPointer(int* a, int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
//call by reference using reference variables
void swapRefer(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
//return by refernce
int& returnFunction(int &a){
    a=766;
    return a;
}
int main()
{
    int x=4,y=5;
    swap(x,y);          //call by value
    cout<<"X is "<<x<< " and Y is "<<y<<endl;
    swapPointer(&x,&y);    //call by reference using pointers
    cout<<"X is "<<x<< " and Y is "<<y<<endl;
    swapRefer(x,y);    //call by reference using reference variables
    cout<<"X is "<<x<< " and Y is "<<y<<endl; //swaps the swapped value again to give original values
    returnFunction(x)=75;
    cout<<"X is"<<x;
    return 0;
}