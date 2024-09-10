/*
Given the length and breadth of a rectangle, write a program to find whether numerically the area of
the rectangle is greater than its perimeter.
Input 1: length = 5 breadth = 7

Output 1: Area is greater than perimeter.
*/

#include <iostream>
using namespace std;
int main()
{
    float length;
    cout << "Enter Length of rectangle: ";
    cin >> length;

    float breadth;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;

    float perimeter = 2 * (length + breadth);

    float area = length * breadth;

    if (area > perimeter)
    {
        cout << "Area is Greater than perimeter";
    }
    else
    {
        cout << "Perimter is greater than Area";
    }
}