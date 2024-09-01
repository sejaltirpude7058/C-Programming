//Given a string consisting of lowercase english alphabet. Print most occuring alphabet

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    // string s = "sejalTirpude";
    // int n = s.length();
    // int max = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = s[i];
    //     int count = 1;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (s[i] == s[j])
    //         {
    //             count++;
    //         }
    //     }
    //     if (max < count) max = count;
    // }

    // cout << max << endl;

    string s = "leetcode";
    vector<int> arr(26, 0);

    int n = s.length();

    for(int i =0; i<n; i++){
        char ch = s[i];
        int ascii = (int)ch;

        arr[ascii-97]++;
    }
    int max = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>max) max = arr[i];

    }

     for(int i=0; i<arr.size(); i++){
        if(arr[i]==max){
            int ascii = i+97;
            char ch = (char)ascii;
            cout<<ch<<" "<<max;
        }
        
    }





}


