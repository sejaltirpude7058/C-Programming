// Find the unique number in a given array where all the elements
//  are being repeated twice with one value being unique

#include <iostream>
using namespace std;
int FindUnique(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            return a[i];
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 2, 1, 5, 3, 2};
    int n = sizeof(arr) / sizeof(int);
    cout << FindUnique(arr, n);
}