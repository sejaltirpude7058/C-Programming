//input a string of size n, and update all even values in the string to 'a' 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of an string ";
    cin>>n;
    char ch[n];
    for(int i=0; i<n; i++){
        cin>>ch[i];
    }

    for(int i=0; i<n; i++){
        if(i%2==0){
            ch[i] = 'a';
        }
    }

    cout<<ch;
}