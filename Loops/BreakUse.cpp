// Write a Program if the number is Prime or not
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    bool flag = true; // for prime
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            flag = false; // composite
            break;
        }
    }
    if (n == 1)
    {
        cout << "Nor composite neither prime.";
    }
    else if (flag == true)
    {
        cout << n << " is a prime number.";
    }
    else
    {
        cout << n << " is composite number.";
    }
}