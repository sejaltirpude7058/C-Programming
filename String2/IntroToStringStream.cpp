/*
A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream (like cin). To use stringstream, we need to include sstream header file. The stringstream class is extremely useful in parsing input. 

Basic methods are:

clear()- To clear the stream.
str()- To get and set string object whose content is present in the stream. 
operator <<- Add a string to the stringstream object. 
operator >>- Read something from the stringstream object.
*/

#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string str = "Hey! my name is Sejal";
    stringstream ss(str);
    int count = 0;
    string temp;
    while(ss>>temp){
        count++;
        cout<<temp<<endl;
    }
    cout<<"Total words present in string "<<count;
}