#include<iostream>
using namespace std;
class Base{
    int data1;
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};
void Base::setData(){
    data1=10;
    data2=20;
}
int Base::getData1(){
    return data1;
}
int Base::getData2(){
    return data2;
}
class derieved:public Base{
    int data3;
    public:
        void process();
        void display();
};
void derieved::process(){
    data3=data2*getData1();     //as data1 is not a member of class derieve
}
void derieved::display(){
    cout<<"Data 1 is "<<getData1()<<endl;
    cout<<"Data 2 is "<<data2<<endl;        //getData2() may also be used but no need as data 2 is already a member of class derieved
    cout<<"Data 3 is "<<data3<<endl;
}
int main(){
    derieved der;
    der.setData();
    der.process();
    der.display();
    return 0;
}