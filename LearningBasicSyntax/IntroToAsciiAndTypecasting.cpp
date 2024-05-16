//ASCII values of Characters
/*
UPPERCASE A to Z --> 65 to 90
lowercase a to z --> 97 to 133
'0' -> 48, '1' -> 49.....
*/

// #include<iostream>
// using namespace std;
// int main(){
//     char a = 65, b = 66, c = 67;
//     cout<<a<<b<<c;  // output -> ABC
// }

//Typecasting -> when we want to interchange value from 1 datatype to another we use typecasting.

//example:
// #include<iostream>
// using namespace std; 
// int main(){
//    float num = 7.3;
//    int x = (int)num;
//    char ch = 'A';
//    int y = (int)ch;
//    cout<<x<<"\n"<<y;
// }

// Program to find out position number of character alphabet
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter aphabet character: ";
    cin>>ch;
    int x = (int)ch;
    if(x<=90 && x>=65) cout<<x-64; // for uppercase alphabet
    else if(x<=133 && x>=97) cout<<x-96;
    else cout<<"Not alphabet";
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                