// Swap values 
#include<iostream>
using namespace std; 
int main(){
    int a = 5, b = 10;
    //swapping using extra variable
    // int temp = a;
    // a = b;
    // b = temp;
    // cout<<a<<"  "<<b<<endl;
    //swapping without using extra variable
    a = a+b;
    b = a-b;
    a = a-b;
    cout<<a<<"  "<<b;
}