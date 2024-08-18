#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age:" << endl;
    cin >> age;
    // if(age<=18){
    //     cout<<"You cann't vote"<<endl;
    // }
    // else{
    //     cout<<"You can vote"<<endl;
    // }

    // Switch case statement

    switch (age)
    {
    case 18:
        cout << "YOU are 18"<<endl;
        break;
    case 19:
        cout << "YOU are 19"<<endl;
        break;
    case 20:
        cout << "YOU are 20"<<endl;
        break;
    case 56:
        cout << "YOU are 56"<<endl;
        break;

    default:
        cout << "no special cases"<<endl;
        break;
    }
    cout<<"Done with switch case"<<endl;
    

    return 0;
}
