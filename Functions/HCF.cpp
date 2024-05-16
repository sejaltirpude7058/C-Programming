/*
Write a function to compute a greatest
common divisor of two given numbers.
*/

#include<iostream>
using namespace std;
int HighestCommonFactor(int x, int y){
    int hcf = 1;
    for(int i=min(x,y); i>=1; i--){ 
        if(x%i==0 && y%i==0){ // i is the common factor
            hcf = i;
            break;
        }
    }
    return hcf;
}

int main(){
   int x;
   cout<<"Enter 1st Number: ";
   cin>>x;
   int y;
   cout<<"Enter 2nd Number: ";
   cin>>y;
   cout<<HighestCommonFactor(x,y);
}