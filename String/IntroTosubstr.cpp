#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s = "abcdef";

    cout << s.substr(2)<<endl;;  // This will output "cd"
    
   //s.substr(index, length); konse index se or kitne length ka chahiye
   cout<<s.substr(1,3);


   string str;
   cout<<"Enter String of even length"<<endl;
   getline(cin, str);
    int n = str.length();

    cout<<str.substr(n/2); //efgh


// It generates a new string with its value initialized to a copy of a sub-string of this object. In C++, the header file which is required for  std::substr(), string functions is <string>. 

// The substring function takes two values pos and len as an argument and returns a newly constructed string object with its value initialized to a copy of a sub-string of this object. Copying of string starts from pos and is done till pos+len means [pos, pos+len).

 
// Syntax: 

// string substr (size_t pos, size_t len) const;
// Parameters:

// pos: Index of the first character to be copied.
// len: Length of the sub-string.
// size_t: It is an unsigned integral type.



}
