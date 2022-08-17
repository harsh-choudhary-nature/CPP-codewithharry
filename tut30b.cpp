#include<iostream>
#include<cmath> //for sqrt() function
using namespace std;
class Point{
    int x; int y;
    public:
        Point(int a, int b){
            x=a; y=b;
        }
        void display(){
            cout<<"The point is ("<<x<<","<<y<<")\n";
        }
        friend double distance(Point,Point);
};
double distance(Point p, Point q){
    return sqrt((((p.x)-(q.x))*((p.x)-(q.x)))+(((p.y)-(q.y))*((p.y)-(q.y))));
}
int main(){
    Point p1=Point(2,3);
    p1.display();
    Point p2=Point(5,7);
    p2.display();
    cout<<"The distance between ";
    p1.display();
    cout<<"and";
    p2.display();
    cout<<"is "<<distance(p1,p2);
    return 0;
}