#include<iostream>
using namespace std;

int main(){
    int marks[]={34,54,65,34,555};
    int mathsMarks[6];
    mathsMarks[0]=456;
    mathsMarks[1]=298;
    mathsMarks[2]=656;
    mathsMarks[3]=876;
    mathsMarks[4]=678;
    mathsMarks[5]=587;
    cout<<"The marks are:"<<endl<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl<<endl;
    cout<<"The mathsMarks are:"<<endl;
    // cout<<mathsMarks[0]<<endl;
    // cout<<mathsMarks[1]<<endl;
    // cout<<mathsMarks[2]<<endl;
    // cout<<mathsMarks[3]<<endl;
    // cout<<mathsMarks[4]<<endl;
    // cout<<mathsMarks[5]<<endl;

    //*********** Using for loop ***********

    // for (int i = 0; i < 6; i++)
    // {
    //     cout<<"The value of mathsMarks "<<i<<" is "<<mathsMarks[i]<<endl;
    // }

    //************ Using while loop **************

    // int i=0;
    // while(i<6){
    //    cout<<"The value of mathsMarks "<<i<<" is "<<mathsMarks[i]<<endl; 
    //    i++;
    // }
     
    //********** Using do while loop *************

    int i=0;
    do{
        cout<<"The value of mathsMarks at index "<<i<<" is "<<mathsMarks[i]<<endl;
        i++;
    }while(i<6);

    cout<<"****************************************"<<endl;

    int Marks[]={1,2,3,4,5};
    int *p=Marks;  // we dont use & here because here Marks points to the first block of the array == int *p = &Marks (This is not correct)
    cout<<"The value of *(p) is "<<*(p)<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
    cout<<"The value of *(p+4) is "<<*(p+4)<<endl;
    return 0;
}
