/*

Solid square
* * * *
* * * *
* * * *
* * * *

*/

#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter number of lines and columns: ";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
