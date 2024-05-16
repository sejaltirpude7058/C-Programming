// Find x element in an array. Take array and x as an input
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in an array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x;
    cout << "Enter value of x: ";
    cin >> x;

    bool flag = false; // absent
    for (int i = 0; i < n; i++)
    {
        if (x == arr[i])
        {
            flag = true; // present
            break;
        }
    }
    if (flag == true)
        cout << x << " is present in an array";
    else
        cout << "Not found";
}