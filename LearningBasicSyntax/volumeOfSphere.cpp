 //To Find Volume of Sphere = 4/3*pi*r*r*r
 #include<iostream>
 using namespace std;
 int main(){
    float radius;
    cout<<"Enter Radius: ";
    cin>>radius;
    const float pi = 3.1415;
    float volume = (4*pi*radius*radius*radius)/3;
    cout<<"The volume of sphere is "<<volume;
 }

 