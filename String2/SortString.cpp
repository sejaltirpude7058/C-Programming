#include<iostream>
#include<string>
#include<algorithm>
using namespace std; 
int main(){
 string s;
 cout<<"Enter string: ";
 getline(cin, s);

 //sort function in string sorts lexographically according to ascii values of character
 sort(s.begin(), s.end());
 cout<<s; 
 //input ->Sejal Tirpude
 //output -> STadeeijlpru //space has smaller ascii value thats why it came first and ascii values of 
 //uppercase letters is smaller than lowercase
}