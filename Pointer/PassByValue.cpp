//Pass by value
//Writing Swap function
#include<iostream>
using namespace std; 
void swap(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
}

int main(){
    int x;
    cout<<"Enter value of 1st number: ";
    cin>>x;
    int y;
    cout<<"Enter the value of 2nd number: ";
    cin>>y;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y;
   
    
}