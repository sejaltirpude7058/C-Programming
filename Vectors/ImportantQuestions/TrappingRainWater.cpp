/*
Trapping Rain Water

Problem Statement: We have two find total sum how much water can be trapped 
Algorithm 
Step 1: create Pervious Greatest element array with the help of given array
        we will do this with the help of max code
Step 2: create Next Greatest Element array that too with help of given array
Step 3: create the minimum array with help of prev and next array
Step 4: traverse through loop to calculate water 
if(height[i]<mini[i]){
    water = (mini[i]- height[i]);
}
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int trap(vector<int> &height){
    int n = height.size();
    //1st we will find Pervious greatest element
    int prev[n];
    prev[0] = -1;
    int max = height[0];
    for(int i=1; i<n; i++){
        prev[i] = max;
       if(max<height[i]){
        max = height[i];
       }
    }

    //Ab next greatest element
    int next[n];
    next[n-1] = -1;
    int max2 = height[n-1];
    for(int i=n-2; i>0; i--){
    next[i] = max2;
    if(max2<height[i]){
        max2 = height[i];
    }
    }

    //Minimum of prev and next
    int minimum[n];
    for(int i =0; i<n; i++){
        minimum[i] = min(prev[i], next[i]);
    }

    //Calculating water
    int water = 0;
    for(int i=0; i<n; i++){
        if(height[i]<minimum[i]){
            water += minimum[i]-height[i];
        }
    }
    return water;
}


int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<trap(height);
}

//more Optimised solution
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int trap(vector<int> &height){
//         int n = height.size();
//         //1st will find the prev greatest eleemnt
//         int pre[n];
//         pre[0] = -1;
//         int max1 = height[0];
//         for(int i=1; i<n; i++){
//           pre[i] = max1;
//           if(max1<height[i]){
//             max1 = height[i];
//           }
//         }

//         // for next previous greatest 
        
//         pre[n-1] = -1;
//          max1 = height[n-1];
//         for(int i=n-2; i>0; i--){
//          if(max1<pre[i]) pre[i] = max1;
//          if(max1<height[i]){
//             max1 = height[i];
//          }
//         }

//         int water = 0;
//         for(int i=1; i<n-1; i++){
//             if(height[i]<pre[i]){
//                 water += (pre[i]-height[i]);
//             }
//         }
//         return water;
//      }

// int main(){
//     vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
//     cout<<trap(height);
// }