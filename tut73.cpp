#include<iostream>
#include<map>   //to use map template class
#include<string>    //to use string in our maps
using namespace std;

int main(){
    map<string, int> marksMap;  //creates a mapObject whose key is of string type and value is of integer type
    marksMap["harry"]=98;
    marksMap["potter"]=99;
    marksMap["voldy"]=95;       //syntax to add element to map
    marksMap.insert({{"ron",93},{"hermoine",100}});     //to insert element to map
    cout<<"The size of marksMap is"<<marksMap.size()<<endl;
    map<string,int>:: iterator iter;
    for(iter=marksMap.begin();iter!=marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl; //(*iter).first gives key and (*iter).second gives value
    }
    
    return 0;
}