// will use the formula
// divisor * quotient + remainder = dividend.
#include<iostream>
using namespace std;
int main(){
   //taking dividend and divisor both as input from user
   int a;
   cout<<"Enter dividend: ";
   cin>>a;
   int b;
   cout<<"Enter divisor: ";
   cin>>b;
   int q = a/b;
   int r = a - (b*q);
   cout<<r;
}

// with %  modulo operator:
// #include<iostream>
// using namespace std;
// int main(){
//    int dividend;
//    cout<<"Enter number1: ";
//    cin>>dividend;
//    int divisor;
//    cout<<"Enter number2: ";
//    cin>>divisor;
//    int remainder = dividend%divisor;
//    cout<<remainder;
// }
