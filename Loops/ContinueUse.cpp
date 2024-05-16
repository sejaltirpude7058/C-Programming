// C++ Continue
/*
the continue statement breaks one iteration int the loop , 
if a spacified condition occurs and continues with the next 
iteration int the loop.
*/
//Print odd number from 1 to 100 using continue
#include<iostream>
using namespace std;
int main(){
for(int i=1; i<=100; i++){
    if(i%2==0) continue;
    cout<<i<<endl;
}
}