#include<iostream>
using namespace std;
class Y;        //for line 10, as till then compiler has no idea about any existence of class Y, so used forward declarartion here
class X{
    int data;
    public:
        void setData(int value){
            data=value;
        }
        friend void add(X,Y);
};
class Y{
    int num;
    public:
        void setData(int value){   //checks the object using the setValue function and thus compiler decides which class's setValue() has to be used, X or Y
            num=value;
        }
        friend void add(X,Y);
};
void add(X o1, Y o2){   //function that accesses private members of bothe classes X and Y so must be freind of both
    cout<<"The sum is "<<o1.data+o2.num;
}
int main(){
    X a1; Y a2;
    a1.setData(5);
    a2.setData(9);
    add(a1,a2);
    return 0;
}