/*
If we are inheriting class B from class A and class C from class B:[ A--->B--->C ]
1. A is the base class for B and B is the base class for C.
2. A--->B--->C is called inheritance path.
*/

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_num(int);
    void get_roll_num(void);
    // Student(int a){
    //     roll_no = a;
    //     cout<<roll_no<<endl;
    // }
};
void Student::set_roll_num(int r)
{
    roll_no = r;
}
void Student::get_roll_num()
{
    cout << "The roll number is " << roll_no << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << "The marks of maths are: " << maths << endl;
    cout << "The marks of physics are: " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_num();
        get_marks();
        cout << "Your is percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result viv;
    viv.set_roll_num(2270028);
    viv.set_marks(98, 95);
    viv.display_result();

    return 0;
}