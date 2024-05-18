//Check whether array is sorted or not
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    bool flag = true; // means sorted
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            cout<<"Not Sorted";
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<"Array is Sorted!";
    
}