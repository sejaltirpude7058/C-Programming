#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cout<<"Enter the Size of vector ";
    cin>>n;
    cout<<"Enter All the elements: ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    int low = 0;
    int mid = 0;
    int high =n-1;

    while(mid<=high){
        if(v[mid]==2){
            //mid or high k values ko swap krnege
            int temp = v[mid];
            v[mid] = v[high];
            v[high] = temp;
            high--;
        }
        else if(v[mid]==0){
            //low or mid ki values ko swap krenge
            int temp = v[mid];
            v[mid] = v[low];
            v[low] = temp;
            low++;
            mid++;
        }
        else if(v[mid]==1){
            mid++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<v.at(i)<<" ";
    }
   

}
