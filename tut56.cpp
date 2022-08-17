#include<iostream>
using namespace std;
//virtual functions
class BaseClass{
    public:
        int varBase=2;
        virtual void display(){
            cout<<"The value of varBase is "<<varBase<<endl;
        }
};
class DerievedClass: public BaseClass{
    public:
        int varDerieved=250;
        void display(){
            cout<<"The value of varBase is "<<varBase<<endl;
            cout<<"The value of varDerieved is "<<varDerieved<<endl;
        }
};
int main(){
    cout<<"Hello world"<<endl;
    BaseClass* base_class_pointer;
    BaseClass base_class_obj;
    DerievedClass derieved_class_obj;
    base_class_pointer=&derieved_class_obj;     //pointer of Base Class object is used to point to an object of derieved class; it is legal in c++
    base_class_pointer->varBase=25;     //since varBase is public so its member of both BaseClass and DerievedClass;
    base_class_pointer->display();      //display() of derieved class will run because the display() of BaseClass is made virtual
    BaseClass* base_class_pointer1;
    base_class_pointer1=&base_class_obj; 
    base_class_pointer1->display();
    return 0;
}