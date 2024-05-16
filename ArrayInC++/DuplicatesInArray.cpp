//Given an array predict if the array contains duplicates or not
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 3, 5, 6, 8};
    int size = sizeof(arr)/sizeof(int);
    bool flag = false; //No duplicate 
    for(int i=0; i<size; i++){
      for(int j = i+1; j<size; j++){
         if(arr[i]==arr[j]){
            flag = true;
            break;
         }
      }
    }
    if(flag==true) cout<<"Duplicate Exists!";
    else cout<<"No duplicate!";
}