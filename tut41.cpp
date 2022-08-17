#include<iostream>
using namespace std;
//multiple inheritances
class Base1{
    protected:
        int base1int;
    public:
        void setBase1int(int n1){
            base1int=n1;
        }
};
class Base2{
    protected:
        int base2int;
    public:
        void setBase2int(int n2){
            base2int=n2;
        }
};
class derieved:public Base1,public Base2{
    public:
        void show(){
            cout<<"The value of base1int is "<<base1int<<endl;
            cout<<"The value of base2int is "<<base2int<<endl;
        }
};
int main(){
    derieved d;
    d.setBase1int(250);
    d.setBase2int(155);
    d.show();  
    return 0;
}