//Write aprogram to print the transpose of given matrix enterd 
//by user and store it in a new matrix

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter numner of rows: ";
    cin>>m;
    int n; 
    cout<<"Enter the number of Coloumns: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter all the elements: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    
    int Transpose[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            Transpose[i][j] = arr[j][i];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<Transpose[i][j];
        }
        cout<<endl;
    }
}