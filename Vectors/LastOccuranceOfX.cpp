// Find the last occurance of x in an array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    cout << "Enter the elements of an vector: ";

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int x;
    cout << "Enter Target: "; //Taking input target element
    cin >> x;

    for (int i = v.size(); i >= 0; i--) // to find last occurance we are running reverse loop
    {
        if (v[i] == x)
        {
            cout << "The last occurance of " << x << " is in " << i << "th index.";
            break;
        }
    }
}
