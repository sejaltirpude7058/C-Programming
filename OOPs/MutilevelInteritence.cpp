
#include<iostream>
using namespace std;
class Vehicle{
    public:
    int maxSpeed;
    string fuel;
};

class TwoWheelers : public Vehicle{
    public:
   // Attributes common to all two-wheelers
    string brand;
    string model;
    int engineCapacity; // in cc
    bool hasCarrier; // true if it has a carrier, false otherwise
   
};

class FourWheeler : public Vehicle{
public:
    string brand;
    string model;
    int engineCapacity;
    int numberOfDoors;
};

class ThreeWheeler : public Vehicle{
public:
    string brand;
    string model;
    int engineCapacity;
    bool hasCargoSpace;
};

class Bike : public TwoWheelers{
    public:
  bool hasDisBrakes;
   
   //constructor
   Bike(string brand, string model,int maxSpeed, string fuel, int engineCapacity, bool hasDisBrakes){
       this->brand = brand;
       this->model = model;
       this->maxSpeed = maxSpeed;
       this->fuel = fuel;
       this->engineCapacity = engineCapacity;
       this->hasDisBrakes = hasDisBrakes;
     
   }
};

class Scooty : public TwoWheelers{
    public:
  bool hasUnderSeatStorage;

   Scooty(string brand, string model,int maxSpeed, string fuel, int engineCapacity, bool hasUnderSeatStorage){
       this->brand = brand;
       this->model = model;
       this->maxSpeed = maxSpeed;
       this->fuel = fuel;
       this->engineCapacity = engineCapacity;
       this->hasUnderSeatStorage = hasUnderSeatStorage;
     
   }
};

class AutoRickshaw : public ThreeWheeler{
    public:
  bool  hasPassengerseats;

  AutoRickshaw(string brand, string model,int maxSpeed, string fuel, int engineCapacity, bool hasPassengerseats){
       this->brand = brand;
       this->model = model;
       this->maxSpeed = maxSpeed;
       this->fuel = fuel;
       this->engineCapacity = engineCapacity;
       this->hasPassengerseats = hasPassengerseats;
     
   }
};

class Car : public FourWheeler{
 public:
   bool hasAirConditioning; // true if the car has AC
   int seats;

   Car(string brand, string model,int maxSpeed, string fuel, int engineCapacity,int seats, bool hasAirConditioning){
       this->brand = brand;
       this->model = model;
       this->maxSpeed = maxSpeed;
       this->fuel = fuel;
       this->engineCapacity = engineCapacity;
       this->seats = seats;
       this->hasAirConditioning = hasAirConditioning;
     
   }
};




int main(){
    Scooty myScooty("Honda", "Activa", 110, "Petrol", 85, true);
    Bike myBike("Yamaha", "R15", 150, "Petrol", 140, false);

      // Three-wheeler example
     AutoRickshaw myRickshaw("Bajaj", "RE", 200, "Petrol", 70, true);

    // // Four-wheeler example
    Car myCar("Toyota", "Camry", 2500, "Petrol", 220, 4, true);

    
}
