// Find the minimum value(element) out of all elements present in  array.
#include <climits>
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {43, 23, 12, 6, 10, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])  min = arr[i];
    }
    cout << "The minimum value present in an array is: " << min;
}