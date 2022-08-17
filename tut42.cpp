#include<iostream>
#include<cmath>
using namespace std;
 //calculator
class SimpleCalculator{
int a,b;
    protected:
    void setData(){
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Enter the value of b: ";
        cin>>b;
    }
    void performOperations(){
        cout<<"The value of a+b is "<<a+b<<endl;
        cout<<"The value of a-b is "<<a-b<<endl;
        cout<<"The value of a*b is "<<a*b<<endl;
        cout<<"The value of a/b is "<<a/b<<endl;
    }
};
class ScientificCalculator{
    int a; 
    protected:
        void setData(){
            cout<<"Enter the value of a: ";
            cin>>a;
        }
        void performOperations(){
            cout<<"The value of sin(a) is "<<sin(a)<<endl;
            cout<<"The value of cos(a)  is "<< cos(a)<<endl;
            cout<<"The value of exp(a) is "<<exp(a)<<endl;
            cout<<"The value of log(a) is "<<log(a)<<endl;
        }
};
class HybridCalculator: public SimpleCalculator, public ScientificCalculator{
    //multiple inheritance and public mode
    //ambuigity resolution
    public:
        void setDataSimple(){
            SimpleCalculator::setData();
        }
        
        void performOperationsSimple(){
            SimpleCalculator::performOperations();
        }
            public:
        void setDataScientific(){
            ScientificCalculator::setData();
        }
        
        void performOperationsScientific(){
            ScientificCalculator::performOperations();
        }
};
int main(){
    HybridCalculator calc;
    calc.setDataSimple();
    calc.performOperationsSimple();
    calc.setDataScientific();
    calc.performOperationsScientific();   
    return 0;
}