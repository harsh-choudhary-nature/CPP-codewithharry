#include<iostream>
using namespace std;
class complex;      //forward declaration, so that when compiler notices calculator class, so it knows some class complex also exists
class calculator{
    public:
    int calcRealSum(complex,complex);
    int calcImSum(complex,complex);
    //dont give complete defintition here, as it uses a and b. The compiler only knows that class complex exists but it has no idea about what are the data members in the class
};
class complex{
    int a;
    int b;
    public:
        friend class calculator;    //complete calculator class and all its members are now given access to private data of complex class
        void setNumber(int n1, int n2){
            a=n1;
            b=n2;
        }
        void printNumber(){
            cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int calculator::calcRealSum(complex o1, complex o2){
    return (o1.a+o2.a);
}
int calculator::calcImSum(complex o1, complex o2){
    return (o1.b+o2.b);
}
int main(){
    complex c1,c2;
    c1.setNumber(1,4);
    c1.printNumber();
    c2.setNumber(5,6);
    c2.printNumber();
    calculator calc;
    cout<<"The sum of real parts of these numbers are "<<calc.calcRealSum(c1,c2)<<endl;
    cout<<"The sum of imaginary parts of these numbers are "<<calc.calcImSum(c1,c2)<<endl;
    return 0;
}