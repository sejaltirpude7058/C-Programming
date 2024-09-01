//Q1. Input a string and concatenate with its reverse string and print it.

//Program
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s1;
    cout<<"Enter string: ";
    getline(cin, s1);

    string s2  = s1;
    reverse(s2.begin(), s2.end());

    s1+=s2;
    cout<<s1;
}