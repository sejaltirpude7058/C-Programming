#include<iostream>
using namespace std;
class Car{
public:
   string model;
   int price;
   int seats;
   string color;
   string type; 

   //if humne koi constructor nhi bna rkha to by default default constructor apne ap bn jata hai hume likhne ki zarurt nhi 
   //but if khud se explicitly koi constructor hum create krre hai to fir ye jo program jo by default
   // bna hua hota hai to usko hata deta hai to hume default constructor ko mention krna hota hai vpas apne side se then hume default constructor add krna hota h
   //taki hum normally bh intialise kr sake without help of any parameterised contructor

   Car(){}; //default constructor

   Car(string m, int p, int s, string c, string t){ //parameterised constructor
       model = m;
       price = p;
       color = c;
       seats = s;
       type = t;
   }
};

void myfunction(Car c){
        cout<<c.model<<" "<<c.price<<" "<<c.color<<" "<<c.seats<<" "<<c.type<<endl;
    }

void change(Car& c){  //objects are pass by value in c++ to pass by reference use &
     c.model = "Mercedes";
}

int main(){

    //initialising by parameterised constructor
    Car c1("Tata Nexon", 1400000, 5, "White", "5MT");
    Car c2("Tata Nano", 100000, 3, "Yellow", "SUV");
    Car c3("Fortuner", 2000000, 7, "Black", "Sweden");
    Car c4("Maruti Suzuki", 500000, 4, "Silwer", "Muv");
    
    //initialising normally
    Car c5;
    c5.model = "Audi A8";
    c5.price = 5000000;
    c5.seats = 5;
    c5.color = "Gold";
    c5.type = "Sweden";

    myfunction(c1);
    myfunction(c2);
    myfunction(c3);
    myfunction(c4);

     change(c1); //pass by value by default
     myfunction(c1);

 }