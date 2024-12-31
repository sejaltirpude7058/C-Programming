// Destructor in C++:
// A destructor is a special member function in C++ that is automatically called when an object goes out of scope or is explicitly deleted. Its main purpose is to release resources that the object may have acquired during its lifetime, such as memory, file handles, or network connections.

// Key Points:
// Syntax: A destructor has the same name as the class but is prefixed with a tilde ~. It does not take any parameters or return a value.

// ~ClassName() {
//     // cleanup code
// }

// Automatic Call: The destructor is called automatically when an object is destroyed, ensuring resources are cleaned up.
// Use Case:
// Releasing Memory: If your object dynamically allocates memory (e.g., using new), the destructor should free this memory using delete.
// Closing Files/Connections: If an object opens a file or a network connection, the destructor ensures the file is closed or the connection is terminated when the object is no longer needed.
// Example:

// class FileHandler {
// public:
//     FileHandler() {
//         // Open file
//     }
//     ~FileHandler() {
//         // Close file when object is destroyed
//         cout << "File closed!" << endl;
//     }
// };
// The destructor helps prevent resource leaks and ensures a clean, efficient program.

#include<iostream>
using namespace std;

class Student {
public:
string name;
int cgpa;
long long *fees;

Student(){
     //setting default initial values
     name = "Sejal";
     fees = new long long;
     *fees = 1328290.00;

    cout<<"Contructor is called "<<endl;
}
// jo bhi memories maine dynamically li hai un memories ko ye relaese krata hai
// it is an instance member function that is invoked automatically whenever an object is
//goint to be destroyed it it is an last function going to be called before an object is destroyed
~Student(){
    delete fees;
  cout<<"Destructor is called"<<endl;
}

};

int main(){
   Student s1;
}







