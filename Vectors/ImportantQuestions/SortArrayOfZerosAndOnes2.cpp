/*
Sort Arrays of zeros and ones.
algorithm:
Step1 : will take 2 pointers i and j  i hum i=0 se chalayenge or j = size-1 se chalayenge
check krenge v[i]==0 i++
ya v[j]==1 j--
Step 2: if(v[i]==1 && v[j]==0) to hum v[i] me 0 ko dalenge or v[j] = 1 ko dalenge
*/

#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

void SortZerosAndOnes(vector<int> &v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i <= j)
    {
        if (v[i] == 0) i++;

        if (v[j] == 1) j--;

        if (i > j) break;
        
        else if (v[i] == 1 && v[j] == 0)
        {
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}

int main()
{
    vector<int> v = {1, 0, 1, 0, 0, 1};
    int n = v.size();
    SortZerosAndOnes(v);
    display(v);
}