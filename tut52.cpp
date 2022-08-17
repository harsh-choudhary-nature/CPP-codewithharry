#include<iostream>
using namespace std;
class ShopItem{
    int id;
    float price;
    public:
        void setData(int i,float p){
            id=i;
            price=p;
        }
        void getData(){
            cout<<"ID is "<<id<<endl;
            cout<<"price is "<<price<<endl;
        }
};
int main(){
    int size=3;
    ShopItem* ptr=new ShopItem[size];
    ShopItem* tempPtr=ptr;      //so that when ptr icrements in first for loop, we still have correct pointer for second for loop  
    for(int i=0;i<size;i++){
        int idd; float pri;
        cout<<"Enter id of item "<<i+1<<" ";
        cin>>idd;
        cout<<"Enter price of item "<<i+1<<" ";
        cin>>pri;
        ptr->setData(idd,pri);
        ptr++;
    }
    //ptr=ptr-size;  -----> this avoids use of tempPtr unlike how we have used here
    for(int i=0;i<size;i++){
        tempPtr->getData();
        tempPtr++;
    }
    return 0;
}