/*
Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
Input : str = "2947578"
Output : 8
Input : str = "1241"
Output : 2
*/

//Solution
#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    string s;
    cout<<"Enter String: "<<endl;
    getline(cin, s);

    char mxVal = '#';
    char secMax = '#';

    for(int i=0; i<s.size(); i++){
        if(mxVal<s[i]){
            secMax = mxVal;
            mxVal = s[i];
        }else if(secMax<s[i] && mxVal!=s[i]){
            secMax = s[i];
        }
    }
    cout<<mxVal<<endl;
    cout<<secMax<<endl;

}