/*
If the marks of A, B and C are input through the keyboard, write a program to determine the student
scoring the least marks.
Input 1: A = 23 , B = 34 , C = 71
Output : ‘A’ has the least marks.
*/

#include<iostream>
using namespace std; 
int main(){
    float marksOfA;
    cout<<"Enter marks of A ";
    cin>>marksOfA;

    float marksOfB;
    cout<<"Enter marks of B ";
    cin>>marksOfB;

    float marksOfC;
    cout<<"Enter marks of C ";
    cin>>marksOfC;

    if(marksOfA<marksOfB){
        if(marksOfA<marksOfC){
            cout<<"A has least marks "<<marksOfA;
        }else{
            cout<<"C has least marks "<<marksOfC;
        }
    }else{
        if(marksOfB<marksOfC){
            cout<<"B has least marks "<<marksOfB;
        }else{
            cout<<"C has least marks "<<marksOfC;
        }
    }
}