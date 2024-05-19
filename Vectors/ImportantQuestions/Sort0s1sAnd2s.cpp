// Sort Zeros Ones And Twos given array
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

int main()
{
    vector<int> v = {1, 0, 2, 1, 0, 0, 2, 1, 2};
    int n = v.size();

    int NumOfZeros = 0, NumOfOnes = 0, NumOfTwos = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            NumOfZeros++;
        if (v[i] == 1)
            NumOfOnes++;
        if (v[i] == 2)
            NumOfTwos++;
    }

    for (int i = 0; i < n; i++)
    {
        if (i < NumOfZeros)
            v[i] = 0;
        else if (i < NumOfZeros + NumOfOnes)
            v[i] = 1;
        else
            v[i] = 2;
    }

    display(v);
}