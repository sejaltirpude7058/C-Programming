//Sort Arrays of zeros and ones
/*
Algorithm
Step 1: firstly we will count the number of 0s and number of 1s.
Step 2: then we will run the loop till i(index) < numberOfZeros and fill 0
else 1 in arr[i]

*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
 vector<int> v = {1,1,0,1,0,0,1,0};
 int n = v.size();
 int NumOfZeros = 0;
 int NumOfOnes = 0;

 for(int i =0 ; i<n; i++){
    if(v[i]==0) NumOfZeros++;
    else NumOfOnes++;
 }

 for(int i=0; i<n; i++){
    if(i<NumOfZeros) v[i] = 0;
    else v[i] = 1;
 }

 display(v);


}
