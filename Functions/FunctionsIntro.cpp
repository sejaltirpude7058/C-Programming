//Funtions are the block of code that need to be executed only when they are called.
//They are important for resusing code
//Define the code and then use if for many times
//syntax
// FunctionType NameofFunction(parameter if any){
    // block of code;
//}
//To call a function
// NameOfFunction();

//Example
#include<iostream>
using namespace std;

//defining a function
void greeting(){
    cout<<"Good Morning!!\n";
}

int main(){
   cout<<"Hello Everyone!!\n";
   //Calling a function
    greeting();
}

