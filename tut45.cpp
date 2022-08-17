#include<iostream>
using namespace std;
//virtual base class to create hybrid classes
class Student{
    int RollNo;
    public:
        void setRollNo(int n){
            RollNo=n;
        }
        void getRollNo(){
            cout<<"Roll no. :"<<RollNo<<endl;
        }

};
class Test: virtual public Student{
    protected: 
        float maths,physics;
    public:
        void setMarks(float m,float p){
            maths=m;
            physics=p;
        }
        void getMarks(){
            cout<<"Maths :"<<maths<<endl;
            cout<<"Physics :"<<physics<<endl;
        }

};
class Sports: public virtual Student{   //public virtual or virtual public both are valid
    protected:
        int score;
    public:
        void setscore(int s){
            score=s;
        }
        void getscore(){
            cout<<"sports :"<<score<<endl;
        }

};
class Result: public Test, public Sports{
    public:
        void display(){
            total=maths+physics+score;
            getRollNo();
            getMarks();
            getscore();
            cout<<"The total marks obtained is "<<total;
        }
    private:
        float total;    
};
int main(){
    Result harry;
    harry.setRollNo(123456);
    harry.setMarks(75,85);
    harry.setscore(9);
    harry.display();   
    return 0;
}