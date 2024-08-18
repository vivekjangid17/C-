#include<iostream>
using namespace std;

class Base {
    int a,b;
    public:
        // Base(int a, int b){
        //     this->a = a;
        //     this->b = b;
        //     display();
        // }
        void static setData(int x, int y){
            a = x;
            b = y;
            display();
        }
            void display(){
                cout<<"The value of a and b is: "<<a<<" and "<<b<<endl;
            }

};

int main(){
    // Base b1();
    // Base b2;
    Base::setData(1,4);
    return 0;
}