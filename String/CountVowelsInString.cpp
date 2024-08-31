//input a string of length n and count all the vowels in the given string


#include<iostream>
using namespace std;
int main(){
    string ch;
    cout<<"Enter String: ";
    getline(cin, ch);
    int count = 0;
    for(int i=0; i<ch[i]!='\0'; i++){
        if(ch[i] == 'a' || ch[i] == 'e' ||ch[i] == 'i' || ch[i] == 'o' ||ch[i] == 'u'){
            count++;
        }
    }
    cout<<count;
    
    
}