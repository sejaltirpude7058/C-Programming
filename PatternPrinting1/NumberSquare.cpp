/*

Number Square
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

*/

#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter number of Rows and columns: ";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}