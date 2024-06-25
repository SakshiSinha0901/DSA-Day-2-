#include <iostream>
using namespace std;
int main(){
    // // int crr[] = {10,20,30,70};
    // int brr[4] = {0};

    // // cout<<crr[1]<<endl;
    // cout<<brr[4]<<endl;

    // int arr[3] = {10,20,30};
    // fill(arr,arr+4,23);
    // cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<endl;
    // return 0;

    int arr[5];
    for(int index=0;index <5; index++){
        cout<<"Enter value for box index:"<<index<<endl;
        cin>>arr[index];
    }
    
    for(int index=0;index <5; index++){
        cout<<arr[index]<<" "<<endl;
        
    }
    
}
#include <iostream>
using namespace std;

// Function to print array elements
void print(int arr[],int size){
    // Loop through the array and print each element
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[]= {10,20,30,40,50};// Initializing an array
    int size = 5;// Defining the size of the array
    print(arr,size);// Calling the print function to display array elements
}
