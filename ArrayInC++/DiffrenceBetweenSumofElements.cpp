// find the diffrenece between the sum of elements
//  at even indices and sum of elements at odd indices

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Size of an array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the number of elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int SumOfEven = 0, SumOfOdd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            SumOfEven += arr[i];
        }
        else
        {
            SumOfOdd += arr[i];
        }
    }
    int Diffrence = abs(SumOfEven - SumOfOdd);
    cout << Diffrence;
}