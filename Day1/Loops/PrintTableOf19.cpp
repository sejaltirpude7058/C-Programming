//Print the table of 19
#include<iostream>
using namespace std;
int main(){
    for(int i=19; i<=190; i++){  //for(int i=19; i<=190; i+=19) --> more optimize
        if(i%19==0){
            cout<<i<<endl;
        }
    }
}