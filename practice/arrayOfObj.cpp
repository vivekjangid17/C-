#include<iostream>
using namespace std;
class base {
    int a;
    public:
        void setData(int a){
            this->a = a;
        }
        void printData(void) {
            cout<<"The id is : "<<a<<endl;
        }
};
int main(){
    // base b[3];
    base *ptr = new base[3];
    int id;
    for(int i = 0;i<3;i++){
        cout<<"Enter the id: "<<endl;
        cin>>id;
        ptr->setData(id);
        // ptr->printData();
    }
    for(int j = 0;j<3;j++){
        cout<<"Item no: "<<j+1<<endl;
        ptr->printData();
    }
    return 0;
}