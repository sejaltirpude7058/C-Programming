// Write a program to print the Sum of Digits of given number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int LastDigit = 0; 
    int sum = 0; // to store the sum of digits
    while(n!=0){
        LastDigit = n%10;
        sum += LastDigit; //To get last digit of number
        n /= 10; //to remove last digit from  given input number
    }
    cout<<"The sum of Digits of given number is "<<sum;
}