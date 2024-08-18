// Base class pointer can points to the derived class object
#include<iostream>
using namespace std;

class Base {
    public:
        int a_base;
        void display(){
            cout<<"The value of a_base is: "<<a_base<<endl;
        }
};
class Derived : public Base {
    public:
        int a_derived;
        void display(){
            cout<<"The value of a_base is: "<<a_base<<endl;
            cout<<"The value of a_derived is: "<<a_derived<<endl;
        }
};

int main(){
    Base *ptr_base;
    Base obj_base;
    Derived *ptr_derived;
    Derived obj_derived;
    ptr_base = &obj_derived;  // Pointing base class pointer to derived class

    ptr_base->a_base = 23;
    // ptr_base->a_derived = 23;  Will throw an error because object bhale hi object derived class ka ho lekin point base class ko hi kar raha hai, we cannot access the derived class members and member functions.
    ptr_base->display();

    ptr_base->a_base = 2300;
    ptr_base->display();

    ptr_derived = &obj_derived;
    ptr_derived->a_derived = 56;
    ptr_derived->display();
    

    
    
    return 0;
}