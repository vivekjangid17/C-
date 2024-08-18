#include<iostream>
using namespace std;

int main(){
    int a=5;
    int *b;
    b=&a;
    // int *b = &a;
    // * is called value at address operator
    // Pointers are the variables which stores the memory address of another variable
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of a is "<<*b<<endl;
    cout<<"The value at address b is "<<*b<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;

    // pointers to pointers OR double pointers:- the variables which stores the address of another pointer variable

    int **c = &b;
    cout<<b<<endl; 
    cout<<&b<<endl;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;


    
    return 0;
}