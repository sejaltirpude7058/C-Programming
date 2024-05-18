//Given an array of integer, change the value of all odd indexed elements to its second multiple
// and increment all the even indexed values by 10

#include<iostream>
using namespace std; 
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    
    for(int i=0; i<n; i++ ){
        if(i%2!=0){
            arr[i] *= 2;
        }
        else{
            arr[i] +=10;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}