//Calculate the sum of all the elements in an array
#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array: ";

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    cout<<sum;
}