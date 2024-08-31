/*
1 2 3 4   1 4 5 6
3 3 1 2   4 3 2 1
          7 5 4 2
          5 1 2 3

 */       

#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number of rows of 1st Matrix ";
    cin>>m;
    int n;
    cout<<"Enter number of columns of 2nd Matrix ";
    cin>>n;


    int p;
    cout<<"Enter number of rows 2nd Matrix ";
    cin>>p;
    int q;
    cout<<"Enter number of columns of 2nd Matrix ";
    cin>>q;

    if(n==p){
       int matrix[m][n];
       cout<<"Enter the Elements of 1st matrix ";
       for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
       }

       int matrix2[p][q];
       cout<<"Enter the Elements of 2nd matrix ";
       for(int i=0; i<p; i++){
        for(int j=0; j<q; j++){
            cin>>matrix[i][j];
        }
       }

       int res[m][q];
       for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            res[i][j] = 0;
            //res[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j] + a[i][2]*b[2][j] ....
            for(int k=0; k<p; k++){
                  res[i][j] += matrix[i][k]*matrix[k][j] ;
            }
          
        }
       }

        for(int i=0; i<m; i++){
        for(int j=0; j<q; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }


    }else{
        cout<<"Multiplication is not possible";
    }

   


}