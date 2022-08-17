#include <iostream>
using namespace std;
// initialization section in constructor
class test
{
    int a; // here a is initialized first===>matters only if initializing by initialization sect
    int b;

public:
    //test(int i, int j) : a(i), b(j)    //works
    //test(int i, int j): a(i+1),b(i-j)    //works
    //test(int i, int j): a(i+1),b(i-a)    //works
    //test(int i, int j): b(i+1),a(b-1)    //not works and gives garbage value of a, b is fine. This is because by initiailizing this way, the value of variable declared first in class is initialized first. So, initially b contains a garbage value, and that is use to first initialize a despite if its written after in initialization section, first a is initialized. Then b is initialized
    //test(int i, int j): b(i+a),a(b-1)       //not works as secondly, b will use garbage a in its initialization
    test(int i, int j): b(i+a)    
    {   //class body may be empty also and it may assign the values also
        a=i;            //initially a is garbage. As a is not in initialization-section so first b is initialized and assigned another garbage value. then a is initialized from constructor body.
        cout << "constructor executed" << endl;
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
    }
};
int main()
{
    test ele(4, 9);
    return 0;
}