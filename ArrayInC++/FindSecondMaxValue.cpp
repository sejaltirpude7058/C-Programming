//Find the second max and second min  element out of all the elements in an array
#include<iostream>
#include<climits>
using namespace std; 
int main(){
    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array: ";
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }

     int max = INT_MIN;
     int smax = INT_MIN;
      for(int i = 0; i<n; i++){
        if(max<arr[i]) max = arr[i];
      }
      for(int i = 0; i<n; i++){
        if(arr[i]!=max && smax<arr[i]) smax = arr[i];
      }

      cout<<"The second maximum number is: "<<smax;

    
}