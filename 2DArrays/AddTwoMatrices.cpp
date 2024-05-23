//Write a program to add two matrices
#include<iostream>
using namespace std; 
int main(){
    int arr1[3][4] = {{1,2,3,4},{5,6,7,8},{1,2,3,4}};
    int brr1[3][4] = {{3,4,5,6},{1,2,3,4},{5,6,7,8}};
    int m = sizeof(arr1)/sizeof(int);
    int n = sizeof(brr1)/sizeof(int);
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            brr1[i][j] += arr1[i][j];
        }
    }

    for(int i=0; i<3; i++ ){
        for(int j=0; j<4; j++){
            cout<<brr1[i][j]<<" ";
        }
        cout<<endl;
    }
}