/*

Print pascal Triangle
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1

*/
// hint = we can solve this using combination
#include <iostream>
using namespace std;
int fact(int x)
{
    int product = 1;
    for (int i = 2; i <= x; i++)
    {
        product *= i;
    }
    return product;
}

int combination(int i, int j)
{
    int icj = fact(i) / (fact(j) * fact(i - j));
    return icj; // every digit int triangle is the combination of iCj
}

int main()
{
    int n;
    cout << "Enter number of lines: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
}

// Pascal Triangle optimized program;
// nCr+1 = (n-r)/(r+1) nCr
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter Rows: ";
//     cin >> n;
//     for (int i = 0; i <= n; i++)
//     {
//         int current = 1;
//         for (int j = 1; j <= i; j++)
//         {
//             cout << current;
//             current *= (i - j) / (j + 1);
//         }
//         cout << endl;
//     }
// }
