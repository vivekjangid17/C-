#include<iostream>
using namespace std;

class base {

    int a;
    public:
    void print(int a){
        cout<<"the value of a is"<<a;
    }
        base(int a){
        cout<<"the value of a is"<<a;
        }
};
int main(){
    base b1(2);
    b1.print(7);

}