#include<iostream>
using namespace std;
 //using arrays inside class
class Shop{
    int itemID[100];            //array to store ID of each item in the object of class shop
    int itemPrice[100];     //array to store price of each item in the object of class shop
    int counter;        //counter variable that is set to zero whenever a new object of shop is cfeated; set manually from main()
    public:
        void initCounter(){
            counter=0;      //called only once when a new object of shop is created
        }
        void setItem();
        void displayItem();
};
void Shop::setItem(){
    cout<<"Enter the id of item: ";
    cin>>itemID[counter];
    cout<<"Enter the price of item: ";
    cin>>itemPrice[counter];
    counter++;      //after one item is added for a particular object of class shop, counter is incremented to store next object of that object in array properly
}
void Shop::displayItem(){
    for(int i=0;i<counter;i++){
        cout<<"the price of item with id "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main(){
    Shop kiranShop; //creating an object of class shop named kiranShop
    kiranShop.initCounter();//since a new object of class shop is created, we must initialize the counter to zero
    //suppose there are 4 items in kiranShop, so we store their details in array
    kiranShop.setItem();
    kiranShop.setItem();
    kiranShop.setItem();
    kiranShop.setItem();
    kiranShop.displayItem();        //to display items available in kiranShop
    return 0;
}