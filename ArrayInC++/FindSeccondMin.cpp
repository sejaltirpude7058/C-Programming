// Find the second minimum value out of all the elements in an given array
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {4, 57, 7, 9, 5, 54, 10, 33};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = INT_MAX;
    int smin = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << min << endl;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != min && smin > arr[i])
            smin = arr[i];
    }
    cout << smin;
}