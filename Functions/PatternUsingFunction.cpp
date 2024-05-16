//take a, b, c as input and print the following pattern
#include<iostream>
using namespace std;
void myFunction(int x){
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";

        }
        cout<<endl;
    }
}

int main(){
    int a, b, c;
    cout<<"Enter all three values: ";
    cin>>a>>b>>c;
    myFunction(a);
    myFunction(b);
    myFunction(c);
}