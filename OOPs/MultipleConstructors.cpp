#include <iostream>
using namespace std;

class Customer
{
public:
    int id;
    string name;
    int age;
    string gender;
    int phone;
    string location;
    string purchase;

    //we can have multiple constructors according to our needs

    Customer() {}//default constructor

    Customer(int i, string n) // its not neccessary to have all parameters
    {
        id = i;
        name = n;
    }

    Customer(int p, string g, string l)
    {
        phone = p;
        gender = g;
        location = l;
    }

    Customer(string pr)
    {
        purchase = pr;
    }

    Customer(int i, string n, int a, string l, string g, string pr, int p)
    {
        id = i;
        name = n;
        age = a;
        phone = p;
        gender = g;
        location = l;
        purchase = pr;
    }
};

void display(Customer c)
{
    cout << c.id << " " << c.name << " " << c.age << " " << c.gender << " " << c.location << " " << c.phone << " " << c.purchase << endl;
}

int main()
{
    Customer c1(1, "Sejal");
    c1.age = 22;
    c1.gender = "female";
    c1.location = "Shambhu Nagar";
    c1.purchase = "Maybelline Foundation";
    c1.phone = 9999999;

    Customer c2(83838383, "Male", "J.P Nagar");
    c2.id = 2;
    c2.name = "Ayush";
    c2.age = 20;
    c2.purchase = "Cheese Cubes";

    Customer c3("Napkins");
    c3.id = 3;
    c3.name = "Jayshree";
    c3.age = 15;
    c3.gender = "female";
    c3.location = "Trimurti Nagar";
    c3.purchase = "Dove Saop";

    Customer c4(4,"Kartikye", 24, "ShreeNagar", "Male", " FruitJam", 12121212 );

    display(c1);
    display(c2);
    display(c3);
    display(c4);

// 1  Sejal  22 female  Shambhu Nagar  9999999  Maybelline Foundation
// 2  Ayush  20 Male  J.P Nagar  83838383  Cheese Cubes
// 3  Jayshree  15 female  Trimurti Nagar  17367040  Dove Saop
// 4  Kartikye  24 Male  ShreeNagar  12121212  FruitJam
}