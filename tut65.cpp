#include<iostream>
using namespace std;
//class templates with multiple parameters
template<class T1, class T2>    //now data types T1 and T2 are used in class definition, so they both must be passed when creating object of this class
class myClass{
    T1 data1;
    T2 data2;
    public:
        myClass(T1 a, T2 b){
            data1=a;
            data2=b;
        }
        void display(){
            cout<<"The value of data1 is "<<data1<<endl;
            cout<<"The value of data2 is "<<data2<<endl;
        }
};
int main(){
    myClass<float,char> myObj(1.25,'c');
    myObj.display();  
    return 0;
}