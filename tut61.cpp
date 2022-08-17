#include<iostream>
#include<fstream>
using namespace std;
 
int main(){
    //write operation
    ofstream fileOut("sample61.txt");
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    fileOut<<name+" is my name.";        //string concatenation, operator overloading
    fileOut.close();
    ifstream fileIn("sample61.txt");
    string content;
    getline(fileIn,content);
    cout<<endl<<"The first line of file is: "<<content;
    fileIn.close();
    return 0;
}