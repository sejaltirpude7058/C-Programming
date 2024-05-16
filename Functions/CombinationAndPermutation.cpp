#include<iostream>
using namespace std; 
//  factorial of n, r, (n-r)
int fact(int x){
    int product = 1;
    for(int i=2; i<=x; i++){
        product *= i;
    }
    return product;
}

//To find combination using formula n!/ r!*(n-r!)
int combination(int n, int r){
    int ncr = fact(n)/ (fact(r) * fact(n-r));
    return ncr;
}

//To find permutation using formula n!/(n-r!)
int permutation(int n, int r){
    int npr = fact(n)/ fact(n-r);
    return npr;
}

int main(){
    int n;
    cout<<"Enter Super script: ";
    cin>>n;
    int r;
    cout<<"Enter Sub Script: ";
    cin>>r;
    int ncr = combination(n,r); // calling combination function
    int npr = permutation(n,r); // calling permutation function
    cout<<"The combnation of given numbers is: "<<ncr<<endl;
    cout<<"The permutation of given number is: "<<npr<<endl;

}