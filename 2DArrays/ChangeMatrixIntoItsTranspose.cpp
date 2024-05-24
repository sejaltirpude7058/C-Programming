/*
You are given a matrix of size nxn change this matrix into its transpose
*/

#include<iostream>
using namespace std; 
int main(){
    int trans[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
     for(int i=0; i<4; i++){
        for(int j=i+1; j<4; j++){
            int temp = trans[i][j];
            trans[i][j] = trans[j][i];
            trans[j][i] = temp;
        }     
     }

     for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
     }
}