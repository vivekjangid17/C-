#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
        void setID(){
            salary = 120;
            cout<<"Enter the id of employee "<<endl;
            cin>>id;
        }
        void getID(){
            cout<<"The id of this employee is "<<id<<endl;
        }
};


int main(){
    // Employee lavish, veeru, jatin;
    // lavish.setID();
    // lavish.getID();
    Employee company[4];
    for(int i=0;i<4;i++){
        company[i].setID();
        company[i].getID();
    }

    return 0;
}