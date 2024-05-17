//Pass Array to functions
/*
In C++, the whole array cannot be passed as an argument to a function.
However, you can pass a pointer to an array without an index by specifying the array’s name.

Arrays in C are always passed to the function as pointers pointing to
 the first element of the array.
*/
#include<iostream>
using namespace std;
void display(int arr[], int size){
    for(int i=0; i<=size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void change(int a[], int size){
    a[2] = 23;
}


int main(){
    int n; 
    cout<<"Enter the  size of and array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter all the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    display(arr, n);
    change(arr, n);
    display(arr, n);
    
 
}