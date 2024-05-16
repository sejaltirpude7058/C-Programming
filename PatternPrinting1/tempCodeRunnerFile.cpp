#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter number: ";
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j = i; j++)
        {
            if (j % 2 != 0)
            {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}