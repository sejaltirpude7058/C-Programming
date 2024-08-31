/*
The to_string() method takes a single integer variable or other data type and converts into the string.

Convert numerical value to string Syntax :

string to_string (int val);
string to_string (long val);
string to_string (long long val);
string to_string (unsigned val);
string to_string (unsigned long val);
string to_string (unsigned long long val);
string to_string (float val);
string to_string (double val);
string to_string (long double val);

Parameters :
val - Numerical value.

Return Value :
A string object containing the representation of val as a sequence of characters
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int num = 234;
    string str = to_string(num); //converts integer to string


}