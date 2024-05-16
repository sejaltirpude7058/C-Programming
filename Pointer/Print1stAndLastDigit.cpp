// Write a program to print the first and the last digit og the given number
#include <iostream>
using namespace std;
void myFunction(int n, int &FirstDigit, int &LastDigit)
{
    LastDigit = n % 10;
    while (n > 9)
    {
        n = n / 10;
    }
    FirstDigit = n;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int FirstDigit;
    int LastDigit;
    myFunction(n, FirstDigit, LastDigit);
    cout << FirstDigit << " " << LastDigit;
}

// using Pointer
//  #include<iostream>
//  using namespace std;
//  void myFunction(int n, int *ptrFD, int *ptrLD){
//       *ptrLD = n%10;
//       while(n>9){
//          n = n/10;
//       }
//       *ptrFD = n;
//  }

// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int FirstDigit, LastDigit;
//     int *ptrFD = &FirstDigit;
//     int *ptrLD = &LastDigit;
//     myFunction(n, ptrFD,ptrLD);
//     cout<<FirstDigit<<"  "<<LastDigit;
// }
