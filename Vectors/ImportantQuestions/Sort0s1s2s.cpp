//Sort 0s, 1s and 2s 
#include<iostream>
#include<vector>
using namespace std; 
void display(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> v = {0,1,2,0,2,2,1,0,0,1};
    int n = v.size();

    int low = 0;
    int mid = 0;
    int high = n-1;
    
    while(mid<=high){
        if(v[mid]==2){
            int temp = v[mid];
            v[mid] = v[high];
            v[high] = temp;
            high--;
            
        }
        else if(v[mid]==0){
            int temp = v[mid];
            v[mid] = v[low];
            v[low] = temp;
            mid++;
            low++;
        }
        else mid++;
    }

    display(v); 
}
   

    



