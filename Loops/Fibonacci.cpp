// Print the fibonacci number of nth term
// 1 1 2 3 5 8 13 .....
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int a = 1, b = 1, sum; // a->1st term, b-> 2nd term
    for (int i = 1; i <= n - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    cout << "The " << n << " fibonacci number is " << b;
}