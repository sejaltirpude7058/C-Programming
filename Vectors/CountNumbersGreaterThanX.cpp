// count the number of elements strictly greater than x
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the number of elements:";
    for (int i = 0; i < n; i++)
    {
        int r;
        cin >> r;
        v.push_back(r);
    }

    int x;
    cout << "Enter value of x: ";
    cin >> x;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] > x)
            count++;
    }

    cout << count++;
}