//Take positive integer input and tell if it is a three digit number or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<n<<" is 3 digit number";
    }else{
        cout<<n<<" is not 3 digit number";
    }
}