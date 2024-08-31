/*
Q1: Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.

*/

#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter roews and columns :";
cin>>n;

int matrix[n][n];

// for(int i=0; i<n; i++){
//     for(int j=0 ;j<n; j++){
//         matrix[i][j] = 10;
//     }
// }

// for(int i=0; i<n; i++){
//     for(int j=0 ;j<n; j++){
//         cout<<matrix[i][j]<<" ";
//     }
//     cout<<endl;
// }


//Write a program to add two matrices and save the result in one of the given matrices.

cout<<"Enter Elements of matrix 1: "<<endl;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>matrix[i][j];
    }
  }

  int matrix2[n][n];
  cout<<"Enter Elements of matrix 2: "<<endl;
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>matrix2[i][j];
    }
  }

  int sum =0; 
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        matrix2[i][j] += matrix[i][j];
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<matrix2[i][j]<<" ";
    }
    cout<<endl;
  }





}











