// C++ Operator Overloading
// C++ has the ability to provide the operators with a special meaning for a data type, this ability is known as operator overloading. Operator overloading is a compile-time polymorphism. For example, we can overload an operator ‘+’ in a class like String so that we can concatenate two strings by just using +. Other example classes where arithmetic operators may be overloaded are Complex Numbers, Fractional Numbers, Big integers, etc

#include<iostream>
using namespace std;
class Fraction{
    public:
   int numerator;
   int denominator;
   
   //constructor
   Fraction(int num, int den) : numerator(num), denominator(den) {};
   
   //display out put
  void display(){
    cout<<numerator<<" / "<<denominator<<endl;
  }
  
  // by creating add function
  Fraction add(Fraction f){
    int newNume = this->numerator*f.denominator  + f.numerator*this->denominator;
    int newDeno = this->denominator*f.denominator;
    Fraction ans(newNume,newDeno);
    return ans;
  }

//using operator+
  Fraction operator+(Fraction f){
    int newNume = this->numerator*f.denominator  + f.numerator*this->denominator;
    int newDeno = this->denominator*f.denominator;
    Fraction ans(newNume,newDeno);
    return ans;
  }

  //we can also use many operator+, operator- , operator* , operator/ etc
  Fraction operator-(Fraction f){
    int newNume = this->numerator*f.denominator  - f.numerator*this->denominator;
    int newDeno = this->denominator*f.denominator;
    Fraction ans(newNume,newDeno);
    return ans;
  }

  Fraction operator*(Fraction f){
    int newNume = this->numerator*f.numerator;
    int newDeno = this->denominator*f.denominator;
    Fraction ans(newNume,newDeno);
    return ans;
  }
};

int main(){
   Fraction f1(2,4);
   Fraction f2(3,6);

   Fraction f3 = f1.add(f2); //this and below will give same result
   Fraction f4 = f1 + f2;//normally we cant do this but do add this we can create funtion using "operator+"

//    f1.display();
   f3.display();
   Fraction f5(4,9);
   Fraction f6 = f2 - f5;

   f6.display();


}