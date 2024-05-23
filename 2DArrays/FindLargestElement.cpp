//Find the largest element  of a given 2D array of integers
//Take  2d array as input

#include<iostream>
#include<climits>
using namespace std;
 int main(){
    int m; 
    cout<<"Enter Rows: ";
    cin>>m; 
    int n; 
    cout<<"Enter Columns: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter Elements: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    int max = INT_MIN;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
    }

    cout<<max;

 }