//Find th doublet in the array whose sum is equal to given value x;
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std; 
int main(){
    vector<int> v = {1,3,2,4,3,4,1,6};
    int n = v.size();
     int x;
     cout<<"Enter target: ";
     cin>>x; 

    for(int i =0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((v[i]+v[j])==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }

}