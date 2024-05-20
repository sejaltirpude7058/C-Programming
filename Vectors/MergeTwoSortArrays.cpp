#include<iostream>
#include<vector>
using namespace std; 
void display(vector<int> &v){
    for(int i=0; i<v.size(); i++){
      cout<<v[i]<<" ";
    }
    cout<<endl;
}

vector<int> Merge(vector<int> &v1, vector<int> &v2){
    int n = v1.size();
    int m = v2.size();
    vector<int> res(m+n);

    int i=n-1;
    int j=m-1;
    int k = (m+n)-1;
    while(i>=0 && j>=0){
        if(v1[i]>v2[j]){
            res[k] = v1[i];
            i--;
        }else{
            res[k] = v2[j];
            j--;
        }
        k--;
    }

    if(i<0){
        while(j>=0){
            res[k] = v2[j];
            j--;
            k--;
        }
    }

    if(j<0){
        while(i>=0){
            res[k] = v1[i];
            i--; 
            k--;
        }
    }

    return res;
}



int main(){
    vector<int> v1 = {1,3,5,7,9,11};
    vector<int> v2 = {2,4,6,8,10,12,13};
    // int n = v1.size();
    // int m = v2.size();

    vector<int> resv = Merge(v1,v2);

    display(resv);
}