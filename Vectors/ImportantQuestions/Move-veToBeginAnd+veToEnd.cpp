// Move necgative to begining and positve to end 

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

int main()
{
    vector<int> v = {-1, 2, 4, -3, -5, 6};
    
    int n = v.size();

    int i = 0, j = n - 1;
    while (i <= j)
    {
        if (v[i] < 0) i++; // negative numbers

        if (v[j] > 0) j--; // positive numbers

        if (i > j) break;

        else if (v[i] > 0 && v[j] < 0)
        {
            //swap elements
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
    display(v);
}
