#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    // Constructor
    complex(int x, int y){    // This is parameterized constructor as it accepts parameters as int x and int y
        a=x;
        b=y;
        // cout<<"Vivek"<<endl;
    }
    void printdata(void){
         cout<<"The comlex number is "<<a<<" + "<<b<<"i"<<endl;

    }
};

int main(){
    // Implicit call
    complex c(3, 4);
    c.printdata();

    // Explicit call
    complex b = complex(5, 7);
    b.printdata();
    return 0;
}