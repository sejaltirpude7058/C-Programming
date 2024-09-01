/*/*
Given a sentence ‘str’, return the word that is lexicographically maximum.
Input : str = "proud to be pwians"
Output : pwians
Input : str = "decode dsa with pw"
Output : with
*/

// #include<iostream>
// #include<sstream>
// #include<string>
// #include<algorithm>
// #include<vector>
// using namespace std;
// int main(){
//     string s = "decode dsa with pw";
//     int n = s.size();

//     stringstream ss(s);
//     string temp;

//     vector<string> v;

//     while(ss>>temp){
//       v.push_back(temp);
//     }

//     sort(v.begin(), v.end());

//     cout<<v[v.size()-1];

// }

#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main(){
    string s = "decode dsa with pw";
    stringstream ss(s);
    string temp, maxWord;

    while(ss >> temp){
        if(temp > maxWord){
            maxWord = temp;
        }
    }

    cout << maxWord;
}