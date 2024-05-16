//Take integer input and check whether given number is Odd or Even
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    if(num%2==0){
        cout<<"Given number is Even! ";
    }else{
        cout<<"Given number is Odd! ";
    }
}