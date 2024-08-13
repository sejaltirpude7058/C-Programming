#include<iostream>
#include<cmath>
using namespace std; 
bool IsPrime(int n){
    if(n==1) return false; //Not prime or composite
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0){
            return false; //Not Prime
        }
    }
    return true; //Prime
}

int main(){
    int n; 
    cout<<"Enter number: ";
    cin>>n;
    cout<<IsPrime(n);
}