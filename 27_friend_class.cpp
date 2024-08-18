#include<iostream>
using namespace std;
class complex;
class Calculator{
    public:
        int add(int a, int b){
            return (a+b);
        }
       int sumRealComplex(complex , complex );
       int sumCompComplex(complex , complex );
}; 
class complex{
    int a, b;
    // Individually declaring functions as friends
    // friend int Calculator :: sumRealComplex(complex , complex );
    // friend int Calculator :: sumCompComplex(complex , complex );

    //Aliter: Declaring the entire calculator class as friend

    friend class Calculator;

    public:
        void setNumber(int n1, int n2){
            a = n1;
            b = n2;
        }
        void printNumber(){
            cout<<"The commlex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int Calculator::sumRealComplex(complex o1, complex o2){
            return (o1.a + o2.a);
        }
int Calculator::sumCompComplex(complex o1, complex o2){
            return (o1.b + o2.b);
        }
int main(){
    complex o1,o2;
    o1.setNumber(3,6);
    o2.setNumber(2,5);
    Calculator calc;
    int resultReal = calc.sumRealComplex(o1,o2); 
    cout<<"The sum of real part is "<<resultReal<<endl;
    int resultComp = calc.sumCompComplex(o1,o2); 
    cout<<"The sum of complex part is "<<resultComp<<endl;

    return 0;
}