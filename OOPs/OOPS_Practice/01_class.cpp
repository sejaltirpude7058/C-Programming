#include<iostream>
using namespace std;

class Student {
    private:
    int id;
    int class_rollno;
    string name;
    string branch;
    float cgpa;
    string email;

      public:
     //getter
    string getName(){
        return name;
    }

    //setter
    void setName(string name){
        this->name = name;
    }


    void setCgpa(float cgpa){
    this->cgpa = cgpa;
    }

    float getCgpa(){
        return cgpa;
    }

    void setEmail(string email){
        if(email==""){
            cout<<"Enter Valid Email";
        }
        else {
            this->email = email;
        }
    }

    //we can put conditions in our getters and setters 

    void setBranch(string branch){
        if(branch==""){
            cout<<"branch name cannot be empty";
        }
        else{
            this->branch = branch;
        }
    }

    //for example we want to set a security pin then only other will get access to email

    string getEmail(int pin){
        if(pin == 123){
            
            return email;
        }else{
            cout<<"Enter correct pin to access email";
            return "";
        }
    }

    
};

int main(){
  
  Student s1;
  
  s1.setName("Sejal");
  cout<<s1.getName();

  s1.setCgpa(8.13);
  cout<<s1.getCgpa()<<endl;

  s1.setEmail("sej@123.com");

  cout<<s1.getEmail(123);



}