// Check whether any array is palidrome or not

#include <iostream>
using namespace std;
void PalidromeOrNot(int arr[], int n)
{
    bool flag = true; // Yes Palidrome
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (arr[i] != arr[j])
        {
            flag = false; // Not Palidrome
            break;
        }
        i++;
        j--;
    }
    if (flag == true)
        cout << "The given Array is Palidrome!!";

    else
        cout << "Not Palidrome";
}

int main()
{
    int n;
    cout << "Enter the size of an Array: ";
    cin >> n;

    int arr[n];
    cout << "Enter The all The Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    PalidromeOrNot(arr, n);
}