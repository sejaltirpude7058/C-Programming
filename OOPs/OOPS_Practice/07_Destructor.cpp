#include<iostream>
using namespace std;

class Customer{
    public:
   string name;

   Customer(string name) {
    this->name = name;
    cout<<"Constructor is "<<name<<endl;
   }

   ~Customer(){
    
      cout<<"Destructor is "<<name<<endl;
   }
};


 int main(){

    Customer A1("1"), A2("2"), A3("3");
    //if we dynamically make object
    Customer *A4 = new Customer("4");
    //destructor is not called we need to delete
    delete A4;
    


// Constructor is 1
// Constructor is 2
// Constructor is 3
// Destructor is 3
// Destructor is 2
// Destructor is 1

// through the output we can see that contructor is called in orderd way 
//and destructor is called in reverse way
 }