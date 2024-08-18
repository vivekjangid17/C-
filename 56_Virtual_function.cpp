#include<iostream>
using namespace std;

class Base {
    public:
        int a_base=18;
        virtual void display(){
            cout<<"1 The value of a_base is: "<<a_base<<endl;
        }
};
class Derived : public Base {
    public:
        int a_derived;
        void display(){
            cout<<"2 The value of a_base is: "<<a_base<<endl;
            cout<<"2 The value of a_derived is: "<<a_derived<<endl;
        } 
};
int main(){
    Base *ptr_base;
    Base obj_base;
    Derived *ptr_derived;
    Derived obj_derived;
    ptr_base = &obj_derived;
    ptr_base->display();
    return 0;
}