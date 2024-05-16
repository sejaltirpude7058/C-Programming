//Calculate the products of all elements in an array

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(int);
    int product = 1; 
    for(int i=0; i<size; i++){
        product *=arr[i];
    }
    cout<<"The product of all elements is "<<product;
}