#include<iostream>
using namespace std;
//revisiting pointers
int main(){
    //basic example
    int a=4;
    int* ptr=&a;
    cout<<"The value at address stored in ptr is "<<*(ptr)<<endl;
    //new keyword
    /*In previous example, we had to create a variable and then give its address in ptr.
    But now we want to assign an address of integer 4 in memory to pointer qtr without
    creating an extra variable*/
    int* qtr=new int(4);
    /* This time new keyword creates an integer in memory with value 4, dynamically
    at runtime and assigns its address to qtr*/
    cout<<"The value at address stored in qtr is "<<*(qtr)<<endl;
    cout<<"The address of integer 4 in memory is "<<ptr<<" and also "<<qtr<<endl;
    //delete keyword
    delete ptr;
    cout<<*ptr<<endl;       //gives a random value as it is now deleted

    //pointers in array
    int c[4];   //creating an array
    c[0]=1;c[1]=2;c[2]=3;c[3]=4;
    int* p=c;
    cout<<"The value at "<<p<<" is "<<c[0]<<" or "<<*(p)<<endl;
    cout<<"The value at "<<(p+1)<<" is "<<c[1]<<" or "<<*(p+1)<<endl;
    cout<<"The value at "<<(p+2)<<" is "<<c[2]<<" or "<<*(p+2)<<endl;
    cout<<"The value at "<<(p+3)<<" is "<<c[3]<<" or "<<*(p+3)<<endl;
    cout<<"The gap is of 4 bytes since array stores integers; remember pointer algebra"
        <<endl;
    
    //new keyword in arrays
    int* q=new int[4];  //note difference in brackets, [] denotes an array
    q[0]=1;*(q+1)=2; //works this  way also
    q[2]=3;q[3]=4;  
    cout<<"The value at "<<q<<" is "<<q[0]<<" or "<<*(q)<<endl;
    cout<<"The value at "<<(q+1)<<" is "<<q[1]<<" or "<<*(q+1)<<endl;
    cout<<"The value at "<<(q+2)<<" is "<<q[2]<<" or "<<*(q+2)<<endl;
    cout<<"The value at "<<(q+3)<<" is "<<q[3]<<" or "<<*(q+3)<<endl;
    cout<<"The gap is of 4 bytes since array stores integers; remember pointer algebra"
        <<endl; 
    

    //delete keyword in arrays
    delete[] q;   //deletes a dynamically created array
    //following lines give unexpected results
    cout<<"The value at "<<q<<" is "<<q[0]<<" or "<<*(q)<<endl;
    cout<<"The value at "<<(q+1)<<" is "<<q[1]<<" or "<<*(q+1)<<endl;
    cout<<"The value at "<<(q+2)<<" is "<<q[2]<<" or "<<*(q+2)<<endl;
    cout<<"The value at "<<(q+3)<<" is "<<q[3]<<" or "<<*(q+3)<<endl;
    return 0;

}