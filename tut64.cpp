#include<iostream>
using namespace std;
//templates
//first create a vector class
template <class T>
class vector{
    public:
        T* arr;   //if we want to store array in a variable, we can only have a pointer that points to the first element in memory of the array
        int size;
        vector(int m){
            size=m;
            arr = new T[size];    
        }
        T dotProduct(vector &v1){
            if(v1.size==this->size){
                T d=0;
                for(int i=0;i<size;i++){
                    d+=this->arr[i]*v1.arr[i];
                }
                return d;
            }else{
                //dot product not possible
                return 0;
            }
            
        }
};
int main(){
    vector<int> vector1(3);
    vector1.arr[0]=1;
    vector1.arr[1]=2;
    vector1.arr[2]=3;
    vector<int> vector2(3);
    vector2.arr[0]=1;
    vector2.arr[1]=1;
    vector2.arr[2]=1;
    if(vector1.dotProduct(vector2)==0){
        cout<<"not valid";
    }else{
        cout<<vector1.dotProduct(vector2);
    }
    vector<float> vf1(2);
    vf1.arr[0]=1;
    vf1.arr[1]=1.2;
    cout<<endl<<vf1.dotProduct(vf1);
    
    return 0;
}