#include<iostream>
using namespace std;

int sum(int n){
    if(n==0)
        return n;
    else
        return n+sum(n-1);
}

int main(){
    // int sum = 0;
    int n;
    cout<<"Enter value of n: "<<endl;
    cin>>n;
    // for(int i=0;i<=n;i++){
    //     sum = sum + i;
    // }
    cout<<sum(n);
    
    
    return 0;
}