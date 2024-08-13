#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
    string gender;
//this->
//A variable that is available inside class methods and constructors which contians a pointer to a 
//class instance
 
//till now we were giving differnt parameters name if we want to give same parameters name 
//we need to use this keyword coz if we gave the same names as attributes of our class then the compliler will
// will get confused coz we have seen that jb hum constructor ko call lgate h arguments pass krte hai to
//directly values nhi jati phle hamare temprory variable (parameters me jati h)
//if hum person(string name){
  //name = name ; krennge to vo hamare parameter k name hi assume krega
//}
    Person(string name, int age, string gender){
     this->name = name;
     this->age = age;
     this->gender = gender;
    }

};

void display(Person p){
    cout<<p.name<<" "<<p.age<<" "<<p.gender<<endl<<endl;
}

int main(){
    Person p1("Sejal", 23, "Female");
    Person p2("Sakshi", 21, "Female");
    Person p3("Tushke", 20, "Male");
    Person p4("Sneha", 27, "Female");

    display(p1);
    display(p2);
    display(p3);
    display(p4);

}