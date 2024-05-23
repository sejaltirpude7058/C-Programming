/*
MultiDimensional Array
A multidimensional array is is array which has more than one dimension. 
it is an homogenious collection of items where each elementbis accesd using multple indices

//declaration
dataType arrayName[size1][size2]...[sizen];

2D Array
2D array in C++ ais a collection of elements organised in rows and columns 
the elements of the 2d array are accesd using two indices

*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of Rows: ";
    cin>>n;
    int m; 
    cout<<"Enter number of columns: ";
    cin>>m;
    int arr[n][m];
    cout<<"Enter all the elements: ";

    //Taking input from user
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
   //Print all the elements
    for(int i= 0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}





