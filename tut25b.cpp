#include<iostream>
using namespace std;
class complex{
    int a;      //real part
    int b;      //imaginary part
    public:
        void setData(int v1, int v2){
            a=v1;       //v1 is received as argument and its value is used to create real part of a complex number (i.e. object of class complex)
            b=v2;
        }
        void printData(){
            cout<<"The complex number created by you is "<<a<<" + "<<b<<"i"<<endl;
        }
        void setDataBySum(complex o1, complex o2){      //objects passed as function arguments, these objects may be of other classes also, here they are of same class and same class in which the function exists also
            a=o1.a+o2.a;        //setting real part of new object as sum of real parts of two objects passed as argument
            b=o1.b+o2.b;            
        }
};
int main(){
    complex c1,c2,c3;
    c1.setData(3,4);
    c1.printData();
    c2.setData(5,6);
    c2.printData();
    c3.setDataBySum(c1,c2);
    c3.printData();  
    return 0;
}