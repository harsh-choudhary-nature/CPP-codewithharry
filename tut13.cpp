#include <iostream>
using namespace std;

int main()
{
    // declaring an array
    // method 1
    int marks[] = {10, 9, 9, 10};
    cout << marks[0] << " " << marks[1] << " " << marks[2] << " " << marks[3] << endl;
    // method 2
    int mark[4]; // creates array of size 4 with random integer entries
    cout << mark[0] << " " << mark[1] << " " << mark[2] << " " << mark[3] << endl;
    // changing values of elements stored in arrays
    mark[0] = 8, mark[1] = 9, mark[2] = 10, mark[3] = 11;
    cout << mark[0] << " " << mark[1] << " " << mark[2] << " " << mark[3] << endl;

    // traversing an array using for loop
    for (int i = 0; i < 4; i++)
    {
        cout << marks[i] << " ";
    }
    // traversing an array using while loop
    int i = 0;
    cout << endl;
    while (i < 4)
    {
        cout << marks[i] << " ";
        i++;
    }

    // pointers and arrays
    int a = 3;
    cout << "address of a regular variable a is " << &a << endl;
    cout << "address of an array marks is " << &marks << endl; // gives address of first block(element) of array as after that array is a contigous memory addresses
    cout << "address of an array marks is " << marks << endl;  // this way also the address of first block of array is accessed
    // int* p=&marks; ---------> gives error
    int *p = marks;
    cout << "the value at 0 index of marks is " << *p << " or " << marks[0] << endl;
    cout << "the value at 1 index of marks is " << *(p + 1) << " or " << marks[1] << endl;
    cout << "the value at 2 index of marks is " << *(p + 2) << " or " << marks[2] << endl;
    cout << "the value at 3 index of marks is " << *(p + 3) << " or " << marks[3] << endl;
    int *q = mark;
    p = marks;
    // output predicting practice
    cout << *(q) << endl;   // 8
    cout << *(q++) << endl; // 8
    cout << *(++q) << endl; // 10
    cout << *(q) << endl;   // 10
    return 0;
}