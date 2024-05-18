/*

Vectors in c++
Vectors are the dynamic type of arrays which has the ability to resize
itselfautomatically when we deleteor insert the elemnet with their storage
being handled automatically by containers
In c++ vectors are used to store the data of similar datatypes .
however unlike the arrays the size of the vecotrs can grow dynamically.
to use vector we need to add the header file
#include<vector>
*/

// Basic Vector Operations
//  1. Add Elements
// to add elements in the vector we use push_back()
//  it adds the element into the end of vector
// We can also use insert() and emplace() to add the elements to the vector

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the size of an vector: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    v.push_back(7);
    v.push_back(12);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // 2. Delete Elements -> to delete elements we can use pop_back() 
    //it deletes the elements at the end
    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // 3. size() -> it reurns the number of elements present in vector
    // 4. capacity -> checks overall size of function (capacity)
    // example
    vector<int> v2;   // size  Capacity
    v2.push_back(10); //  1       1
    v2.push_back(11); //  2       2
    v2.push_back(12); //  3       4
    v2.push_back(13); //  4       4
    v2.push_back(14); //  5       8
    v2.push_back(15); //  6       8
    v2.push_back(16); //  7       8
    v2.push_back(17); //  8       8
    v2.push_back(19); //  9       16

    cout << v2.size() << " " << v2.capacity();

    // 5. at() -> we can use at function to update the elements of the vector and
    // can also use to access the elements

    // 6. clear() -> clear() function is used to remove all the elements in vector
}
