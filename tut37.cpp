#include<iostream>
using namespace std;
//inheritance
//base class
class Employee{
    int regn;          //private members are never inherited
    public:
    int id;         //here made public so that we can show it gets inherited
    int salary;     
        Employee(){salary=2000;}    //defsult constructor created so that when we create an object of derieved class, then automatically constructor of this class will be called. But another constructor is parametrized one, so one default constructor has to be created.
        Employee(int num){
            regn=22110214;
            id=num;
            salary=2000;
        }  
        void printData(){
            cout<<regn<<" "<<id<<" "<<salary<<endl;
        }      
};
class Programmer:public Employee{
    //public members id, salary of base class employee is public here also, so can be accessed directly from main
    int languageCode;
    public:
        
        /*Programmer(int num){
            regn=num;       //gives error as private member regn is not inherited 
        }*/    
        Programmer(int num){
            id=num;       //gives no error
            languageCode=9;
        }
};

class SuperProgrammer:  Employee{       //either specify private in place of public or leave it blank, as default value of visibility code is private only
    //public members id, salary of base class employee is public here also, so can be accessed directly from main
    int languageCode;
    public:
        
            
        SuperProgrammer(int num){
            id=num;       //gives no error
            languageCode=9;
        }
        void printData(){
            //now to see the data of SuperProgrammer class, we need a printData function as now num and salary are private members of this class
            cout<<id<<" "<<salary<<endl;
        }
};
int main(){
    Employee e1(12);
    e1.printData();
    Programmer p1(22);
    cout<<p1.id<<" "<<p1.salary<<endl;
    /* cout<<p1.languageCode<<endl; //throws error as languageCode is private member of Programmer class*/
    SuperProgrammer sp1(32);
    /* cout<<sp1.id<<endl; //throws error as id is private member of SuperProgrammer class*/
    sp1.printData();
    return 0;
}