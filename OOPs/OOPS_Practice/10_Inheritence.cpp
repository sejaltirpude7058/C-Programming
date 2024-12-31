#include<iostream>
using namespace std;

class Human{
   string religon, color;
   float height, weight;
   protected:
   int age;
   bool isDisable;
   string gender;


   Human(){
      cout<<"Parent class constructor was called"<<endl;
   };

};

class Student : public Human{
    public:
   string name;
   float cgpa;
   double fees;



   public:

   Student(){
      cout<<"dervied chiled class constructor was called"<<endl;
   };

   Student( string name, string gender, int age, bool isDisable, float cgpa, double fees ){
       this->name =name;
       this->age= age;
       this->gender = gender;
       this->isDisable = isDisable;
       this->cgpa = cgpa;
       this->fees = fees;
   };

   
   void display(){
    cout<<"Name of Student is "<<name<<endl;
    cout<<"gender of Student is "<<gender<<endl;
    cout<<"age of Student is "<<age<<endl;
    cout<<"isDisable of Student is "<<isDisable<<endl;
    cout<<"cgpa of Student is "<<cgpa<<endl;
    cout<<"fees of Student is "<<fees<<endl;
   };
};

int main(){

    // Student s1("Harsh", "male", 22, false, 8.32, 25000);
    Student s1;
    s1.name = "Sejal";
    s1.display();
}


