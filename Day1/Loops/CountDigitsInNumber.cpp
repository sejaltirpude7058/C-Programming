// Write a program to count the digits in a given number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int count = 0; // to store count of digits
    int a = n;
    while(n>0){
        n = n/10; // to remove last digit
        count++;
    }
    if(a==0) cout<<1;
    else cout<<"Their are "<<count<< " Digits in given number.";

}