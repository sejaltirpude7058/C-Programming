// take input percentage of a student and print the grade acccording to marks
#include <iostream>
using namespace std;
int main()
{
    float StudentPercentage;
    cout << "Enter the Student's percentage: ";
    cin >> StudentPercentage;
    if (StudentPercentage >= 91 && StudentPercentage <= 100)
        cout << "Grade A+";
    else if (StudentPercentage >= 81 && StudentPercentage <= 90)
        cout << "Grade A";
    else if (StudentPercentage >= 71 && StudentPercentage <= 80)
        cout << "Grade B+";
    else if (StudentPercentage >= 61 && StudentPercentage <= 70)
        cout << "Grade B";
    else if (StudentPercentage >= 51 && StudentPercentage <= 60)
        cout << "Grade C+";
    else if (StudentPercentage >= 35 && StudentPercentage <= 50)
        cout << "Grade C";
    else if (StudentPercentage < 35)
        cout << "Fail";
    else
        cout << "Not Defined";
}