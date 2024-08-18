#include<iostream>
using namespace std;

//************** Factorial of a number *****************

int factorial(int n){
    if(n<=1){
        return 1;  // by definition
    }
    return n * factorial(n-1);

 // step by step calculation of factorial
 // factorial(4) = 4 * factorial(3);   
 // factorial(4) = 4 * 3 * factorial(2);   
 // factorial(4) = 4 * 3 * 2 * factorial(1);   
 // factorial(4) = 4 * 3 * 2 * 1;
 // factorial(4) = 24; 
}

//************ Fibonacci Series ************

int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main(){
    int a;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    // cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The  element at index "<<a<<" is "<<fib(a)<<endl;
    
    return 0;
}