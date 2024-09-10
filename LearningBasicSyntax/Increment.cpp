#include<iostream>
using namespace std; 
int main(){
    int x = 9;
    int y = x++;

    cout<<"x: "<<x<<"  y: "<<y;
    //expected output x:10 y:9
    
    cout<<endl;
    int a = 9;
    int b = ++a;

    cout<<"a: "<<a<<"  b: "<<b;
    //expected output a:10 b:10
}