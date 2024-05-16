//Question 1
//Display an GP 1,2,4,8,16...UPTO N TERMS
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int a = 1;
    for(int i=1; i<=n; i++){
        cout<<a<<endl;
        a *= 2;
    }
}

//Question 2
// Display an GP 2,6,18...UPTO N TERMS
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter Number: ";
//     cin >> n;
//     int a = 2;
//     for (int i = 1; i <= n; i++)
//     {
//         cout << a << endl;
//         a *= 3;
//     }
// }

//Question 3
//Display this GP 100, 50, 25, .....upto nth term
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter Number: ";
//     cin>>n;
//     float a = 100;
//     for(int i=1; i<=n; i++){
//         cout<<a<<endl;
//         a /= 2;
//     }
// }