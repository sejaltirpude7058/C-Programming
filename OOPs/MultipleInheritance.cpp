#include<iostream>
using namespace std;
class Cricketor{
    public:
    int totalRuns;
    int average;
    int wickets;
};

class Engineer{
    public:
   int experience;
   string domain;
};

class AllRounder : public Cricketor, public Engineer{
    public:
    string name;
};


int main(){
    AllRounder p1;
    p1.name = "Saurabh Netravalkar";
    p1.totalRuns = 24000;
    p1.average = 55;          
    p1.wickets = 300;        
    p1.experience = 5;        
    p1.domain = "Software";   

    cout << "Name: " << p1.name << endl;
    cout << "Total Runs: " << p1.totalRuns << endl;
    cout << "Average: " << p1.average << endl;
    cout << "Wickets: " << p1.wickets << endl;
    cout << "Experience: " << p1.experience << endl;
    cout << "Domain: " << p1.domain << endl;


    
};