#include<iostream>
using namespace std;
//function templates
template<class t1, class t2>    //still class keyword only used
//we have used multiple parameters 
//no concept of default parameters because anyway data type of arguments in function call is used
void swapp(t1 &a,t2 &b){
    t1 temp= a;
    a=b;        //if t1 and t2 are not same, then gives unexpected results
    b=temp;
}
int main(){
    int x=5;
    int y=7;
    swapp(x,y);
    cout<<x<<y;
    return 0;
}