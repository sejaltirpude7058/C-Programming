// public - members are accessible from outside the class
// private - members cannot be accessed (or viewed) from outside the class
// protected - members cannot be accessed from outside the class, however, they can be accessed in
// inherited classes.

//Encapsulation
// The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve 
// this, you must declare class variables/attributes as private (cannot be accessed from outside the 
// class). If you want others to read or modify the value of a private member, you can provide public
//  get and set methods.



#include<iostream>
using namespace std;
class Person{
   public:
   string name;
   string gender;
   int age;

   Person(){}

   Person(string name, string gender, int age, string department, float marks){
      this->name = name;
      this->gender = gender;
      this->age = age;
      this->marks = marks;
      this->department = department;
   }

  
//we can make getter to get private members outside class
float getMarks(){
    return marks;
}

//setter
void setMarks(float m){
    marks = m;
}


void display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Department: "<<department<<endl;
    cout<<"Marks: "<<marks<<endl;
}

   private: // private members can be accessd within class but cannot be acessed outside the class
   string department;
   float marks;



};


int main(){
    Person p1("Sejal", "Female", 23, "ETC", 88.45);
    Person p2("Minal", "Female", 20, "CSE", 67.8);

    //p2.caste = "Xyz"; // cannot be changed or accesed 

    // cout<<p2.caste; we can't even print 

    // p1.display();
    
    cout<<p2.getMarks();

    p1.setMarks(99.45);
    p1.display();

    


    

    
}

