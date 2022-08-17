#include<iostream>
using namespace std;
class Base{
    protected:
        int a;
    private:
        int b;
    public:
        int c;
};
class Derieved:protected Base{
    public:
        void setData(){
            a=0;            //protected member is inherited
            /* b=0;         //raises error as private member not inherited*/
            c=0;
        }
        void display(){
            cout<<"a is "<<a<<endl;
            cout<<"c is "<<c<<endl;
        }


};
int main(){
    Base b1;
    /* b1.a=0;      //gives error as a is protected so can't be accessed by main()*/
    b1.c=0;
    cout<<b1.c<<endl;
    Derieved d1;
    /*
    d1.a=0;     //error as a is protected member of Derieved class
    d1.c=0;     //error as a is protected member of Derieved class  
    */
   d1.setData();
   d1.display();
    return 0;
}