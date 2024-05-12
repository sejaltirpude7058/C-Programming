//write a program to print the reverse of given number 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int LastDigit = 0;
    int reverse = 0; // to store reverse of given number
    while(n!=0){
        int LastDigit = n%10; // to get last digit of given number
        reverse *= 10; // multiplying reverse by 10
        reverse += LastDigit; // then adding lastdigit in reverse
        n = n/10; // to remove last digit
    }
    cout<<"The reverse of given number is: "<<reverse;
}