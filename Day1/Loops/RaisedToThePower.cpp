// Two numbers are intpur from keyboard. Write a program to find
// the value of one number raised to the power of another.
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter base: ";
    cin >> a;
    int b;
    cout << "Enter Exponent: ";
    cin >> b;
    bool IsPostive = true; // b is positive
    if (b < 0)
    {
        IsPostive = false; // b is negative
        b = -b; 
    }
    float power = 1;
    for (int i = 1; i <= b; i++)
    {
        power *= a;
    }
    if (IsPostive == false)
    {
        power = 1 / power;
        b = -b;
    }
    if (a == 0 && b == 0)
    {
        cout << "Not Defined";
    }
    else
    {
        cout << a << " Raised to the power " << b << " is " << power;
    }
}