/*

The pointer however is the variable that stores the memory address of variable 
Syntax
data_Type *pointer_name = &variable_name;
*/

//example 
#include<iostream>
using namespace std;
int main(){
    int num1 = 345;
    int *ptr = &num1;
    cout<<&num1<<endl; //we can say that we have stored the address of num1 variable inside the ptr pointer
    cout<<ptr;
}

/*
Derefrencing Operator
We can also use the pointer to get the value of the variable
 by using * operator (The defrefrencing operator) . 
 And we can also update the value of variable using pointer
*/

//example 
// #include<iostream>
// using namespace std; 
// int main(){
//      float f = 4.8;
//      float *ptr = &f;
//      cout<<*ptr<<endl;
//      *ptr = 10.4;
//      cout<<f;  
// }

