#include<iostream>
using namespace std;

class Employee{
  public: 
  int id;
  string name;
  int age;
  string address;
  string position;
  int salary;

  Employee(int i, string n, int a){
      id = i;
      name = n;
      age = a;
    //   address = ad;
    //   position = p;
    //   salary = s;
  }
};

void priEmp(Employee e){
   cout<<e.id<<" "<<e.name<<" "<<e.age<<" "<<e.address<<" "<<e.position<<" "<<e.salary<<endl;
}

int main(){
     Employee e1(1,"sejal",23);
     e1.address = "Shambhu Nagar";
     e1.position = "Software Developer";
     e1.salary = 35000;

     priEmp(e1);
}

// "J.P Nagar", "Web Developer", 30000