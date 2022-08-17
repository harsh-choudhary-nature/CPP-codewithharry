#include<iostream>
#include<list>      //to use template class list
using namespace std;
//list in STL
void display(list<int> &lst){    
    list<int>::iterator it;     //iterator it created but not initialized 
    for(it=lst.begin();it!=lst.end();it++){     //iterator is initialized, and for loop continue till it=lst.end() for the first time
        cout<<*it<<" ";     //*it gives value stored at the position in the list to which 'it' is pointing
    }
    cout<<endl;

}
int main(){
    list<int> list1;        //creates a zero length list
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(7);
    list1.push_back(8);
    display(list1);
    //deleting elements from list
    list1.pop_back();   //deletes last element of list
    display(list1);
    list1.pop_front();  //deletes element from front of the list
    display(list1);
    list1.push_back(3);
    display(list1);
    list1.remove(3);    //<listObject>.remove(<elementName>) removes all occurences of elementName from listObject
    display(list1);     //both the 3 removed
    //sorting the list
    list1.sort();
    display(list1);

    //creating another list
    list<int> list2(3);    //empty list of size 3
    list<int>::iterator iter;
    iter=list2.begin();
    *iter=100;      //change the value at the position in list to which iter is pointing
    iter++;
    *iter=200;
    iter++;
    *iter=300;
    iter++;
    display(list2);
    //reversing the list
    list2.reverse();
    display(list2);
    //merging list 1 and list 2 into list 1
    list1.merge(list2);
    cout<<"After merging, list 1 becomes: ";        //list2 remains same
    display(list1);
    return 0;
}