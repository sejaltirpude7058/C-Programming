// A virtual function (also known as virtual methods) is a member function that is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class's version of the method.

// Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for the function call.
// They are mainly used to achieve Runtime polymorphism.
// Functions are declared with a virtual keyword in a base class.
// The resolving of a function call is done at runtime.
// Rules for Virtual Functions
// The rules for the virtual functions in C++ are as follows:

// Virtual functions cannot be static.
// A virtual function can be a friend function of another class.
// Virtual functions should be accessed using a pointer or reference of base class type to achieve runtime polymorphism.
// The prototype of virtual functions should be the same in the base as well as the derived class.
// They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.
// A class may have a virtual destructor but it cannot have a virtual constructor.



#include<iostream>
using namespace std;
class Vehicle{  //parent class
    public:
    int maxspeed;
    string fuel;
  virtual void sound(){
    cout<<"Vroom Vroom"<<endl;
 }
};

class Bike : public Vehicle{
 public:
 int gears;
 void sound(){
    cout<<"Dhroom Dhroom"<<endl;
 }
};

class Scooty : public Vehicle{
    public:
    int bootSpace;
    void sound(){
        cout<<"Zroom Zroom"<<endl;
    }
};

int main(){
    Scooty* s = new Scooty();//Dynamic Allocation stored in heap memory runtime 
    s->sound();//Zroom Zroom

    Bike* b  = new Bike();
    b->sound();//Dhroom Dhroom

   Vehicle* v = new Scooty();
   v->sound();//output will come vroom vroom 

   //if we want by declaring like this and output should come the sound of scooty(derived class of Vehicle)(Vehicle is the parent class of bike and scooty)if we want by declaring object pointer of parent class (Vehicle* v = new Scooty();) then we need to use the virtual keyword in front of parent sound function "virtual void sound(){ cout<<"Vroom Vroom"<<endl; };"
   //we will get

   Vehicle* v2 = new Bike();
   v2->sound();//Dhroom Dhroom




}