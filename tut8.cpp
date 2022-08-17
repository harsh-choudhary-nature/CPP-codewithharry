#include<iostream>
#include<iomanip>       //to use setw
using namespace std;
int main()
{
    float a=45;         //even this can be treated as a float
    a=46;
    cout<<a;
    /*const float b=47.8;
    cout<<b<<endl;
    b=48;           //throws an error that b is a read only variable
    return 0;*/

    //manipulators in c++
    int x=4,y=44,z=444;
    cout<<"without setw(), x is: "<<x<<endl;
    cout<<"without setw(), y is: "<<y<<endl;
    cout<<"without setw(), z is: "<<z<<endl;
    cout<<"with setw(), x is: "<<setw(4)<<x<<endl;
    cout<<"with setw(), y is: "<<setw(4)<<y<<endl;
    cout<<"with setw(), z is: "<<setw(4)<<z<<endl;

}
