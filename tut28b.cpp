#include<iostream>
using namespace std;
class c2;
class c1{
    int num1;
    friend void exchange(c1 &, c2 &);
    public:
        void inData(int a1){
            num1=a1;
        }
        void display(){
            cout<<"object of c1 has value "<<num1<<endl;
        }
};
class c2{
    int num2;
    friend void exchange(c1 &, c2 &);
    public:
        void inData(int a2){
            num2=a2;
        }
        void display(){
            cout<<"object of c2 has value "<<num2<<endl;
        }
}; 
void exchange(c1 &o1,c2 &o2){
    int temp=o1.num1;
    o1.num1=o2.num2;
    o2.num2=temp;
}
int main(){
    c1 oc1; c2 oc2;
    oc1.inData(34);
    oc2.inData(67);
    exchange(oc1,oc2);
    oc1.display();
    oc2.display();
    return 0;
}