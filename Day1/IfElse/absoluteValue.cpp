//if -7 then print 7
//given an integer print the absolute value of that integer
#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter number: ";
   cin>>n;
   if(n<0){
    n *= -1;
    cout<<"The absloute value is: "<<n;
   }else{
    cout<<"The absloute value is: "<<n;
   }
}