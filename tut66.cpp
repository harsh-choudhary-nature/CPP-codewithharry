#include<iostream>
using namespace std;
//template with default parameters
template<class T1=int,class T2=float,class T3=char>
class Harsh{
    T1 data1;
    T2 data2;
    T3 data3;
    public:
        Harsh(T1 a,T2 b,T3 c){
            data1=a;
            data2=b;
            data3=c;
        }
        void display(){
            cout<<"The value of data1 is "<<data1<<endl;
            cout<<"The value of data2 is "<<data2<<endl;
            cout<<"The value of data3 is "<<data3<<endl;
        }
};
int main(){
    Harsh<> h(1,1.2,'d');     //anyway <> angukar brackets can't be missed as this is object of class template  
    h.display();
    cout<<endl;
    Harsh<char,char,char> har('H','C','N');
    har.display();
    return 0;
}