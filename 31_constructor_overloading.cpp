#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
        complex(){
            a=0;
            b=0;
        }
        complex(int x,int y){
            a=x;
            b=y;
        }
        complex(int c){
            a=c;
            b=0;
        }
        void displayPoint(){
            cout<<"The Point is ("<<a<<","<<b<<")"<<endl; 
        }
};
int main(){
    complex d;
    d.displayPoint();

    complex e(2,3);
    e.displayPoint();

    complex f(4);
    f.displayPoint();

    return 0;
}