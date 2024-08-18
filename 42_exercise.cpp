#include <iostream>
using namespace std;

class SimpleCalculator
{
protected:
    int a;
    int b;

public:
    void cal(int x, int y)
    {
        a = x;
        b = y;
    }
    void sum(void)
    {

        cout << "The sum is " << a + b << endl;
        cout << "The sub is " << a - b << endl;
        cout << "The mul is " << a * b << endl;
        cout << "The div is " << a / b << endl;
    }
};

// class ScientificCalculator{
//     int c,d;
//     public:
//         void setData(int a, int b){
//             a = c;
//             b = d;
//         }
//         void cal2()
// };

class hybrid : protected SimpleCalculator
{
public:
    void setData(int c, int d)
    {
        cal(a, b);
    }
    void dis(void)
    {
        sum();
    }
};

int main()
{
    // SimpleCalculator viv;
    // viv.cal(2,3);
    hybrid viv;
    viv.setData(4, 2);
    viv.dis();
    return 0;
}