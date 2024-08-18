// Derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc....
};

Note:
1. Default visibility mode is Private.
2. Private visibility mode: Public members of the base class becomes the private members of the derived class.
3. Public visibility mode: Public members of the base class becomes the public members of the derived class.
4. Private members are never inherited.
*/ 

#include <iostream>
using namespace std;    

// Base class
class employee
{
public:
    int id;
    float salary;
    // void getData(int a){
    //     id=a;
    // }
    // void printData(){
    //     cout<<"The value entered is "<<id<<endl;
    // }
    employee(int a)
    {
        id = a;
        salary = 25.0;
        // cout<<"The id is "<<id<<endl;
    }
    employee() {}
};


// Creating a Programmer class derived from employee Base class

class programmer : public employee
{
public:
int value;
    programmer(int b)
    {
    value = 9;
        id = b;
        //     // cout<<"The id is "<<id<<endl;
    }
    void getData(){
         cout<<id<<endl;
    }
};
int main()
{
    employee vivek(2), raju(7);
    cout << vivek.salary << endl;
    cout << raju.salary << endl;
    cout<<vivek.id<<endl;
    // vivek.getData(5);
    // vivek.printData();
    programmer pro(8);
    cout << "The id is " <<  pro.id << endl;
    cout << "The value is " << pro.value << endl;
    pro.getData();

    return 0;
}