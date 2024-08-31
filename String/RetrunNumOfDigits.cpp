#include<iostream>
#include<string>
using namespace std;
int main(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;

    string str = to_string(num);
    cout<<"The number of digits in given number is "<<str.length();
}