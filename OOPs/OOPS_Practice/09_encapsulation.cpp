//encapsulation 
//rapping up data or information inna single unit while controlling access to them

//Access Modifiers
//public 
//private
//protected

#include<iostream>
using namespace std;

class Student {
    public:
   string name;

   protected:
   int age;

   private:
   int phone;
   string email;



};

int main(){
     Student A1;

     A1.name = "Sejal Tirpude";
     cout<<A1.name;
   // A1.phone is inaccessible

    // A1.age = 34; //member "Student::age" (declared at line 17) is inaccessible




}
