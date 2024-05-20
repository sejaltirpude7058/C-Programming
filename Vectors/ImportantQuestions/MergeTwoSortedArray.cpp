//Merge Two Sorted Array
/*

*/
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
    
    int i = n-1;
    int j = m-1; 
    int k = (m+n)-1;
    while(i>=0 && j>=0){
        if(v1[i]>v2[j]){
            res[k] = v1[i];
            i--;
        }
        else{
            res[k] = v2[j];
            j--;
        }
        k--;
    }
    if(i<=0){
        while(j>=0){
            res[k] = v2[j];
            k--;
            j--;
        }
    }
    if(j<=0){
        while(i>=0){
            res[k] = v1[i];
            k--;
            i--;
        }
    }
    return res;
}

int main(){
   vector<int> v1;
   int n;
   cout<<"Enter the size of 1st vector: ";
   cin>>n;
   cout<<"Enter All the elements of Vector1: ";
   for(int i=0; i<n; i++){
    int x;
    cin>>x;
    v1.push_back(x);
   }

   display(v1);
   
   vector<int> v2;
   int m;
   cout<<"Enter the size of vector2: ";
   cin>>m;
   cout<<"Enter All the elements of Vector2: ";
   for(int i=0; i<m; i++){
    int x2;
    cin>>x2;
    v2.push_back(x2);
   }
   display(v2);

  vector<int> res = Merge(v1,v2);
  display (res);

   
}
                                                                                        