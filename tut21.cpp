#include<iostream>
using namespace std;
//forming class, so use class keyword
//name of class start with capital letter
class Employee{
    int m;      //to check if private or public
    private:        //can be accessed only by functions and methods declared within the class Employee
        int a,b,c;
        char p,q;
    public:
        int d,e;
        void setData(int, int, int); //only prototype provided but declared later
        void setChar(char p1, char q1){
            p=p1;
            q=q1;
        }
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
            cout<<"The value of p is "<<p<<endl;
            cout<<"The value of q is "<<q<<endl;
        }
};          //semicolon at end of class definition
void Employee::setData(int a1, int b1, int c1){     //scope resolution operator :: used to show that setData belongs to another name space of class Employee
    //since this method is within scope of Employee class only, so it can access the variables a,b,c
    a=a1;
    b=b1;
    c=c1;

}
int main(){
    Employee harsh;     //for class, struct keyword not needed even when no typedef is there    //here, harsh is an object of class employee
    /*harsh.a=20; //throws error as a is private and cant be accessed from main function   */
    harsh.d=25;
    harsh.e=30;
    /*harsh.m=22;         // doesn't work, so not public means can't be accessed outside class members*/
    harsh.setData(10,15,20);
    harsh.setChar('p','q');
    harsh.getData();        //synatx to call function which are methods of a class and can be applied only to objects of that class
    return 0;
}