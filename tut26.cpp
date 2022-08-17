#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        void setNumber(int n1, int n2){
            a=n1;b=n2;
        }
        void printNumber(){
            cout<<"The number is "<<a<<" + "<<b<<"i"<<endl;
        }
        /*  complex setNumberBySum(complex,complex); //only prototype not enough as here it accesses the private members of class complex also, so i must be a friend function */
        friend complex setNumberBySum(complex,complex);        //can be put in private section also, as ultimately private data access permission is given
};      
complex setNumberBySum(complex o1, complex o2){
    //all is correct with this function, but its created outside the class, so it doesn't has access to private members a and b of class complex
    complex c;
    c.setNumber((o1.a+o2.a),(o1.b+o2.b));       //this line would create error as it needs access to a and b of objects o1 and o2
    //still, it cannot refer directly to a or b as they don't share same scope. So, <objectName>.<propertName> convention has to be maintained.
    return c;

}
int main(){
    complex c1,c2,c3;
    c1.setNumber(1,4);
    c1.printNumber(); 
    c2.setNumber(5,6);
    c2.printNumber(); 
    //note that friend function is an external function only, it's not a member of class, so dont access it using <classObject>.<friendFunction>() as friend function is just a outsider function which has special access to use private data of the class
    c3=setNumberBySum(c1,c2);
    c3.printNumber();
    return 0;
}