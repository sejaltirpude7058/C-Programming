#include<iostream>
using namespace std;
class Course{
    public:
    int course_id;
    string duration;
    string course_name;
    int price;

    Course(){  //default constructor

    }
    
    Course( int i, string d, string cn, int p){
        course_id = i;
        course_name = cn;
        duration = d;
        price = p;
    }

};

void display(Course c){
    cout<<c.course_id<<" "<<c.course_name<<" "<<c.duration<<" "<<c.price<<endl;
}


int main(){
     Course c1(1, "3 months", "Java Programming", 3500);
     Course c2(2, "6 months", "Python Programming", 5500);
     Course c3(3, "9 months", "Data Analytics", 20000);
     Course c4(4, "1 month", "C#", 2500);
     Course c5(5, "6 months", "Web Development", 4500);
     Course c6(6, "12 months", "Full Stack Java Developer", 35000);
     
     //copying object details to another object
     Course c7 = c2; //deep copy
     c2.course_name = "Data Science & Machine learning";
     //output
    //  2 Data Science & Machine learning 6 months 5500
    //  2 Python Programming 6 months 5500
    //if we made changes in any of the one object the other object will not be affected 

    Course c8(c4); //copying constructor //deep copy
     //copying object details to another object
    //  display(c4);
    //  display(c8);
     //output
    //   4 C# 1 month 2500
    //   4 C# 1 month 2500
    //now if we made the changes in c8 object c4 object will be not affected it will remain same //deep copy
      c8.course_name = "Digital Marketing";
       display(c4);
       display(c8);
       //output
    //    4 C# 1 month 2500
    //    4 Digital Marketing 1 month 2500

    //  display(c2);
    //  display(c7);


}


