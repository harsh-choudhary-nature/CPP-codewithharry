#include<iostream> //this is a system header file
#include"this.h" // this is a user defined header file(dont confuse with this keyword)
/*if this.h file not exists in current directory of c++ as the source code, then raises an error*/
using namespace std;
int main()
{
    cout<<"Opeartors in C++"<<endl<<"Following are the opeartors in c++"<<endl;
    //arithmetic operators
    int a=4, b=5;
    cout<<"a+b"<<a+b<<endl;
    cout<<"a-b"<<a-b<<endl;
    cout<<"a*b"<<a*b<<endl;
    cout<<"a/b"<<a/b<<endl;
    cout<<"a%b"<<a%b<<endl;
    cout<<"a++"<<a++<<endl;
    cout<<"++a"<<++a<<endl;
    cout<<"a--"<<a--<<endl;
    cout<<"--a"<<--a<<endl;
    //assignment operators
    cout<<"a==b"<<(a==b)<<endl;
    cout<<"a!=b"<<(a!=b)<<endl;
    cout<<"a>=b"<<(a>=b)<<endl;
    cout<<"a<=b"<<(a<=b)<<endl;
    cout<<"a>b"<<(a>b)<<endl;
    cout<<"a<b"<<(a<b)<<endl;
    
    //logical operators
    cout<<"(a==b)&&(a<b)"<<((a==b)&&(a<b))<<endl;
    cout<<"(a==b)||(a<b)"<<((a==b)||(a<b))<<endl;
    cout<<"!(a==b)"<<(!(a==b))<<endl;
    return 0;
}
