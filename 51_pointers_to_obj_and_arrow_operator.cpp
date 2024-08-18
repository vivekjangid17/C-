#include<iostream>
using namespace std;

class complex {
    int real, imaginary;
    public:
        void getData(void){
            cout<<"The real part is "<<real<<endl;
            cout<<"The real imaginary is "<<imaginary<<endl;
        }
        void setData(int a, int b) {
            real = a;
            imaginary = b;
        }
};

int main(){
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;
    // (*ptr).setData(3,6);   is exactly same as 
    ptr->setData(3,6); 
    (*ptr).getData();
    // c1.setData(3,6);
    // c1.getData();

    complex *ptr1 = new complex[4];
    ptr1->setData(1,4); 
    (*ptr1).getData();
    return 0;
}