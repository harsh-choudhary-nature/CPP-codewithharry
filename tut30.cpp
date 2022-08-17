#include<iostream>
using namespace std;
class complex{
    int a;
    int b;
    public:
        complex(int x, int y){      
            a=x;
            b=y;
            //this is a parametrized constructor as it takes arguments
            
        }
        /* //commentcode1
        complex(){      
            a=0;
            b=0;
            //this is a parametrized constructor as it takes arguments
            
        }
        */
        void printNumber(){
            cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main(){
    /* complex c1; //error as no default constructor exists so must pass some parameters */
    /* //valid only if commentcode1 is uncommented, an example of function overloading
    complex c1;
    c1.printNumber();
    */
   complex c2(4,5); //implicit constructor function call
   c2.printNumber();
   complex c3=complex(5,6);     //explicit constructor function call
   c3.printNumber();
    return 0;
}