#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string s;
    cout<<"Enter String it must be of even length: ";
    getline(cin, s);

    int n = s.length();

    reverse(s.begin(), s.end()-n/2);

    cout<<s;


}