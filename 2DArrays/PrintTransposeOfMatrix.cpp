//Write aprogram to print the transpose of given matrix enterd 
//by user and store it in a new matrix
 //          c1 c2 c3       transpose
//hint  r1 -> 1  2  3       1  4  7       transpose[r->i][c->j] == arr[j][i]
//      r2 -> 4  5  6       2  5  8
//      r3 -> 7  8  9       3  6  9

#include<iostream>
using namespace std; 
int main(){
    int m;
    cout<<"Enter number of Rows: ";
    cin>>m;
    int n; 
    cout<<"Enter number of columns: ";
    cin>>n;
    int arr[m][n];
    cout<<"Enter all elements: ";
    for(int i=0; i<m;i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //Transpose 
    int trans[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            trans[i][j] = arr[j][i];
        }
    }

       for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}