//Write a program to find the smallest missing element in an
// given sorted array that only contains positive numbers
#include<iostream>
using namespace std; 
int main(){
int arr[] = {1,2,3,4,5,7};
int n = sizeof(arr)/sizeof(arr[0]);
bool flag = false; //Missing smallest element
int x=1;
for(int i=0; i<n; i++){
    if(arr[i]<=0) continue;
    if(arr[i]!=x){
        cout<<x;
        flag = true;
        break;
    } else x++;
}
if(flag==false) cout<<"No missing elements";
}


