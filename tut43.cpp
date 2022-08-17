#include<iostream>
using namespace std;
//ambuiguity resolution 
class Base1{
    public:
        void greet(){
            cout<<"How are you!"<<endl;
        }
};
class Base2{
    public:
        void greet(){
            cout<<"Kaise Ho!"<<endl;
        }
}; 
class Derieved:public Base1,public Base2{
    public:
        /* ambuiguity resolution code starts */
        //Derieved class greet() method overrides the base class's greet(), so no ambuigity
        void greet(){       //in a way a function definition only that calls to appropriate methods from either of the base classes or both of the base classes simultaneously
            Base1::greet();     
            Base2::greet();
        }
        /* ambuiguity resolution code ends */
};
int main(){
    Base1 b1;
    b1.greet();
    Base2 b2;
    b2.greet();
    Derieved d;
    d.greet();          //ambigous, so ambuiguity resolved in ambuigity resolution code  
    return 0;
}