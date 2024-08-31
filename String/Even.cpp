#include<iostream>
using namespace std;
int main(){
//     int n;
//     cout<<"Enter size of an string ";
//     cin>>n;
//     char ch[n];
//     for(int i=0; i<n; i++){
//         cin>>ch[i];
//     }

//     for(int i=0; i<n; i++){
//         if(i%2==0){
//             ch[i] = 'a';
//         }
//     }

//     cout<<ch;


//using string
string s;
getline(cin, s);
cout<<s<<endl;
for(int i=0; s[i]!='\0'; i++){
    if(i%2==0){
        s[i] = 'a';
    }
}

 cout<<s;




 }

