//Ternary Operator
/*
SYNTAX
variable = (condition): expression1 if true : expression2 if 1st expression is false.
*/

// ex: EvenOdd
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Number: ";
//     cin>>n;
//    (n%2==0)? cout<< "Even ":cout<<"Odd";
// }

/*Given the marks of the students the marks are greater than 35 print the result as pass other */
#include<iostream>
using namespace std; 
int main(){
    int marks;
    cout<<"Enter Marks of Student: ";
    cin>>marks;
    (marks>=35)? cout<<"Pass": cout<<"Fail";
}
