#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
        void setID(){
            salary=122; //fixed default value of salary for all employees
            cout<<"Enter the id: ";
            cin>>id;
        }
        void getID(){
            cout<<"The id of employee is "<<id<<endl;
        }
};
int main(){
    int n;
    cout<<"Enter no. of objects in class employee: ";
    cin>>n;
    Employee array_name[n];         //create an array of object of class Employee  
    for(int i=0;i<n;i++){
        array_name[i].setID();
        array_name[i].getID();
    }
    return 0;
}