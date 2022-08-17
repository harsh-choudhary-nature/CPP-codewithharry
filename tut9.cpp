#include<iostream>
using namespace std;

int main(){
    //if else ladder
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age<0){
        cout<<"Not yet born"<<endl;
    }else if(age<18){
        cout<<"Cant vote"<<endl;
    }else{
        cout<<"Can vote"<<endl;
    }
    //switch case
    char choice;
    cout<<"Would you go for movie?";
    cin>>choice;
    switch(choice){
        case 'Y':
            cout<<"OK youwill go for a movie";
            break;
        
        case 'N':
            cout<<"Ok we wont go for a movie";
            break;
        default:
            cout<<"Enter valid choice";

    }
    cout<<"\nOut of swith case";
    return 0;
}