#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Function using 2 arguments"<<endl;
    return a + b;
}

int sum(int a, int b, int c){
    cout<<"Function using 3 arguments"<<endl;
    return a + b + c;
}

int main(){
    cout<<"The sum of 1 and 7 is "<<sum(1,7)<<endl;
    cout<<"The sum of 1,2 and 7 is "<<sum(1,7,2)<<endl;
    
    return 0;
}