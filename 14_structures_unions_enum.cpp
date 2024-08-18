#include<iostream>
using namespace std;
// typedef struct employee
// {
//     int eID;
//     float salary;
//     char favChar;
// }ep;

// union money
// {
//     int rice;
//     char car;

// };

int main(){
    enum Day{monday,tuesday,wednesday};

    // here Day became a data type

    Day d1 = monday; 
    cout<<monday<<endl;   // output is 0
    cout<<tuesday<<endl;    // output is 1
    cout<<wednesday<<endl;   // output is 2
    cout<<d1<<endl;      // output is 0

    // union money m1;
    //  m1.rice=34;
    // cout<<m1.rice<<endl;

    // ep vivek;
    // vivek.eID = 2270028;
    // vivek.salary = 15000000;
    // vivek.favChar = 'v';
    // cout<<vivek.eID<<endl;
    // cout<<vivek.salary<<endl;
    // cout<<vivek.favChar<<endl;
    return 0;
}