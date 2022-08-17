#include<iostream>
using namespace std;
int glo=6;
int glow=7;
void sum(){
    cout<<"From sum() value of glo is"<<glo;
}
int main(){
    char first='h';
    char second='c';
    int a=4,b=6;
    cout<<first<<" "<<second<<'\n';
    cout<<"Here the value of a is "<<a<<" and the value of b is "<<b;
    float pi=3.14f;
    cout<<"\nThe value of pi is"<<pi;
    int glo=8;
    cout<<"From main() value of glo is"<<glo;
    glow=8;     //works without error
    cout<<"From main() value of glow is"<<glow;
    return 0;
}