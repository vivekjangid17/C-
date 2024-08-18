
// KISI BHI CLASS KA OBJECT SIRF OR SIRF USKE PUBLIC SECTION KO HI ACCESS KAR SAKTA HAI

#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    // Constructor
    complex(void){    // This is default constructor as it accepts no parameter
        a=7;
        b=4;
        cout<<"Vivek"<<endl;
    }
    void printdata(void){
         cout<<"The comlex number is "<<a<<" + "<<b<<"i"<<endl;

    }
};

int main(){
    complex c1;
    c1.printdata();
    return 0;
}

/* 
1. Constructor is a special member function with the same name as of the class.
2. It is used to initialize the objects of its class.
3. It should be declared in the public section of the class.
4. They are automatically invoked whenever the object is created.
5. They cannot return values and do not have return types.
6. It can have default arguments.
7. We cannot refer to their address.
8. Constructors cannot be Virtual.
        Types of Constructors
        1. Default Constructors
        2. Parameterized Constructors
        3. Copy Constructors
*/

