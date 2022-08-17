#include <iostream>
using namespace std;
int c = 45;
int d = 45;
int main()
{
    int a = 4, b = 5;
    int c = a + b;
    cout << "Local c " << c;
    cout << "Global c " << ::c;
    d = a + b; // no declaration inside main() so alters global value, but confirm
    cout << "Local d " << d;
    cout << "Global d " << ::d;
    cout << "\nThe value of 34.4 is" << sizeof(34.4) << endl;
    cout << "The value of 34.4f is" << sizeof(34.4f) << endl;
    cout << "The value of 34.4F is" << sizeof(34.4F) << endl;
    cout << "The value of 34.4l is" << sizeof(34.4l) << endl;
    cout << "The value of 34.4L is" << sizeof(34.4L) << endl;
    //*******************reference variables********************
    float x = 34.4;
    float y = x;
    float &z = x; // syntax for refernce variables
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
    cout << "z is " << z << endl;
    x = 50;
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
    cout << "z is " << z << endl;
    z = 6;
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
    cout << "z is " << z << endl;
    // type casting
    int p = 25;
    float q = 25.6;
    cout << "The value of float p is" << float(p) << endl;
    cout << "The value of float p is" << (float)p << endl;
    cout << "The value of float p is" << (float)(p) << endl;
    cout << "The value of int q is" << int(q) << endl;
    cout << "The value of int q is" << (int)q << endl;
    cout << "The value of int q is" << (int)(q) << endl;
    return 0;
}
