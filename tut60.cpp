#include<iostream>
#include<cstring>       //to use string, BTW it can be used without this package also
#include<fstream>
using namespace std;
//File handling in c++
/*
#include<fstream>  ==> This package lets us use the following classes in our code to deal with files:-
1. fstreambase  --->base class
2. ifstream     --->i stands for input(read); it is a derieved class of fstreambase
2. ofstream     --->o stands for output(write); it is a derieved class of fstreambase
*/
/*
Primarily, there are two ways to open a file in c++,[for working with files, you must open it] 
1. using constructor 
2. using the member function open() of the class
*/
int main(){
    //starting file handling
    ifstream fh("sample60.txt");  //fh is an object of ifstream class that helps in file read operations
    //the constructor of ifstream class takes file name as the necessary argument
    string st;
    fh>>st;     //like cin>><variable>;
    cout<<st;   //the above method only reads contents of file until the first whitespace or newline
    fh>>st;
    cout<<st;   //next time it reads another word
    //two words are printed because of the two cout
    //we can use for loop to read all the words of file
    for(int i=0;i<10;i++){     //random upper limit chosen
        fh>>st;                 //once fh reads the last word, and still it is forced to read, it keeps reading the last word again and again
        cout<<st<<" ";
    }
    /*
    getline function--->takes two arguments:-
    1. file object 
    2. string in which to store the read data
    At a time it reads one line (until a \n is encountered). Next time it reads the next line
    */
    ifstream fh1("sample60.txt");
    string st1;
    getline(fh1,st1);
    cout<<endl<<st1;
    getline(fh1,st1);
    cout<<endl<<st1;
    //write operations
    ofstream fhwrite("sample60c.txt");      //if file not exists then this object  creation creates the file in current working directory
    string st2="This will be written on the file";
    fhwrite<<st2;               //like cout<<content;
    ofstream fhwrite2("sample60b.txt");     //this will overwrite the contents of file if file already exists
    fhwrite2<<st2;
    return 0;
}