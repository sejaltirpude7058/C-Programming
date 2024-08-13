#include<iostream>
using namespace std;
  //created class name Candidate
class Candidate{
    public: //access modifier
    int id;  // all these are data members of class (attributes)
    string name;
    string position;
    int phone;
    string email;
    
    //Parameterised Constructor
    Candidate(int id, string name, string position, int phone, string email){
        this->id = id;
        this->name = name;
        this->position = position;
        this->phone = phone;
        this->email = email;
    }
     
     //display function inside class
    void display(){
        cout<<this->id<<" "<<this->name<<" "<<this->position<<" "<<this->phone<<" "<<this->email<<endl;
    }

};

//outer function
void change(Candidate* c){
    c->position = "Data Analytics";
}


int main(){
    //inicializing using constructor //calling constructor
    Candidate c1(1,"Sejal", "Software Developer", 23232356, "sejel@.com");

    Candidate c2(2,"Rihansh", "Software Developer", 99249927, "rihan@.com");

    // Candidate c3(3,"Mitangshu", "Django Developer", 89569565, "mitang23@.com");
    // Candidate c4(4,"Sneha", "Web Designer", 90190354, "sneha@.com");
    
    //pointer of object
    Candidate* p1 = &c1;
    cout<<p1->name<<endl; //Sejal
    cout<<(*p1).name<<endl; //Sejal
   // both are same give smae results

    //changing value using pointer
   p1->phone = 90835671;
   cout<<c1.phone<<endl;
     
   cout<<&c1<<endl; //both have same address 
   cout<<p1<<endl;  //c1 object address is stored in pointer p1

   change(&c2);
   c2.display(); //2 Rihansh Data Analytics 99249927 rihan@.com


   









}