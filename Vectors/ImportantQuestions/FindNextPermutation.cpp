/*
Find Next Permutation of array , if not Possible then print the sorted order in ascendibg order
Algorithm
Step1 : 1st will find the Pivot index also we will put condition that if already
        grestest permutation hai to pure array ko reverse krdo.
Step2 : 2nd will reverse the elements after the pivot index.
Step3 : 3rd step we will find the just greatest element after the Pivot 
        index and swap that just greater element with our pivot element.
        
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

void reverse(vector<int> &v,int i, int j){
    while(i<=j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
}

void FindNextPermutation(vector<int> &v){
   //Step 1: find pivot index
   int n = v.size();
   int pivotIndex = -1;
   for(int i=n-2; i>=0; i--){
    if(v[i]<v[i+1]){
        pivotIndex = i;
        break;
    }
   }
   //If already greatest permutation then reverse whole array
   if(pivotIndex==-1){
    reverse(v,0,n-1);
   }

   //step 2: pivot index k aage vale elements ko reverse kro
   reverse(v,(pivotIndex+1),n-1);

   //step 3: find just greater element then pivot
   int j = -1;
   for(int i=pivotIndex+1; i<n; i++){
    if(v[i]>v[pivotIndex]){
        j = i;
        break;
    }
   }

   //Swap PivotIndex and j
   int temp = v[pivotIndex];
   v[pivotIndex] = v[j];
   v[j] = temp;

}

int main(){
 vector<int> v;
 int n;
 cout<<"Enter the Size of an Array: ";
 cin>>n;
 cout<<"Enter All the Elements of an Array: ";
 for(int i=0; i<n; i++){
    int x;
    cin>>x;
    v.push_back(x);
 }

 display(v);
 FindNextPermutation(v);
 display(v);
}
