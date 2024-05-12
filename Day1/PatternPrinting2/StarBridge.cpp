/*                       //Hint
                         1) firstly print the first row as it is
Star Bridge              2) second break the pattern
* * * * * * * * *       * * *  +  _      +  * * *
* * *       * * *       * *      _ _ _      * *
* *           * *       *        _ _ _ _ _  *
*               *

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of Lines: ";
    cin >> n;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        cout << "*";
    }
    cout << endl;
    int nsp = 1;
    int nst = n - 1;
    for (int i = 1; i <= nst; i++)
    {
        for (int j = 1; j <= nst + 1 - i; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << " ";
        }
        nsp += 2;
        for (int j = 1; j <= nst + 1 - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}