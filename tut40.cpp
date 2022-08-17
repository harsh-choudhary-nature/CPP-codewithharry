#include<iostream>
using namespace std;
//multilevel inheritance
class Student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};
void Student::set_roll_number(int r){
    roll_number=r;
}
void Student::get_roll_number(){
    cout<<"The roll number is "<<roll_number<<endl;
}
class Exams:public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float m,float p){
            maths=m;
            physics=p;
        }
        void get_marks(){
            cout<<"The marks in maths is "<<maths<<endl;
            cout<<"The marks in physics is "<<physics<<endl;
        }
};
class Result:public Exams{
    protected:
        float percentage;
    public:
        void calc_percent(){
            percentage=(maths+physics)/2;
        }
        void display_percent(){
            cout<<"The percentage is "<<percentage<<endl;
        }
};
int main(){
    Result harsh;
    harsh.set_roll_number(2103117);
    harsh.get_roll_number();
    harsh.set_marks(75,85.0);
    harsh.get_marks();
    harsh.calc_percent();
    harsh.display_percent();
    return 0;
}