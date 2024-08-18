#include<iostream>
using namespace std;

// Classes and Objects

class Employee {

    private: 
        int a,b,c;

    public:
        int d,e;

    void setData(int a1, int b1, int c1);   // function declaration
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }

};
void Employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;

}

int main(){
    Employee vivek;
    // vivek.a = 23;  // will give error as a is privete
    vivek.d = 34;
    vivek.e = 23;
    vivek.setData(1,2,3);
    vivek.getData();

    return 0;
}