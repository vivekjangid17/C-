#include<iostream>
using namespace std;

class base {
    public:
    int a,b;
        int x,y;
        void setData(int c,int d){
            c=a;
            b=d;
        }
        void printData1(void){
            cout<<a<<" and "<<b<<endl;
        }
};
class child : private base
{
    public:
    void setData(int a1, int b1)
    {
        a= a1;
        b = b1;
    }
    void printData(void){
        printData1();
        cout<<"The value of a and b is : "<<a<<", "<<b<<endl;
    }
};
int main(){
    child c;
    c.setData(3,4);
    c.printData();
    return 0;
}