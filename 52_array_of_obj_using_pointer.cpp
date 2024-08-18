// Base class pointer can points to the derived class object
#include<iostream>
using namespace std;

class Base {
    public:
        int a;
        void display(){
            cout<<"The value of a is: "<<a<<endl;
        }
};
class Derived : public Base {


};

int main(){
    Base *ptr_base;
    Base obj_base;
    Derived *ptr_derived;
    Derived obj_derived;
    ptr_base = &obj_derived;
    
    return 0;
}