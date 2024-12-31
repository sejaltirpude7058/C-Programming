//Static Keyword member
/*
-> they are attribute of classes or class members
-> they are declared using static keyword
-> Only one copy of that member is created for entire class and is shared by all in objects
-> it is initialised before any object of the class is created
*/

#include<iostream>
using namespace std;

class Account_Holder{
    public:
    string name;
    string branchName;
    double account_number;
    double balance;
     
    // to know the total customers (account_Holders)
    static int Total_Customers;

    //to know total bank Balance of bank
    static  long long Total_Balance_Bank;

    Account_Holder(){}

    Account_Holder(string name, double account_number, double balance ){
        this->name=name;
        this->account_number = account_number;
        this->balance = balance;
        Total_Customers++;
        Total_Balance_Bank += balance;   
    }

    void deposit(float amount){
        if(amount>0){
        balance += amount;
        Total_Balance_Bank+=amount;
        } 
    }

    void withdraw(float amount){
        if(amount<=balance && amount>0){
         balance -= amount;
         Total_Balance_Bank -= amount;
        }else{
            cout<<"Insuffient Balance";
        }
    }

    public:
    static void displayTotalbalance(){
       cout<<"Total Bank Balance: "<<Total_Balance_Bank<<endl;
    }
    
    public:
    static void displayTotalCustomers(){
        cout<<"Total customers: "<<Total_Customers<<endl;
    }

};
//
int Account_Holder :: Total_Customers = 0;
long long Account_Holder ::Total_Balance_Bank = 0;



int main(){

    Account_Holder a1("Sejal", 333111222, 100000);
    Account_Holder a2("Tejal", 433111222, 200000);
    Account_Holder a3("Shree", 033111222, 300000);
    Account_Holder a4("Kumar", 133111222, 400000);
    Account_Holder a5("Dehal", 614111222, 600000);
    Account_Holder a6("Prajakta", 333111222, 1000);
    Account_Holder a7("Minal", 333111222, 110000);
    Account_Holder a8("Kajona", 333111222, 104500);
  

  //to access statics attritbutes
   Account_Holder::Total_Customers = 10;

   Account_Holder::displayTotalbalance();
   Account_Holder::displayTotalCustomers(); //10

   a5.withdraw(100000);
   cout<<a5.balance;



    
}