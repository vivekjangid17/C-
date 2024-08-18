#include <iostream>
using namespace std;

// static variables are also called calss variables in oops
// static variable ko saare objects share karte hai
// static variable by default 0 se initialize hota hai
// if we don't use static to har object ka apna alag count hoga

class Employee
{
    int id;
    static int count;
    // static int count = 1000;   // if we want to start indexing from 1000 then we can not assign 1000 to count it will give error

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
        // cout<<"The value of count is "<<count<<endl;  // we can use static function which can access static members only
    }

    // static function

    static void getCount(void)
    {
        // cout<<id<<endl;  // throws an error 
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of the calss Employee
int Employee :: count;

// int Employee :: count = 1000;   // it will not give any error

int main()
{
    Employee vivek, bholi, raju;
    // vivek.id = 1;
    // vivek.count = 0;  // cannot do this as id and count are private
    vivek.setData();
    vivek.getData();
    Employee::getCount();
    // vivek.getCount();

    bholi.setData();
    bholi.getData();
    Employee::getCount();
    // bholi.getCount();

    raju.setData();
    raju.getData();
    Employee::getCount();
    // raju.getCount();

    return 0;
}