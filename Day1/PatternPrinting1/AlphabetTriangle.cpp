/*

Alphabet Triangle
a
a b
a b c

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
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(j + 96) << " ";
        }
        cout << endl;
    }
}