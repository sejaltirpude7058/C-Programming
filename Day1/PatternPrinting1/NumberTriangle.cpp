/*

Numner Triangle
1
1 2
1 2 3

*/

#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter number of rows ";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}