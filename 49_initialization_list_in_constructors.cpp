#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list): initialization-section
{
    constructor-body;
}

class Test
    int a;
    int b;
    public:
        Test(int i, int j): a(i), b(j){
            constructor-body;
        }
*/

class Test{
    int a;
    int b;
    public:
        // Test(int i, int j): a(i), b(j)
        // Test(int i, int j): a(i), b(i+j)
        // Test(int i, int j): a(i), b(2*j)
        // Test(int i, int j): a(i), b(a+j)
        // Test(int i, int j): b(j),a(i) --> RED Flag this will create problems because a will be initialized first
        Test(int i, int j)
        {
            a = i;
            b = j;
            cout<<"Constructor is executed"<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }
};
int main(){
    Test viv(2,3);
    return 0;
}