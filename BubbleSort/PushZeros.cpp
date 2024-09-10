#include<iostream>
#include<vector>
using namespace std; 
int main(){

    vector<int> v = {5,0,3,0,1,0,2,0};
    int n = v.size();

    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }

    //bubblesort
    for(int i=0; i<n-1; i++){
        // bool flag = true;
        for(int j=0; j<n-1-i; j++){
            if(v[j]==0){
               swap(v[j], v[j+1]);
            }
        }
        // if(flag==true) break;
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
}