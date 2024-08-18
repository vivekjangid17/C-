#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are You ?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaise ho aap ?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base1 :: greet();
    }
};

class B{
    public:
    // B(){
    //    say(); 
    // }
    void say(){
            cout<<"Hello World!"<<endl;
        }
        ~B(){
            cout<<"destructor without constructor"<<endl;
        }
};

class D : public B{
    int a;
    public: 
    D(){
      print();  
    }
    void print(void){
            say();
        }
};

int main()
{
    // Abmiguity 1
    //  Base1 base1obj;
    //  Base2 base2obj;
    //  base1obj.greet();
    //  base2obj.greet();

    // Derived d;
    // d.greet();

    B b;
    b.say();
    // D d;
    // d.print();

    return 0;
}