//Write a program to find the largest three elements in an array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,2,5,8,5,13,6,9};
    int size = sizeof(arr)/sizeof(int);
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    for(int i=0; i<size; i++){
        if(max1<arr[i]){
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if(max2<arr[i]){
            max3 = max2;
            max2 = arr[i];
        }
        else if(max3<arr[i]){
            max3 = arr[i];
        }
    }
    cout<<max1<<" "<<max2<<" "<<max3;
}