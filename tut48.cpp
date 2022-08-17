#include<iostream>
using namespace std;
//constructors in derieved classes calling order
class Base1{
    int data1;
    public:
        Base1(int num1){
            data1=num1;
            cout<<"Base1() constructor called!"<<endl;
        }
        void printData1(){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int num2){
            data2=num2;
            cout<<"Base2() constructor called!"<<endl;
        }
        void printData2(){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};
class Derieved: public Base1, public Base2{
    int derieved1, derieved2;
    public:
    //special syntax for constructor of derieved class to deal with many base classes
        Derieved(int a,int b,int c,int d): Base1(a),Base2(b){
            derieved1=c;
            derieved2=d;
            cout<<"Derieved() constructor is called!"<<endl;
        }
        void printDataDerieved(){
            cout<<"The value of derieved1 is"<<derieved1<<endl;
            cout<<"The value of derieved2 is"<<derieved2<<endl;
        }
};
int main(){
    Derieved der(1,2,3,4);
    der.printData1();
    der.printData2();
    der.printDataDerieved();  
    return 0;
}