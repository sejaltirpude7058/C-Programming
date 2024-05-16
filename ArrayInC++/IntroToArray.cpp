/*
Array in C++
Array are used to store the multiple value in a single variable, 
instead of declaring separate variable for each value.
Array is the collection of data of same datatype, stored in continuous memory location
indexing of an array starts from 0.

Syntax
data_type array_name[size_of_array]

example 
int MyArr[8] = {1,2,3,4,5,6,7,8};

Array is one of the data structure -> Storage to store data

*/

////Taking Input using loops in array and print all the elements of an array
#include<iostream>
using namespace std;
int main(){
    int arr[10];
    for(int i=0; i<=9; i++){
        cin>>arr[i];
    }

    for(int i=0; i<=9; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    arr[4] = 32; // updation of element using indices
     for(int i=0; i<=9; i++){
        cout<<arr[i]<<" ";
    }
}




