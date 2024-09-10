/*
Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
isosceles triangle.
Input : side1 = 5 side2 = 4 side3 = 4
Output: This is an Isosceles triangle.
*/

#include<iostream>
using namespace std;
int main(){
   int side1, side2, side3;
   cout<<"Enter side1, side2, side3  ";
   cin>>side1>>side2>>side3;

   if(side1 == side2 && side2 == side3 && side1 == side3){
    cout<<"This is an Equilateral triangle.";
   }else if(side1 == side2 || side2 == side3 || side1 == side3){
    cout<<"This is an Isosceles triangle.";
   }else{
    cout<<"This is an Scalene triangle.";
   }
}