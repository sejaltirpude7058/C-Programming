//Given an array predict if the array contains duplicates or not
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 7, 4, 3, 5, 6, 8, 4};
    int n = sizeof(arr)/sizeof(int);
//     bool flag = false; //No duplicate 
//     for(int i=0; i<size; i++){
//       for(int j = i+1; j<size; j++){
//          if(arr[i]==arr[j]){
//             flag = true;
//             break;
//          }
//       }
//     }
//     if(flag==true) cout<<"Duplicate Exists!";
//     else cout<<"No duplicate!";

// most efficient code which is time efficient and space efficient as well

//will use sum of natural number formulA
 
 int freq[10] = {0};
 for(int i=0; i<n; i++){
    if(freq[arr[i]] == 0){
        freq[arr[i]]++;
    }else{
        cout<<arr[i];
    }
 }


}

   




