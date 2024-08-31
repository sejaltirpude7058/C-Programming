//Note : String is not a datatype it is class

#include<iostream>
using namespace std;
int main(){
    //declaration of string 
    string str = "Sejal Tirpude";//in string also theres a null character in end
    cout<<str<<endl; //Sejal Tirpude
    cout<<str[2]<<endl; //j INDEXing starts from 0

    string str2;
    // cin>>str2; // it will only work if the input string has no space and of 1 word
    // cout<<str2;

//to get the whole string with spaces we have to use getline
getline(cin,str2);
cout<<str2;
    
}