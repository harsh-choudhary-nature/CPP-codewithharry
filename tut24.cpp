#include<iostream>
using namespace std;
//static variables
class Employee{
    int id;
    static int count;   //auto initialised to zero
    /* static int count=1000   //gives error, the initial value can be changed only elsewh0ere */
    public:
        void setData(){
            cout<<"Enter ID: ";
            cin>>id;
            count++;
        }
        void getData(){
            cout<<"The id  of employee number "<<count<<" is "<<id<<endl;
        }
        //now we create a static function
        //a static function has access to only static variables or other static functions
        static void getCount(){
            /* cout<<id; //throws error as a non static variable cant be accessed by a static function */
            cout<<"The value of count is "<<count<<endl;
        }
};
//count is static variable or static data members of class Employee
int Employee::count =1000;   //it's a must statement to define static variable of a class completely.
//this is only elsewhere point where you can initialize the static variable also
//however initialization is completely optional and default value is 0.
int main(){
    Employee harsh, harry, heera;
    //this time count is initialized only once and not for each object of class Employee
    //count thus stores the no. of objects in class employee
    harsh.setData();
    harsh.getData();
    Employee::getCount();       //a static function call can be just by class name and no need of the object

    harry.setData();
    harry.getData();
    Employee::getCount();       //syntax for calling a static function

    heera.setData();
    heera.getData();
    Employee::getCount();

    return 0;
}