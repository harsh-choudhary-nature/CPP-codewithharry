#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
        //constructor must be in public part of class only
        complex(){      //name of constructor same as that of class
            //cout<<"Constructor called";
            a=0;
            b=0;
            //this is a default constructor as it takes no arguments
            //a constructor is mostly used for auto initialisation
            //a constructor may not be made, but if it's declared, then it must contain at least one valid non comment c++ statement
        }
        void printNumber(){
            cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){
    complex c1,c2;
    c1.printNumber();
    c2.printNumber();  

    return 0;
}