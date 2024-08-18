#include<iostream>
#include<iomanip>

using namespace std;
int main(){
// int a=4;
// cout<<"The value of a was "<<a<<endl;
// a=6;
// cout<<"The value of a is "<<a<<endl;

// constants in c++

// const int a=4;
// cout<<"The value of a was "<<a<<endl;
// a=5;     // will give error
// cout<<"The value of a is "<<a<<endl;

// Manipulators in c++
int a=4, b=56, c=6789;
cout<<"The value of a without setw is:"<<a<<endl;
cout<<"The value of b without setw is:"<<b<<endl;
cout<<"The value of c without setw is:"<<c<<endl;
cout<<"The value of a with setw is:"<<setw(4)<<a<<endl;
cout<<"The value of b with setw is:"<<setw(4)<<b<<endl;
cout<<"The value of c with setw is:"<<setw(4)<<c<<endl;

return 0;

}