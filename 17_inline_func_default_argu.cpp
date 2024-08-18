#include<iostream>
using namespace std;

inline int product(int a, int b){
    // static variable (not recommended while using inline functions)
    // static int c=0;    // this executes only once
    // c = c + 1;
    return a*b;
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
   
     
    return 0;
}