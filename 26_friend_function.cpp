/* Properties of friend function
1. Not in the scope of the class
2. Since it is not in the scope of the class, it cannot be called from object of that class, c1.sumData() is invalid
3.Can be invoked without the help of any object
4. Usually contains the object as argument
5. Can be declared inside public or private section of the class
6. It cannot accesse the members directly by their names and need object_name.member_name to access any member.
*/

#include<iostream>
using namespace std;
// Compiler is like Police

class vivek{
    int a,b;
    public:
    friend vivek sumData(vivek o1, vivek o2); 
    void setData(int v1, int v2){
        a = v1;
        b = v2;
    }
    void printData(){
        cout<<"The commlex number is "<<a<<" + "<<b<<"i"<<endl;
    }

        // a=o1.a+o2.a;
        // b=o1.b+o2.b;
};
// vivek :: sumData(vivek o1, vivek o2){  esa kyu nhi.....????
// bhai scope resolution operator tab use me lete hai jab function class ka ho means member function ho.
    vivek sumData (vivek o1, vivek o2){
        vivek o3;
        // cout<<a;   *** "invalid" ***
        o3.setData((o1.a+o2.a),(o1.b+o2.b));
        return o3;
    }
int main(){
vivek  c1,c2,sum;
    c1.setData(2,3);
    c1.printData();

    c2.setData(3,4);
    c2.printData();

    sum=sumData(c1,c2);
    sum.printData();
    // sum.sumData(c1,c2);   // it will give an error as 'class vivek' has no member named 'sumData'
    return 0;
}