#include<iostream>
#include<vector>
using namespace std; 
int main(){
    // //to convert string to integer we use stoi ->stoi stands for string to integer
    // string s = "8832";
    // int num = stoi(s);
    // cout<<num+10<<endl; //8842


    // //stoll is use to convert string to long long integer
    // string str = "1234567890123456789";
    // long long x = stoll(str);
    // cout<<x;

//Not Optimised code
    // vector<string> v = {"0123","0023","456","940", "00182", "2901"};
    // vector<int> v1;
    // for(int i=0; i<v.size(); i++){
    //     int num = stoi(v[i]);
    //     v1.push_back(num);
    // }
    // int max = 0;
    // for(int i=0; i<v1.size(); i++){
    //     if(v1[i]>max) max = v1[i];
    // }
    // cout<<max;

             
    int n;
    cout<<"Enter Size of string array: ";
    cin>>n;

    string str[n];
    cout<<"Enter string: ";
   for(int i=0; i<n; i++){
    cin>>str[i];
   }
    int maxValue = stoi(str[0]);
    string maxS = str[0];
    for(int i=1; i<n; i++){
       int x = stoi(str[i]);
        if(x > maxValue) {
            maxValue = x;
            maxS =  str[i];
        }
    }

    cout<<"The Max Value is "<<maxValue<<endl;
    cout<<"The Max Value is "<<maxValue<<endl;

    

    


}