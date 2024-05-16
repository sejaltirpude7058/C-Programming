// Display an Ap of 1,3,5,7,...upto n term
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int a = 1;//1st term
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a += 2;//diffrence
    }

}

// Display an Ap of 1,3,5,7,...upto n term using Formulaa 2(n-1)
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     for(int i=1; i<=2*(n-1); i+=2){
//         cout<<i<<endl;
//     }
// }

// Question 2
// Display an AP = 4,7,10,13..upto n term
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     int a = 4;
//     for(int i=1; i<=n; i++){
//         cout<<a<<endl;
//         a += 3;

//     }
// }

// Question 3 
// Display an AP 100, 97, 94 upto all terms which are positive
// #include<iostream>
// using namespace std;
// int main(){
//     int n; 
//     cout<<"Enter number: ";
//     cin>>n;
//     int a = 100;
//     for(int i=1; i>0; i++){
//         cout<<a<<endl;
//         a -=3;
//     }
// }

