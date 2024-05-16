// find the second largest element in the given array in one pass
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(int);
    int max1 = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max1 < arr[i])
        {
            max1 = arr[i];
            smax = max1;
        }
        else
        {
            smax = max(smax, arr[i]);
        }
    }
    if (smax == INT_MIN)
        cout << "Second Maximum number does not exist";
    else
        cout << smax;
}