#include<iostream>

using namespace std;
int c = 45;
int main(){
    // **********Built in data types**********
    int a=4,b=6,c;
    c = a+b;

    cout<<"The value of a + b is:"<<c<<endl;
    cout<<"The global is:"<<c<<endl; // will print 10
    cout<<"The global is:"<<::c<<endl;  // will print 45 because of scope resolution operator(::)

 // ********** Float, double and long double literals **********
 
 // decimal values will be considered as double in c++ by default.

    // float d = 34.4;
    // long double e = 34.4;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;    
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;    
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;    
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;    
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;    

    //****************** Reference variable *****************

    // float x=455.5;
    // float &y = x;
    // cout<<x<<endl;   // print 455.5
    // cout<<y<<endl;   // print 455.5

    // cout<<"The size of 455.5 is "<<sizeof(x); // it will give the size of x is 4

    // ********** Typecasting **********
    
    // int a=3;
    // float b=45.5;
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of a is "<<(float)a<<endl;
    // cout<<"The value of a is "<<float(a)<<endl;
    // cout<<"The value of b is "<<b<<endl;
    // cout<<"The value of a is "<<int(a)<<endl;
    // cout<<"The value of a is "<<(int)a<<endl;
    
    return 0;
}