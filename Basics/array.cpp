#include<iostream>
using namespace std;
/*

int main(){
    int arr[5];
    cout << "enter the elements in array\n";
    for(int i=0;i<5;i++){
        cin>> arr[i];
    }

    cout<<"Elements in array are: \n";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"  ";
    }

    cout<<"\n"<< sizeof(arr);
    cout<<"\n"<<sizeof(arr)/sizeof(arr[0]);
}
*/


/*Write a program that:
Takes n
Takes n numbers
Finds maximum element
Prints it*/

int main(){
    int n;
    cout<<"Enter the size of array: \n";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"The maximum number is: "<<max;
}