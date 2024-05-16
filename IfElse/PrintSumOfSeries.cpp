//Print  the sum of the series 1-2+3-4+5-6
// if n is even (1-2)+(3-4)+(5-6) = -n/2
//if n is odd (1-2)+(3-4)+(5-6)+7 = -n/2 + n
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int sum;
    if(n%2==0) sum = -n/2;
    else sum = -n/2 + n;
    cout<<sum;
}