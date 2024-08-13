#include<iostream>
using namespace std;
class Cricketor{
    public:
    string name;
    int runs;
    float avgRuns;
    
    // Parameterised constructor
    Cricketor(string name, int runs , float avgRuns){
       this->name = name;
       this->runs = runs;
       this->avgRuns = avgRuns;
    }
    
    //display print function inside class
    void display(){
        cout<<this->name<<" "<<this->runs<<" "<<this->avgRuns<<endl;
    }
 
    //function
    int matchesPlayed(){
        int totalMatches = this->runs/this->avgRuns;
        return totalMatches;
    }

};


int main(){

    Cricketor c1("Virat Kohli", 25000, 52.4);
    Cricketor c2("Rohit Sharma", 20000, 45.2);
    Cricketor c3("Sachin Tendulkar", 18000, 38.9);
    Cricketor c4("Hardik Pandya", 15000, 43.6);
    Cricketor c5("Bumrah", 10000, 36.3);

   //calling function
    c1.display();
    c4.display();

    cout<<c3.matchesPlayed()<<endl;
    cout<<c5.matchesPlayed();


}