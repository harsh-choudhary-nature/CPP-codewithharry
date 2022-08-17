#include<iostream>
using namespace std;
//this pointer in c++
class A{
    int a;
    public:
        void setData(int a){    //till now we used a1 in argument so that a and a1 are distinct, but what if we set argument as a only
            a=a;                //it only prefers local variable a and class variable a is not even touched. It works with a parameter only and value of class data member a is still a garbage value
        }
        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};
//avoid anomaly in class B using this pointer in class B
class B{
    int b;
    public:
        void setData(int b){    //till now we used a1 in argument so that a and a1 are distinct, but what if we set argument as a only
            this->b=b;          //as this is a pointer, so arrow used. 
            /*Note:
                this pointer always points to the object that invoked the member function.
                Here, this->b means it is referring to the data member 'b' of the object that invoked the setData() member fumction of class.
                */
        }
        void getData(){
            cout<<"The value of b is "<<b<<endl;
        }
};
//looking here we may feel that use of this is very minimal and we can use different names to avoid using this. So refer to tut53b.cpp
int main(){
    A a;
    a.setData(4);
    a.getData();
    B b;
    b.setData(4);
    b.getData();
    return 0;
}