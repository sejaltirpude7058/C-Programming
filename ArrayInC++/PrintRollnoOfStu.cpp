/*
Given an array of marks of students if the marks of
 any student is less than 35 print its roll number
[roll number here refers to the index of array]
*/

#include <iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    int MarksOfStudents[n];
    cout << "Enter the marks of all students: ";
    for (int i = 0; i < n; i++)
    {
        cin >> MarksOfStudents[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (MarksOfStudents[i] < 35)
            cout << "Roll No : " << i << endl;
    }

    cout << "The above roll no. students has scored less then 35 marks";
}