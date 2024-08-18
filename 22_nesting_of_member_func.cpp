/*
C++ initially called C with calsses by stroustroup
Classes --> extension of structures (in c)
structures has limitations
    - members are public
    - No methods
Classes --> structures + more
Classes --> can have methods and properties
Classes --> can make few members as privete and few as public
structures in C++ are typedefed ---> means there is no need to use typedef in structures
you can declar objects along with class declaretion like this:
    class Employee{
        // Class definition
    } vivek, bholi, raju;
vivek.salary = 800000; makes no sense if salary is privete
*/

#include <iostream>
#include <string>

using namespace std;

class binary
{
    // private:       // by default calss ke members private hota hai
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display();
};
void binary ::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary number" << endl;
            exit(0);
        }
    }
}

void binary ::ones_complement(){
    chk_bin(); // nesting of member functions
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display()
{
    cout << "Displaying binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}


int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_complement();
    b.display();

    return 0;
}