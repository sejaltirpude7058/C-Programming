/*

Binary Triangle
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

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
            if ((i + j) % 2 == 0) cout << 1 << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}

//2nd approach
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter number of lines: ";
//     cin >> n;
//     int a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0) a = 1; // for odd row number
//         else a = 0; // for even row

//         for (int j = 1; j <= i; j++)
//         {
//             cout << a << " ";
            // flipping
//             if (a == 1) a = 0;
//             else a = 1;
//         }
//         cout << endl;
//     }
// }