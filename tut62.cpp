#include<iostream>
#include<fstream>
#include<cstring>       //to use getline() function
using namespace std;
//<fileObject>.eof()===>no argument and <fileObject>.open()===>takes argument as file name functions
int main(){
    ofstream fhOut; //default constructor is in use here
    fhOut.open("sample62.txt");
    fhOut<<"Hello Everyone!\n";
    fhOut<<"I am Harsh Choudhary.\n";
    fhOut<<"This is a sample file created for testing.";
    fhOut.close();
    ifstream fhIn;
    fhIn.open("sample62.txt");
    string st1;
    while(fhIn.eof()==0){
        getline(fhIn,st1);
        cout<<st1;
        cout<<"\n";     //getline() terminates on encountering a \n, so \n is not a part of st1
    }
    return 0;
}