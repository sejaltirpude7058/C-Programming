#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter rows of matrix ";
    cin>>m;
    int n;
    cout<<"Enter cols of matrix ";
    cin>>n;

    int matrix[m][n];

    cout<<"Enter "<<m*n<<" Elements "<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
          cin>>matrix[i][j];
        }
    }
     //1 2 3 4 8 7 6 5 9 10 11 12 
    //  for(int i=0; i<m; i++){
    //   if(i%2==0){
    //     for(int j=0; j<n; j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //   }else{
    //     for(int j=n-1; j>=0; j--){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //   }
    // }


   //7 8 9 6 5 4 1 2 3
    // for(int i=m-1; i>=0; i--){
    //   if(i%2==0){
    //     for(int j=0; j<n; j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //   }else{
    //     for(int j=n-1; j>=0; j--){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //   }
    // }

    //1 4 7 8 5 2 3 6 9
    // Wave print the matrix
    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) { // Top to bottom for even columns
            for (int i = 0; i < m; i++) {
                cout << matrix[i][j] << " ";
            }
        } else { // Bottom to top for odd columns
            for (int i = m - 1; i >= 0; i--) {
                cout << matrix[i][j] << " ";
            }
        }
    }


}