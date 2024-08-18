#include<iostream>
using namespace std;
class complex;
class calculator{
    public:
    int add(int a, int b){
        return a+b;
    }
    int sumReal(complex, complex );
};
class complex{
    int a,b;
    friend int calculator::sumReal(complex o1,complex o2);
    public:
        void setNumber(int a1, int b1){
            a = a1;
            b = b1;
        }
};
int calculator::sumReal(complex o1, complex o2){
        return (o1.a+o2.a);
    }
int main(){
    complex o1,o2;
    o1.setNumber(2,4);
    o2.setNumber(1,3);
    calculator calc;
    int result = calc.sumReal(o1,o2);
    cout<<"The sum of real part is "<<result<<endl;
    
    return 0;
}