// Find the maximum value(element) out of all elements present in any array

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter all the elements in an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i]) max = arr[i];
    }

    cout << "The greatest Element in an array is: " << max;
}