// // Take three positive integer input and print the greatest
// #include<iostream>
// using namespace std; 
// int main(){
//     int a, b, c;
//     cout<<"Enter 1st 2nd and 3rd number: ";
//     cin>>a>>b>>c;
//     if(a>b){
//         if(a>c){
//             cout<<a<<" is greatest";
//         }else{
//             cout<<c<<" is greatest";
//         }
//     }else{
//      if(b>c){
//         cout<<b<<" is greatest";
//      }else{
//         cout<<c<<" is greatest";
//      }
//     }
// }

//if ages of ram shyam  and ajay are input through the keyboard write a program to determine the youngest of three
#include<iostream>
using namespace std;
int main(){
    int ram;
    cout<<"Enter ram's age: ";
    cin>>ram;
    int shyam;
    cout<<"Enter Shyam's age: ";
    cin>>shyam;
    int ajay;
    cout<<"Enter Ajay's age: ";
    cin>>ajay;
    if(ram<shyam){
        if(ram<ajay){
            cout<<"Ram is youngest";
        }else {
            cout<<"Ajay is youngest";
        }
    }else{
        if(shyam<ajay){
            cout<<"Shyam is youngest";
        }else{
            cout<<"Ajay is youngest";
        }
    }
}