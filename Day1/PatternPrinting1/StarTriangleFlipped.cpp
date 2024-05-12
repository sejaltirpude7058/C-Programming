/*

Star Triangle Flipped
      *
    * *
  * * *
* * * *

*/

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter number  of lines: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter number of lines: ";
  cin>>n;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if((i+j)>=n+1) cout<<"*";
      else cout<<" ";
    }
    cout<<endl;
  }
}