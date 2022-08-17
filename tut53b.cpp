#include <iostream>
using namespace std;
// this keyword continued
class A
{
    int a;

public:
    /* A setData(int a)     ----> it also works well*/
    A &setData(int a)
    { // return type of setData() is now type of object of class A. In fact, & shows that its return type is refernced to the calling object of this class
        this->a = a;
        return *this;   //return the object whose address "this" stored [i.e., the object whose pointer was "this"]that called the setData() member function
    }
    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    A a;
    a.setData(4).getData();     //since setData returns an object of class A only, so another method applied here only
    return 0;
}