#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    float cgpa;

    Student(){

    }

    Student(string name, float cgpa){
      this->name = name;
      this->cgpa = cgpa;
    }


   //copy constructor
    Student(Student &b){
      name = b.name;
      cgpa = b.cgpa;
    }
};


int main(){
  
  Student s1("Sejal", 8.13);

  Student s2(s1);

  cout<<s2.name<<" "<<s2.cgpa<<endl;

  s2.name = "Anamika";

  cout<<s2.name;

}
