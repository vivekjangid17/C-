#include<iostream>
using namespace std;

// // *************** Call by value ***************

// void swap(int a, int b);  // formal parameters are a and b

// int main(){
//     int x = 4, y = 3;
//     cout<<"The value of x and y before swap is "<<x<<" and "<<y<<endl;
//     swap(x, y);   // will not swap by call by value because the copies are passed to the swap function from manin function
//     here x and y are actual parameters
//     cout<<"The value of x and y after swap is "<<x<<" and "<<y<<endl;
//     return 0;
// }

// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;

//******************* Call by reference ******************


// void swapReference(int *a, int *b);

// int main(){
//     int x = 4, y = 3;
//     cout<<"The value of x and y before swap is "<<x<<" and "<<y<<endl;
//     swapReference(&x, &y);    // will swap by call by reference because the address is passed to the swapReference function from manin function
//     cout<<"The value of x and y after swap is "<<x<<" and "<<y<<endl;
//     return 0;
// }

// void swapReference(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;

// }

// **************** Reference Variable ***************


// void swapReferenceVar(int &a, int &b);

// int main(){
//     int x = 4, y = 3;
//     cout<<"The value of x and y before swap is "<<x<<" and "<<y<<endl;
//     swapReferenceVar(x, y);    
//     cout<<"The value of x and y after swap is "<<x<<" and "<<y<<endl;
//     return 0;
// }

// void swapReferenceVar(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// ******************* Return by reference *******************

int & swapReferenceVar(int &a, int &b);

int main(){
    int x = 4, y = 3;
    cout<<"The value of x and y before swap is "<<x<<" and "<<y<<endl;
    swapReferenceVar(x, y) = 56;    // will change the value of a from 3 to 56
    cout<<"The value of x and y after swap is "<<x<<" and "<<y<<endl;
    return 0;
}

int & swapReferenceVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}