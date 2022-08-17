#include<iostream>
#include<vector>        //package to use vector template class
using namespace std;
//push_back() and size() methods
//pop_back() method
//insert()

//function to display elements of vector
template<class T>       //template function to display char or int or float or any other type of vectors
void display(vector<T> &v1){
    for(int i=0;i<v1.size();i++){       //<vectorObject>.size()==>returns number of elements in the vector object container
        cout<<v1[i]<<" ";            //v1.at(i) does same job as v1[i]
    }
    cout<<endl;
}
int main(){
    vector<int> vec1;   //creating a container(an object of vector template class to store data)    //zero length vector

    int element, size;
    cout<<"Enter size of your vector: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cout<<"Enter element "<<i+1;
        cin>>element;
        vec1.push_back(element);        //<vectorObject>.push_back(<elementName>)
    }
    display(vec1);
    cout<<"Now deleting the last element from our vector "<<endl;
    vec1.pop_back();        //<vectorObject>.pop_back()     ==>does not returns anything
    display(vec1);
    vector<int>::iterator iter=vec1.begin();    //defining an iterator for a container of vector template class
    vec1.insert(iter,56);   //<vectorObject>.insert(<iterator>,<element>)
    //element added one before the element to which iterator is pointing.
    display(vec1);
    //specifying a natural number after iterator species how many times the object is to be added to vector
    vec1.insert(iter+2,5,56);   //<vectorObject>.insert(<iterator>,<element>)
    display(vec1);
    vector<char> vec2(4);       //creating 4 sized vector but its empty
    cout<<"Displaying vec2\n";
    display(vec2);
    vector<int> vec4(6,3);      //creates 6 sized vector with all entries 6
    cout<<"Displaying vec4\n";
    display(vec4);
    vector<int> vec3(vec1);     //creating a vector from another vector; note that datatype of argument vector must be same as specifies in class argument
    cout<<"Displaying vec3\n";
    display(vec3);
    return 0;
}