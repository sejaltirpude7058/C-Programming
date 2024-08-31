//Input a string of length n and count all the consonants in the given string.
//Input : "pwians"
//Output : 4
//Input : "abdc"
//Output : 3

#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int count = 0;
    char str[n];
    cout<<"Enter String: ";
    cin>>str;
   
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'){
            count++;
        }
    }

    cout<<"Total consonent present in string are "<<count;


}