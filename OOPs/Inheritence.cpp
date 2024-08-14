// In C++, it is possible to inherit attributes and methods from one class to another. We group the 
//"inheritance concept" into two categories:

// derived class (child) - the class that inherits from another class
// base class (parent) - the class being inherited from
// To inherit from a class, use the : symbol.

// Inheritance is one in which a new class is created that inherits the properties of the already exist class. It supports the concept of code reusability and reduces the length of the code in object-oriented programming

#include<iostream>
using namespace std;
class Vheicle{
    public:
    int topSpeed;
    float mileage;
    private:
    int bootspace;
};
class Bike : public Vheicle{ // public means it will the bike class will only interit the properties which are public
    public:
    int gear;

    Bike(){};
};


int main(){
     Bike b1;
     b1.topSpeed = 180;
     b1.mileage = 12.4;
     b1.gear = 4;
}

