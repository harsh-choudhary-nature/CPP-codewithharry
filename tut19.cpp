#include<iostream>
using namespace std;
//function overloading
int sum(int a, int b){
    cout<<"(sum using function with 2 arguments)"<<endl;
    return a+b;
}
int sum(int a, int b, int c){
    cout<<"(sum using function with 3 arguments)"<<endl;
    return a+b+c;
}
//volume of cylinder
float volume(double r, double h){
    return(3.14*r*r*h);
}
//volume of cube
float volume(double a){
    return(a*a*a);
}
/*
//volume of sphere
float volume(double r){
    return(4/3*3.14*r*r*r);
}
//This gives error as complete redefinition of function prototype is there and no point of difference is there
*/
int main(){
    cout<<"The sum of 5 and 6 is "<<sum(5,6)<<endl;
    cout<<"The sum of 4,5 and 6 is "<<sum(4,5,6)<<endl;
    cout<<"The volume of cylinder of r=5, h=5 is "<<volume(5,5)<<endl;
    cout<<"The volume of cube of a=5 "<<volume(5)<<endl;
    return 0;
}