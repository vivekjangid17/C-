#include<iostream>
using namespace std;
class Point{
    int x;
    int y;
    // friend int distance(Point o1, Point o2);
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }
        void displayPoint(){
            cout<<"The Point is ("<<x<<","<<y<<")"<<endl; 
        }
        // int distance(Point o1, Point o2){
        //     return ((o2.x-o1.x), (o2.y-o1.y));    
        //     }
};
int main(){
    Point p(1,1);
    p.displayPoint();

    Point q(2,3);
    q.displayPoint();

    // distance(p,q);
    
    return 0;
}