#include<iostream>
using namespace std;
//pointers to objects
class Complex{
    int real, imaginary;
    public:
        void setData(int r,int i){
            real=r;
            imaginary=i;
        }
        void getData(){
            cout<<real<<" + "<<imaginary<<"i"<<endl;
        }
};
int main(){
    Complex c1;
    Complex* ptr= &c1;  
    /* the above two lines can be simply achieved using
    Complex* ptr=new Complex;
    */
    (*ptr).setData(4,5);
    (*ptr).getData();
    //or by arrow functions-----> available with only pointers of objects
    ptr->setData(4,5);
    ptr->getData();
    //array of objects and pointers to access array's elements
    Complex* ptr1=new Complex[3];   //same task performed by below 2 lines in comment
    /*Complex ca[3];
    Complex* ptr1=ca;*/
    ptr1->setData(1,2);
    (ptr1+1)->setData(3,4);
    (ptr1+2)->setData(5,6);
    ptr1->getData();
    (ptr1+1)->getData();
    (ptr1+2)->getData();
    return 0;
}