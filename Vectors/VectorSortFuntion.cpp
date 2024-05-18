// sorting is a concept in which the elements of an array are rearranged in a logical order
// increasing or decreasing

// In c++ vector we have a sort function to sort the elements of an vector

#include <iostream>
#include <vector>
#include <algorithm>
// #include<string>
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
    vector<int> num;
    num.push_back(3);
    num.push_back(6);
    num.push_back(1);
    num.push_back(4);
    num.push_back(2);
    num.push_back(5);

    // before sorting
    display(num);

    sort(num.begin(), num.end());

    // After sorting
    display(num);
}

/*
//Passing Array to functions
When we pass array to functions we actually pass the address
of the array but in case of vector its totally different
Vectors are  passed by values, each time we pass the vector a new vector is created 
but using the & opreator can does the job

*/ 