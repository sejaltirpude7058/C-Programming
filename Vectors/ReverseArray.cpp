/*
Write a program to reverse the array and reverse the part of an array
without using any extra array
*/

#include <iostream>
#include <vector>
using namespace std;

// To Display the array
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

//To reverse whole array
void reverse(vector<int> &v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i <= j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

//To reverse some part of array
void ReversePart(int i, int j, vector<int> &v)
{
    while (i <= j)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    vector<int> v1;
    int n;
    cout << "Enter the size: ";
    cin >> n;

    cout << "Enter the Elements of vector: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    reverse(v1);
    display(v1);
    ReversePart(1, 5, v1);
    display(v1);
}