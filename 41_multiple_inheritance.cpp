/*
Syntax for inheriting in multiple inheritance
class DerivedC: visibility-mode base1, visibility-mode base2
{
    clss body of class "DerivedC"
};

*/

#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of Base1 is " << base1int << endl;
        cout << "The value of Base2 is " << base2int << endl;
        cout << "The sum of Base1int and Base2int is " << base1int + base2int << endl;
    }
};

int main()
{
    Derived vivek;
    vivek.set_base1int(40);
    vivek.set_base2int(50);
    vivek.show();

    return 0;
}