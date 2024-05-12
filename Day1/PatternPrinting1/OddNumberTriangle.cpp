/*

Odd Number Triangle
1
1 3
1 3 5
1 3 5 7

*/
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter number: ";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
                cout << a << " ";
                a += 2;
            
        }
        cout << endl;
    }
}