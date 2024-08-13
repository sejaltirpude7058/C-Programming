#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    int phone;
    string profile;
    int salary;
    string email;
    string location;

    Employee(int id, string name, int phone, string profile, int salary, string email, string location)
    {
        this->id = id;
        this->name = name;
        this->profile = profile;
        this->phone = phone;
        this->email = email;
        this->location = location;
    }
};

int main()
{
    // int x = 12; //  static allocation during complile time
    // int* ptr = &x;

    // // directly stored address in pointer without any variable name
    // int* ptr = new int(34); // dynamic allocation runtime ( stored in heap memory)
    
    Employee c2(2,"Mihir", 453453, "Data Analytics", 32000, "mihir@.com", "JP Nagar"); // static allocation

    Employee* c1 = new Employee(1, "Sejal", 780780, "Software Developer", 45000, "sejal@.com", "Shambhu Nagar"); //dynamic allocation during run time (stored in heap memory)

    cout<<c1->location<<endl;
}
