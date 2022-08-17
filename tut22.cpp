#include <iostream>
#include <string> //include string library also
using namespace std;
class People
{
    // class definition
} harry; // automatically creates harry as an object of class people //no error
class binary
{
    //by default, all the members of class are private unless explicitlty made public 
    string s;
    void check_binary(); // checks if s is binary or not, defined later; its private and its call is nested into other functions definition
public:
    void read();         // reads a string into s, defined later
    
    void display();
    void complement();
};
void binary::read()
{
    cout << "Enter the sequence: ";
    cin >> s;
}
void binary::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((s.at(i) != '0') && (s.at(i) != '1'))       //s.at(i) gives char output, not string
        {
            cout << "Invalid binary format\n";
            exit(0); // or break, but this function is going to be in a nested function call, so exit(0) terminates the calling function also
        }
    }
    
}
void binary::display()
{ // to display our binary number
    check_binary() ;     //function call to nested function
    cout<<"displaying\n";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
void binary::complement()
{
    check_binary()  ;    //function call to nested function, and exits if invalid binary number
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
int main()
{
    binary b;
    b.read();
    
    b.display();
    b.complement();
    b.display();
    return 0;
}