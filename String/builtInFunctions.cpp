#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    string str = "Sejal Tirpude";

    //to get the size of and string
    cout<<str.size()<<endl;

    cout<<str.length()<<endl;

    //to add character at right most we use push_back()
    str.push_back('.');
    str.push_back(' ');
    str.push_back('S');

    cout<<str<<endl; //Sejal Tirpude. S

    //to remove character from end we use pop_back()
    str.pop_back();
    str.pop_back();
    cout<<str<<endl; //Sejal Tirpude.

    // + operator
    string s = "Ayush";
    s = s + " Tirpude";
    cout<<s<<endl;
    
    s = "Mr " + s + " Tirpude";
    cout<<s<<endl;

    // to reverse string use reverse()
  //  reverse(str.begin(), str.end());
    string st = "abcdefgh"; //0 1 2 3 4 5 6 7
    
    
    // reverse(st.begin()+3, st.end()-2);
   // cout<<st;//abcfedgh

   reverse(st.begin()+2,st.end()-1);
   cout<<st;








}