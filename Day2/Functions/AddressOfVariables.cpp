#include<iostream>
using namespace std;
void myFunction(int x, int y){
        cout<<"Adress of myFunctions x is: "<<&x<<endl;
        cout<<"Adress of myFunctions y is: "<<&y<<endl;   
    }

int main(){
    int x = 5;
    int y = 10;
    cout<<"Address of main function x is: "<<&x<<endl;
    cout<<"Address of main function y is: "<<&y<<endl;
    myFunction(x,y);

}
