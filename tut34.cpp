#include<iostream>
using namespace std;
//copy constructors
class trial{
    int data;
    public:             //no copy constructor still compiler provides its own copy constructor
        trial(int num){
            data=num;
        }
        void show(){
            cout<<data<<endl;
        }
};
class Number{
    int number;
    public:
        Number(){
            number=0;
        }
        Number(int n){
            number=n;
        }
        Number(Number &m){      //copy constructor 
            cout<<"Our made copy constructor"<<endl;
            number=m.number;
        }
        void show(){
            cout<<number<<endl;
        }
};
int main(){
    trial t1(2);
    t1.show();
    trial t2(t1);       //syntax for making another object as copy of previous object of class
    t2.show();
    Number n1,n2,n3(20),n5;
    cout<<"creating n4"<<endl;
    Number n4(n3);      //copy constructor called
    cout<<"assignig already created n5 with default constructor"<<endl;    
    n5=n3;              //copy constructor not called, rather general assignment
    cout<<"creating n6 with data from n3, so automatically copy constructor is used"<<endl;
    Number n6=n3;       //copy constructor called
    n1.show();n2.show();n3.show();n4.show();n5.show();n6.show();


    return 0;
}