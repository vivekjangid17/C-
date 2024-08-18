#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    int a,b;
    public:
        void getDataSimple(){
            cout<<"Enter the value of a: "<<endl;
            cin>>a;
            cout<<"Enter the value of b: "<<endl;
            cin>>b;
        }

        void calSimple(){
            cout<<"The value of a + b is: "<<a + b<<endl;
            cout<<"The value of a - b is: "<<a - b<<endl;
            cout<<"The value of a * b is: "<<a * b<<endl;
            cout<<"The value of a / b is: "<<a / b<<endl;
        }
};

class ScientificCalculator{
        int a,b;
    public:
        void getDataScientific(){
            cout<<"Enter the value of a: "<<endl;
            cin>>a;
            cout<<"Enter the value of b: "<<endl;
            cin>>b;
        }

        void calScientific(){
            cout<<"The value of sin(a) is: "<<sin(a)<<endl;
            cout<<"The value of cos(a) is: "<<cos(a)<<endl;
            cout<<"The value of tan(a) is: "<<tan(a)<<endl;
            cout<<"The value of exp(a) is: "<<exp(a)<<endl;
        }

};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{

};

int main(){
    HybridCalculator calc;
    calc.getDataSimple();
    calc.calSimple();
    calc.getDataScientific();
    calc.calScientific();
    return 0;
}