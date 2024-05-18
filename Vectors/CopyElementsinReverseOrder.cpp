//Write a program to copy the contents of one array into another in the reverse order

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v1 = {5, 4, 3, 2, 1};
//     int n = v1.size();
//     vector<int> v2(n);

//     int i = 0;
//     int j = n - 1;
//     while (j >= 0)
//     {
//         int temp = v1[i];
//         v1[i] = v2[j];
//         v2[j] = temp;
//         i++;
//         j--;
//     }

//     for (int i = 0; i < v2.size(); i++)
//     {
//         cout << v2[i] << " ";
//     }
// }

//second Approach
#include<iostream>
#include<vector>
using namespace std; 
void display(vector<int> &v){
    for(int i=0; i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> v1 = {1,2,3,4,5,6,7,8};
    int n = v1.size();
    vector<int> v2(n);

    display(v1);

    for(int i=0; i<n; i++){
        int j = n-1-i;;
        v2[i] = v1[j];
    }

    display(v2);
}