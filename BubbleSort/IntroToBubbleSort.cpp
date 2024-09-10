#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of an array: ";
    cin>>n;
     
     int a[n];
     cout<<"Enter Elements in array: ";
     for(int i=0; i<n; i++){
     cin>>a[i];
     }

     for(int i=0; i<n-1; i++){
        bool flag = true;
        for(int j=0; j<n-1-i; j++){
          if(a[j]>a[j+1]){
            swap(a[j], a[j+1]);
            flag = false;
          }
        }
        if(flag==true) break;
     }

      for(int i=0; i<n; i++){
      cout<<a[i]<<" ";
      }
}