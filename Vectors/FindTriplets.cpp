// Find The triplest whose sum is equal to the given value x
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the Size of vector: ";
    cin >> n;
    cout << "Enter thre Elements: ";
    for (int i = 0; i < n; i++)
    {
        int r;
        cin >> r;
        v.push_back(r);
    }
    int x;
    cout << "Enter Target: ";
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if ((v[i] + v[j] + v[k]) == x)
                {
                    cout << "(" << i << "," << j << "," << k << ")" << endl;
                }
            }
        }
    }
}