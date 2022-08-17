#include<iostream>
#include<cstring>
using namespace std;
//abdstract base class and pure virtual functions
class CWH{
    protected:
        string title; 
        float rating;
    public:
        CWH(string s, float r){
            title=s;
            rating=r;
        }
        virtual void display()=0;
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
    /* CWHTutorials djtutorials("Django Tutorials",4.50,458);*/ //raises error
    CWH* ptr[2];
    ptr[0]=&djvideo;
    ptr[1]=&djtext;
    ptr[0]->display();
    ptr[1]->display();
    /*CWH* ptr1=new CWHTutorials("Django Tutorials",4.50,458);*/
    //even if display() function is not even called for *ptr1, still error is raised as a function by same name display() does not exiists in derieved class CWHTutorials
    //but if no object of class CWHTutorials is created then raises no error;
    return 0;
}