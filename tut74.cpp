#include<iostream>
#include<functional>    //to include  functional objects
#include<algorithm>     //to use algorithms with array directly
using namespace std;
void display(int arr[6]){
    int* ptr=arr;
    for(int i=0;i<6;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    cout<<endl;
}
int main(){
    int marks[]={14,2,56,87,2,9};
    sort(marks,marks+5);    //sorts first five elements of array marks only";
    display(marks);
    sort(marks, marks+6, greater<int>());   //greater<int>()---> its an object that carries function to sort in reberse order
    display(marks);
    return 0;
}