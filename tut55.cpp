#include<iostream>
using namespace std;
//pointers to derieved classes
class BaseClass{
    public:
        int varBase;
        void display(){
            cout<<"The value of varBase is "<<varBase<<endl;
        }
};
class DerievedClass: public BaseClass{
    public:
        int varDerieved;
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
    base_class_pointer->varBase=25;     //since varBase is public so its member of both BaseClass and DerievedClass
    base_class_pointer->display();      //display() of base class will run because the pointer is of BaseClass only; that is why its late binding, it decides at run time that it has to call display() of base class as pointer is of base class only
    /*base_class_pointer->varDerieved=0;  
    //the above statement throws error as base_class_pointer is pointer of base class only, so it
    can alter or access only data members and member functions of base class object. varDerieved is
    not a member of BaseClass so it can't be accessed using base_class_pointer*/
    DerievedClass* derieved_class_pointer;
    derieved_class_pointer=&derieved_class_obj;
    derieved_class_pointer->varBase=200;
    derieved_class_pointer->varDerieved=250;
    derieved_class_pointer->display();      //derieved class's display() will run
    BaseClass* base_class_pointer1;
    base_class_pointer1=&base_class_obj; 
    base_class_pointer1->display();
    return 0;
}