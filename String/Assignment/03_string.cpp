// Check whether the given string is palindrome or not.
// Input : "abcde"
// Output : No
// Input : "abcdcba"
// Output : Yes

#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter String ";
    getline(cin, s);
    int n = s.size();
    bool isPalidrome = true; // considering string is palidrome

    int i = 0, j = n-1;
    while(i<j){
        if(s[i]!=s[j]){
            isPalidrome = false;
            break;
        }else{
            i++;
            j--;
        }

    }
    if(isPalidrome==true) cout<<"Yes";
    else cout<<"No";
    



   
}