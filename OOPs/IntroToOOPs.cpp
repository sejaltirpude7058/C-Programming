//OOps In C++-+

#include<iostream>
using namespace std;

class Student {
    public :
    string name;
    int rollNo;
    int age;
    string department;
    char section;
    float cgpa;
};


int main(){

  Student stud_1;
  stud_1.name = "Sejal";
  stud_1.rollNo = 23;
  stud_1.age = 22;
  stud_1.department = "ETC";
  stud_1.section = 'B';
  stud_1.cgpa = 8.13;

  Student stud_4;
  stud_4.name = "Dehal";
  stud_4.rollNo = 06;
  stud_4.age = 21;
  stud_4.department = "ME";
  stud_4.section = 'A';
  stud_4.cgpa = 7.45;

  Student stud_2;
  stud_2.name = "Kartikye";
  stud_2.rollNo = 50;
  stud_2.age = 21;
  stud_2.department = "CSE";
  stud_2.section = 'B';
  stud_2.cgpa = 9.03;

  Student stud_3;
  stud_3.name = "Sarfaraz";
  stud_3.rollNo = 43;
  stud_3.age = 23;
  stud_3.department = "IT";
  stud_3.section = 'A';
  stud_3.cgpa = 9.12;

  cout<<stud_1.name<<" "<<stud_1.rollNo<<" "<<stud_1.department<<" "<<stud_1.cgpa<<endl;
  cout<<stud_2.name<<" "<<stud_2.rollNo<<" "<<stud_2.department<<" "<<stud_2.cgpa<<endl;
  cout<<stud_3.name<<" "<<stud_3.rollNo<<" "<<stud_3.department<<" "<<stud_3.cgpa<<endl;
  cout<<stud_4.name<<" "<<stud_4.rollNo<<" "<<stud_4.department<<" "<<stud_4.cgpa<<endl;


}