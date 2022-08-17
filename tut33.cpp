#include<iostream>
using namespace std;
//compound interest
class BankDeposit{
    int principal;
    int years;
    float rate;
    float amount;
    public:
        BankDeposit(){} //needed for statement commented "refer"
        BankDeposit(int , int , float );    //rate of interest passed as float ex:0.04
        BankDeposit(int,int,int);   //rate of interest passed as percentage ex:4% so 4 is an integer
        void show(){
            cout<<"Your final amount is "<<amount<<endl;
        }
};
BankDeposit::BankDeposit(int p, int y, float r){
    principal=p;
    years=y;
    rate=r;
    amount=principal;
    for(int i=0;i<years;i++){
        amount=amount+amount*rate;
    }
}
BankDeposit::BankDeposit(int p, int y, int r){
    principal=p;
    years=y;
    rate=float(r)/100;          //made rate in float again
    amount=principal;
    for(int i=0;i<years;i++){
        amount=amount+amount*rate;
    }
}
int main(){
    BankDeposit bd1,bd2;        //"refer"
    int p,y,R;
    float r;
    cout<<"Enter p,y,r,R";
    cin>>p>>y>>r>>R;
    bd1=BankDeposit(p,y,r);
    bd1.show();
    bd2=BankDeposit(p,y,R);
    bd2.show();
    return 0;
}