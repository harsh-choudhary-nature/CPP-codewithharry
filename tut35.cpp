#include<iostream>
using namespace std;
//destructors
int count=0;
class num{
public:
    num(){
        count++;
        cout<<"Constructor is called for creating object number "<<count<<endl;
    }
    ~num(){
        cout<<"Destructor is called for destroying object number "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<"Welcome to main"<<endl;
    cout<<"Creating our first object"<<endl;
    num n1;
    {
        //entering a block
        cout<<"Entering the block"<<endl;
        cout<<"creating two more objects "<<endl;
        num n2, n3;
        cout<<"exiting the block"<<endl;
    }  
    cout<<"back to main"<<endl;
    
    return 0;
}