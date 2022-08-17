#include<iostream>
using namespace std;
class complex{
    int a; int b;
    public:
        complex(int x=0, int y=0){
            a=x;
            b=y;
        }
        void printNumber();
};
void complex::printNumber(){
    cout<<a<<" + "<<b<<"i"<<endl;
}
int main(){
    complex c1=complex();       //  complex c1(); ------------>not produces desired results
    complex c2(1);
    complex c3(0,1);
    complex c4(1,1);
    complex c5;                 //this works well
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();  
    c4.printNumber();
    c5.printNumber();
    return 0;
}