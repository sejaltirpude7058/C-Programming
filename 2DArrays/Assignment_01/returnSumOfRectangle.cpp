// Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2).

/*

1 2 3 4
5 6 7 8
6 3 1 2

*/

#include<iostream>
using namespace std;




int main(){
    int rows;
    cout<<"Enter Number of rows: ";
    cin>>rows;

    int cols;
    cout<<"Enter Number of columns: ";
    cin>>cols;

    int matrix[rows][cols];

    cout<<"Enter "<<rows*cols<<" Elements "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>matrix[i][j];
        }
    }

    int l1, r1, l2, r2;
    
    cout<<"Enter co-ordinates l1 r1 and l2 r2 ";
    cin>>l1>>r1>>l2>>r2;

    int sumOfRectangle = 0;

    for(int i=l1; i<=l2; i++){
        for(int j=r1; j<=r2; j++){
           sumOfRectangle += matrix[i][j];
        }
    }
    cout<<endl;
    cout<<"The sum is "<<sumOfRectangle;
}