/*
Input a string and return the number of substrings that contain only vowels.
Input : str = "abjkoe"
Output : 4
Explanation : The possible substrings that only contain vowels are "a" , "o" , "e" , "oe"
Input : str = "hgdhpw"
Output : 0
*/

//possible substrings  ex: abcd 1)every individual character a b c d = 4
//                              2) pair of 2 ab bc cd = 3
//                              3) pair of 3 abc bcd = 2
//                              4) pair of 4 abcd = 1
// so 4+3+2+1 =10  so we can use formula of sum of n natural numbers i.e n*(n+1)/2 
//                                                                       4*(5)/2  = 10
#include<iostream>
#include<string>
using namespace std; 
int main(){
    string s;
    cout<<"Enter string: ";
    getline(cin, s);
    int count = 0;
    int res = 0;
    for(int i=0; i<s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i]=='i'  || s[i] == 'o' || s[i]=='u'){
           count++; 
        }else{
            res += count*(count+1)/2; //sum of n natural numbers formula
            count = 0;
        }
    }
    res += count*(count+1)/2;
    cout<<res<<endl;
}