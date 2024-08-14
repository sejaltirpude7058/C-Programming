// The constructor you provided is known as a parameterized constructor with an initializer list in C++.

// Breakdown:
// Parameterized Constructor:

// This constructor takes parameters (string b, string m, int e, etc.) which are used to initialize the object's data members when an object is created.
// Initializer List:

// The part after the colon : is called the initializer list. It is used to directly initialize the data members of the class before the constructor's body is executed.
// The syntax is : member1(value1), member2(value2), ..., where each member is assigned the corresponding value.
// Using an initializer list is often more efficient than assigning values inside the constructor body, especially for complex objects or when initializing const or reference members.

#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    string gender;
    int age;
    string location;
    string Nationality;
    bool isHandiKaped;
  
   //constructor
    Person(string n, string g, int a, string l, string na, bool h ) : name(n), gender(g), age(a), location(l), Nationality(na), isHandiKaped(h) {}

   void display(){
    cout<<name<<" "<<gender<<" "<<age<<" "<<location<<" "<<Nationality<<" "<<isHandiKaped<<endl;
   }

};

int main(){
    Person person1("Neha", "Female", 22, "Shardha-Nagar", "Indian", false );

    person1.display();
}