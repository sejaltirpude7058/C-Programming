/*

Reversed Number Triangle
      1
    2 1
  3 2 1
4 3 2 1

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k;
        }
        cout << endl;
    }
}