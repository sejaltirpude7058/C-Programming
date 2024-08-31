#include<iostream>
using namespace std;
int main(){
    // char str[] = {'a', 'b', 'c', 'd'};
    // cout<<str; 

    // char ch = '\';  //backslash as a character is not allowed;

    // char str[] = "abcde";
    // cout<<str; //abcde
    // cout<<str[2]; //c

    char ch = '\0';
   
// The '\0' character in C++ is known as the null character. It is a special character used to mark the end of a string in C++.

// Why is '\0' important?
// In C++, strings are typically arrays of characters. The '\0' character is used to indicate where the string ends. This is important because it tells functions that work with strings, like strlen() or cout, where to stop reading the characters.
// Example:
// Consider the following string:


// char str[] = "Hello";
// In memory, this string is stored as:


// 'H' 'e' 'l' 'l' 'o' '\0'
// The '\0' at the end of the string tells the program, "This is the end of the string." Without '\0', the program wouldn't know where the string ends, and it might keep reading garbage values in memory.
// Simple Analogy:
// Think of '\0' as a stop sign. When you're driving and see a stop sign, you know you need to stop. Similarly, when a function sees '\0', it knows it's time to stop reading the string.

//as now we know that '\0' is present at the end of our character array or string
char s[] = {'a','b','c','d','e','f','g','h'};
          //0   1    2   3   4   5   6   7 <--index

   for(int i=0; i<s[i]!='\0'; i++) { // jb tk \0 k equal nhi rheta tb tk code chlega
    //  cout<<s[i]<<" "; // a b c d e f g h
   } 
   
  // cout<<s; //abcdefgh //we can also print like this
   cout<<endl;
//if humne bichme \0 dal de 
char ch2[] = {'s','e','j','\0','a','l'};
//cout<<ch2; //sej
//print hoga kyuki ye dekhta h jb tk \0 nhi aata tb tk continue krta h or aagya to tbhi hi rok deta hai

//Updation
string st = "Sejal"; 
cout<<st<<endl; //Sejal
st[0] = 'T';
cout<<st;  //Tejal



}
