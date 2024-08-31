// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
// 0-based indexing.
// Input : str = "Pbwcshkuiglhlds"
// Output : "P#w#s#k#i#l#l#s"
// input : str = "a"
// Output : "a"

#include<iostream>
#include<string>
using namespace std;
 int main(){
   int n;
   cout<<"Enter size: ";
   cin>>n;

   char str[n];
   cout<<"Enter String"<<endl;
   cin>>str;

   for(int i=0; str[i]!='\0'; i++){
    if(i%2!=0){
        str[i] = '#';
    }
   }

   cout<<str;
 }