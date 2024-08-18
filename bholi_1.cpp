// #include<iostream>
// using namespace std;

// int insert(int arr[]){
//     int arr[5];
//     cout<<"Enter the elements of array"<<endl;
//     cin>>arr;
// }
// void display(void){
//     int arr[5];
//     int *p = arr;
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<endl;
//     }

// }

// int main(){
//     void insert();
//     cout<<"The elements of array are: "<<endl;
//     void display();
    
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[10];
//     cout<<"Enter the elements of array: "<<endl;
//     for(int i=0;i<10;i++){
//         if(arr[i]=='-1'){
//             exit(0);
//         }
//         else{
//             cin>>arr[i];
//         }
//     }

//     return 0;
// }

#include<iostream>
using namespace std;

// Function to insert elements into the array
int insert(int arr[], int size){
    cout<<"Enter "<<size<<" elements of array"<<endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    return size; // Return the number of elements inserted
}

// Function to display elements of the array
void display(int arr[], int size){
    cout<<"The elements of array are: "<<endl;
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    const int size = 5; // Size of the array
    int arr[size]; // Declare an array of size 5
    
    // Call insert function to input elements into the array
    int numElements = insert(arr, size);

    // Call display function to show the elements of the array
    display(arr, numElements);
    
    return 0;
}
