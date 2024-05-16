//Print the factorial of n number using function
#include<iostream>
using namespace std;
int factorial(int n){
    int product =1;
    for(int i=1; i<=n; i++){
        product *= i;
    }
    return product;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"The factorial of "<<i <<" is: "<<factorial(i)<<endl;
    }
}