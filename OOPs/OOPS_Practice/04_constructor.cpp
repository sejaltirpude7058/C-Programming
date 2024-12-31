#include<iostream>
using namespace std;

class Customer{
    public:
   string name;
   string branchName;
   int account_number;
   int balance;
   int *roi;

//default contructor
//can be useful to set the initial values
   Customer(){
     cout<<"constructor was called"<<endl;
   }

   //parameterised constructor
   Customer(string name, string branchName, int account_number, int balance){
       this->name = name;
       this->branchName = branchName;
       this->account_number = account_number;
       this->balance = balance;
       roi = new int[1000];
   }

   //inline constructor
   inline Customer(string n, string bN): name(n),  branchName(bN){};

   //when we call constructor for diffrent diffrent parameters multiple times it is called overloading

};


int main(){
     Customer c1;
     c1.name = "Megha";
     c1.account_number = 333222111;
     c1.balance = 45000;

     Customer c2("Sejal", "Kamptee", 234345, 50000);

     cout<<c1.name<<" "<<c1.account_number<<" "<<c1.balance<<endl;
     cout<<c2.name<<" "<<c2.account_number<<" "<<c2.balance<<endl;


     /*
     Other uses of constructors besides initializing:
In the real world, data is often stored in files. We can use a constructor to open these files and read the data we need.

For example, if our program requires input from a file, the constructor can handle opening that file. If the file is missing or can't be opened, we can prevent the rest of the program from running by showing an error message early.

This saves time and resources because we ensure that everything (like files, printers, or storage) is available before proceeding. The constructor checks if the required resources are accessible at the beginning. If they're not, the program can stop right away instead of wasting time later.

Use cases:
Opening a file: If the file you need isn't available, the constructor can handle it by showing an error, preventing unnecessary processing.
Printer requirement: If your program needs a printer to be available, the constructor can check if it's connected and ready before proceeding.
Storage allocation: If you need a certain amount of memory or storage space, the constructor can ensure it's available before moving forward.
This approach helps to avoid potential problems later in the program by verifying that everything needed is ready from the start
     */
}