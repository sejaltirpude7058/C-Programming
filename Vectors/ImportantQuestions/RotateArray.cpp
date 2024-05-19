// Rotate  the given array by k steps, where k is non-negative
// Note : k can be greater than n as well where n is the size of array

//Algorithm to slve question
/*
Step 1: 1st we will reverse n-k-1
suppose {1,2,3,4,5} this is an array and k = 2 then first we will reverse n-k 
like this -> {3,2,1,4,5}
step 2: then will reverse k
like this ->{3,2,1,5,4}
Step 3: then will reverse the whole array
like this ->{4,5,1,2,3}
we can observe that our array has been rotated by 2

*/

#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

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
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = v.size();
    int k;
    cout << "Enter How many elements you want to rotate: ";
    cin >> k;
    if(k>n) k = k%n;

    display(v);

    ReversePart(0, n - 1 - k, v);
    ReversePart(n - k, n - 1, v);
    ReversePart(0, n - 1, v);
    
    display(v);

}
