#include<iostream>
using namespace std;

class Employee{
   char ch;
   int n;

};

int main(){
  Employee obj;
  cout<<sizeof(obj);
}

// The object size is 8 bytes because the char (1 byte) is followed by a 3-byte padding to align the int (4 bytes) correctly in memory. Memory alignment makes data access faster, which is why the total becomes 8 bytes (1 + 3 + 4 = 8).

// An empty class has a size of 1 byte because every object in C++ must have a unique address in memory. So, even an empty class gets 1 byte to ensure it has an address.

// Padding is extra space added between data members to ensure proper alignment.

// Alignment means data types are stored in memory at specific boundaries (like 4-byte or 8-byte boundaries) to speed up access. For example, an int (4 bytes) should start at an address divisible by 4, so padding is added if needed to maintain this rule.

// In short, padding helps align data in memory for efficient access.


//to make sure it occupies less space we apply greedy method 
//means the datatypes which have more size unko sabse phele or uppr decalre krna or kam valo ko niche
/*
class example {
  int a;
  char ch;
  char s;
} it will occupy  8 bytes

where as 

class example {
  char ch;
  int a;
  char s;
} it will occupy  12 bytes 



*/