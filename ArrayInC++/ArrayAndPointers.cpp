//Array And Pointers
/*
Pointers can also store the address of cells of an array
example
int arr[5] = {1,2,3,4,5};
int *ptr = arr; // we don't need to use the & operator in terms of array of store the address of an array

*/

#include<iostream>
using namespace std; 
int main(){
    int arr[] = {1,2,3,4,5,6};
    int *ptr = arr;
    cout<<ptr<<endl;
    cout<<&arr[0]<<endl;
    cout<<ptr[0]<<endl;
// to print the whole array through pointer
    for(int i=0; i<=5; i++){
        cout<<ptr[i]<<" ";
    }
    cout<<endl;
    //updatation of elements in array through pointer
    ptr[4] = 10;

    int myarr[] = {12,13,14,15,11};
    int *ptrr = myarr;
    for(int i=0; i<=4; i++){
        cout<<*ptrr<<" ";
        ptrr++;
    }

    //Humne address ko aage bdya h to important h ki apne pointer me firse array ka address store kre
     ptrr  = myarr;


}