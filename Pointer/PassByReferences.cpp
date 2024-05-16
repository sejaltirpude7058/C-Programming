//swap function (pass by refrence) using alias

#include<iostream>
using namespace std;
void swap(int &a,int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}

int main(){
    int a;
    cout<<"Enter 1st value: ";
    cin>>a;
    int b;
    cout<<"Enter 2nd value: ";
    cin>>b;
    cout<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<a<<" "<<b;
}