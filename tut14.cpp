#include <iostream>
using namespace std;

// creating a structure
struct employee
{
    int eId;
    char favChar;
    float salary;
}; // semicolon needed here also
// typedef
typedef struct employee1
{
    int eId;
    char favChar;
    double salary;
} ep;

// making a union
union money
{
    int rice;
    char car;
    float pounds;
};
int main()
{
    struct employee harry;
    harry.eId = 125;
    harry.favChar = 'c';
    harry.salary = 246413166;
    cout << harry.eId << " " << harry.salary << " " << harry.favChar << " ";
    ep harsh; // shortcut
    harsh.salary = 20000;
    cout << harsh.salary;
    struct employee1 harsh1; // longcut still valid
    harsh1.salary = 200000;
    cout << " " << harsh1.salary<<endl;
    // union
    union money m1;
    m1.rice = 34;
    cout << m1.rice << endl;
    m1.car = 'c';            // as now we start using car, so use of rice discontinued and accessing it gives only garbage values
    cout << m1.rice << endl; // gives random garbage value
    cout << m1.car << endl;  // gives correct value
    //enum
    enum Meal{breakfast, lunch, dinner};
    cout<<breakfast<<' '<<lunch<<' '<<dinner<<' ';
    Meal m11=breakfast;
    cout<<endl<<m11;
    m11=lunch;
    cout<<endl<<(m11==2);
    return 0;
}