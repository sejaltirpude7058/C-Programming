//Q4: Write a C++ program to find the largest element of a given 2D array of integers.

#include<iostream>
#include<cmath>
using namespace std;
 int main(){
    int matrix[6][5];

    cout<<"Enter "<<6*5<<" elements: ";
     
     for(int i=0; i<6; i++){
        for(int j=0; j<5; j++){
            cin>>matrix[i][j];
        }
     }

     int max = INT8_MIN;

     for(int i=0; i<6; i++){
        for(int j=0; j<5; j++){
            if(max<matrix[i][j]){
                max = matrix[i][j];
            }
        }
     }

     cout<<max<<endl;


 } 