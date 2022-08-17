#include<iostream>
using namespace std;
inline int product(int a, int b){
    return a*b; //negligible code in function so we made it inline
}
int operation(int a, int b){
    static int c=0; //static initialization line is run only once
    c=c+1;  //the value of static variable is retained even after function call is over. Thats why the static variables are the property of the function
    return a+b+c;
}
//default argument
int money(int a, float factor=1.04){
    return a*factor;
}
int main(){
    int a=4,b=5;
    cout<<product(a,b)<<endl;
    //testing static variable
    cout<<operation(1,1)<<" "<<operation(1,1)<<" "<<operation(1,1)<<" ";
    cout<<money(100)<<" "<<money(100,1.08);
    return 0;
}