/*
Use of sizeof() operator
the sizeof operator that evaluate the size of data types
It is a compile time operator as it returns the size of
 any variable at the time of compilation.
 //the size, which is calculated by sizeof operator, is the amount of RAM(memory)
 occupied in computer
*/

#include <iostream>
using namespace std;
int main()
{
    cout << "size of int datatype " << sizeof(int) << endl;
    cout << "size of float datatype " << sizeof(float) << endl;
    cout << "size of char datatype " << sizeof(char) << endl;
    cout << "size of bool datatype " << sizeof(bool) << endl;
    cout << "size of double datatype " << sizeof(double) << endl;
    cout << "size of long long datatype " << sizeof(long long) << endl;
    // all in bytes
}
