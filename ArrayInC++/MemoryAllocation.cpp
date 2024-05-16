//continuous memory allocation
/*
int myarr[5];
Suppose we have declared an array of name "myarr" which is of length 5
that means 5 containers are allocated continuously in the memory
since the array is of int data type each conatainer will be of 4 bytes

address hamesha first byte ka print hoga 

*/
#include<iostream>
using namespace std; 
int main(){
    int myarr[5];
     for(int i=0; i<=4; i++){
        cout<<&myarr[i]<<endl;
     }

     //address of myarr
     cout<<&myarr; // address of myarr will be equal to the address of 0th index of an array
}