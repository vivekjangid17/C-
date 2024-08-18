#include<iostream>
using namespace std;
int glo = 60;    //global variable
void sum(){
int glo = 20;   // variable declared inside sum function
// cout<<glo<<"\n";
   

}

int main(){
    int glo = 4;  // variable declared inside main function
    glo = 78;       // variable declared inside main function
    bool bool1 = true;
    int _viv = 6;
    cout<<" Hello\n World! kya haal "<<endl<<" hai";
    cout<<" Hello\n World! kya haal\n hai\n";
    // sum();
    cout<<glo<<"\n";   //will print 78
    cout<<::glo<<"\n";  //will print 60
    cout<<bool1<<"\n";  //will print 1
    cout<<_viv;     // will print 6
    

}