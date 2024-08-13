//Rotate the matrix in 90 degree
/*
1 2 3    7 4 1
4 5 6 -> 8 5 2 
7 8 9    9 6 3
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows and columns: ";
    cin>>n;
    int rotate[n][n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
      for(int j=0; j<n; j++){
        cin>>rotate[i][j];
      }
    }

    //1st will convert in transpose
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int temp = rotate[i][j];
            rotate[i][j] = rotate[j][i];
            rotate[j][i] = temp;
        }
    }
    //Reverseing the elements
    for(int k=0; k<n; k++){
        int i=0; 
        int j=n-1;
        while(i<=j){ //swap k,i and k,j
            int temp = rotate[k][i];
            rotate[k][i] = rotate[k][j];
            rotate[k][j] = temp;
            i++;
            j--;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<rotate[i][j]<<" ";
        }
        cout<<endl;
    }
}