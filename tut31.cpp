#include<iostream>
using namespace std;
class complex{
    int a; int b;
    public:
        complex(){
            a=0;b=0;
        }
        complex(int x){
            a=x;b=0;
        }
        complex(int x,int y){
            a=x;b=y;
        }
        void printNumber(){
            cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex c1;   //complex c1(); -->gives error
    c1.printNumber();
    complex c2(5);
    c2.printNumber();
    complex c3(5,10);
    c3.printNumber();
    return 0;
}