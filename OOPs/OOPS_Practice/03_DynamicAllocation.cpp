#include<iostream>
using namespace std;

class Student {
    public:
    int id;
    int cgpa;
    string name;

};


int main(){
   
   Student *s1 = new Student;

  (*s1).name = "Sejal";
  s1->cgpa = 8.13;


}