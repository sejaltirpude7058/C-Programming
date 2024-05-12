/*
 If cost price nd selling price of an item is input through the keyword,
 write a program to determine whether ther seller has made profit or incurred loss.
 Also determine how much profit he made or loss he incurred.
*/

#include<iostream>
using namespace std;
int main(){
    int costPrice;
    cout<<"Enter cost price: ";
    cin>>costPrice;
    int sellingPrice;
    cout<<"Enter selling price: ";
    cin>>sellingPrice;
    if(sellingPrice > costPrice){
        cout<<"The coustomer has profit of "<<sellingPrice-costPrice;
    }else if(costPrice == sellingPrice){
        cout<<"Nor Profit neither Loss";
    }else{
        cout<<"The coustomer has Loss of "<<costPrice-sellingPrice;
    }
}