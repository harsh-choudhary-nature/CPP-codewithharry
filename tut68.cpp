#include<iostream>
using namespace std;
template<class T>
class Harry{
    public:
        T data;
        Harry(T a){
            data=a;
        }
        void display();
};
//scope resolution for a member function of a template class
//note that template statement may use T instead if T here, but it must match with next line angle brackets <> after class name
template<class T1>
void Harry<T1>::display(){
    cout<<data<<endl;
}
//template function overloading
void func(int a){
    cout<<"Called func()"<<a<<endl;
}
template<class T>
void func(T a){     //since same name, so function overloaded
    cout<<"called template func()"<<a<<endl;
}
int main(){
    Harry<int> h(25);
    cout<<h.data<<endl; //as data is public so directly accessible
    h.display();
    func(26);       //int-->exact match gets highest priority, so simple func() called even though template func() is equal competitor
    func("heloo");  //here template func() called
    return 0;
}