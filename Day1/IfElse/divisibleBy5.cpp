// Take positive integer input and tell if it is divisible by 5 or not
#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    if(n%5==0){
        cout<<"The number is divisible by 5";
    }else {
        cout<<"The number is not divisible by 5";
    }
}
