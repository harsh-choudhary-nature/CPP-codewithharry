#include<iostream>
#include<cstring>
using namespace std;
//virtual functions
class CWH{
    protected:
        string title; 
        float rating;
    public:
        CWH(string s, float r){
            title=s;
            rating=r;
        }
        virtual void display(){cout<<"Base class"<<endl;}
};
class CWHVideo: public CWH{
    float length;
    public:
        CWHVideo(string s, float r, float l):CWH(s,r){
            length=l;
        }
        void display(){
            cout<<"The title of this video is "<<title<<endl;
            cout<<"The rating of this video is "<<rating<<endl;
            cout<<"The length of this video is "<<length<<endl;
        }
};
class CWHText: public CWH{
    int words;
    public:
        CWHText(string s, float r, int w):CWH(s,r){
            words=w;
        }
        void display(){
            cout<<"The title of this text is "<<title<<endl;
            cout<<"The rating of this text is "<<rating<<endl;
            cout<<"The length of this text is "<<words<<endl;
        }
};

class CWHTutorials: public CWH{
    int words;
    public:
        CWHTutorials(string s, float r, int w):CWH(s,r){
            words=w;
        }
        void display1(){
            cout<<"The title of this text is "<<title<<endl;
            cout<<"The rating of this text is "<<rating<<endl;
            cout<<"The length of this text is "<<words<<endl;
        }
};
int main(){
    CWHVideo djvideo("Django video",4.8,54);
    CWHText djtext("Django Text",4.89,546);
    CWH* ptr[2];
    ptr[0]=&djvideo;
    ptr[1]=&djtext;
    ptr[0]->display();
    ptr[1]->display();
    //extra
    CWH* ptr1=new CWHTutorials("Django Tutorials",4.50,458);
    ptr1->display();        //if no class with name display() in derieved class, then despite virtual keyword, base class's display() will run
    return 0;
}