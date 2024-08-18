// Program to swap two values
#include<iostream>
using namespace std;
class c2;
class c1{
    int val1;
        friend void swap(c1 &, c2 &);
    public:
        void intdata(int a){
            val1 = a;
        }
        void display(void){
            cout<<val1<<endl;
        }
};
class c2{
    int val2;
        friend void swap(c1 &, c2 &);
    public:
        void intdata(int a){
            val2 = a;
        }
        void display(void){
            cout<<val2<<endl;
        }
};
void swap(c1 &a1, c2 &a2){
    int temp = a1.val1;
    a1.val1 = a2.val2;
    a2.val2 = temp;
}

int main(){
    c1 o1;
    o1.intdata(3);
    o1.display();

    c2 o2;
    o2.intdata(5);
    o2.display();

    swap(o1, o2);
    cout<<"The value of c1 after swap becomes: "<<endl;
    o1.display();
    cout<<"The value of c1 after swap becomes: "<<endl;
    o2.display();

    
    return 0;
}