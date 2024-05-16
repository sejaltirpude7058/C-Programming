// Write a program to count the elements of an array which are greater than given x
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the value of x: ";
    cin >> x;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
            count++;
    }
    cout << count << " are greater then " << x;
}