#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str = "Hey i am a girl , i too do coding";
    stringstream ss(str);
    string temp;

    vector<string> v;

    while(ss>>temp){
        v.push_back(temp);
    }


    sort(v.begin(), v.end());

    int maxCount = 0;
    int count = 1;
    for(int i=1; i<v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
    
    maxCount = max(maxCount,count);
    }
    
    count = 1;
    for(int i=1; i<v.size(); i++){
        if(v[i]==v[i-1]) count++;
        else count = 1;
        if(maxCount==count){
            cout<<v[i]<<" "<<maxCount<<endl;
        }
    }

}