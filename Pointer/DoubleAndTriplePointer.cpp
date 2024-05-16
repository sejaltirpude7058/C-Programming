/*
Double and Triple pointer
We know that pointer is used to store the memory address of other variables
so when we define a pointer the , the first pointer is used to store the address
of the variable and the double pointer is used to store the address of 1st 
pointer and the triple ppointer is used to store the address of the double pointer.
*/

//example
#include<iostream>
using namespace std;
int main(){
    int x = 3; // variable
    int *ptr = &x; // pointer
    int **pptr = &ptr; //double pointer
    int ***ppptr = &pptr; //Triple pointer

    //To Fetch the value of variable through pointers 
    cout<<x<<endl;
    cout<<*ptr<<endl;
    cout<<**pptr<<endl;
    cout<<***ppptr<<endl<<endl;

    //To fetch the address of variable
    cout<<&x<<endl;
    cout<<ptr<<endl;
    cout<<*pptr<<endl;
    cout<<**ppptr<<endl;

     //To know the address stored in pointers and their actual address using &
    cout<<&ptr<<" "<<pptr<<endl;
    cout<<&pptr<<" "<<ppptr<<endl;
}