// This is a keyword which is pointer points to the object which invokes the member function

#include<iostream>
using namespace std;

class A {
    int a;
    public:
        A& setData(int a){
        // void setData(int a){
            this->a = a;
            return *this;
        }
        void getData(){
            cout<<"The value of a is : "<<a<<endl;
        }
};
int main(){
    A a;
    a.setData(5).getData();
    // a.getData();

    return 0;
}