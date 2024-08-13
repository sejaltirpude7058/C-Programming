//Algo for making user defined vector
//1. make class of vector with data members -> size, capacity and array pointer
//2. default constructor intialize start values to attributes
//3. make functions to add element (remember when size==capacity) we need to double the capacity
//4. to print elements
//5. to remove elements



#include<iostream>
using namespace std;
class Vector{
    public:
    int size;
    int capacity;
    int* arr;
 
 //default constructor
    Vector(){
      size = 0;
      capacity = 1;
       arr = new int[1];
    }
 
    void add(int element){
        if(size==capacity){
            capacity *= 2;
            int* arr2 = new int[capacity];
            for(int i=0; i<size; i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size] = element;
        size++;
    }

    void display(){
        for(int i=0; i<size; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    int get(int idx){
        if(size==0){
            cout<<"Array is empty";
            return -1;
        }

        if(idx>=size || idx<0){
            cout<<"Invalid index";
            return -1;
        }

        return arr[idx];
    }

    void remove(){
        size--;
    }

};



int main(){
     Vector v1;

     v1.add(10);
    //  v1.display();
    //  cout<<v1.size<<" "<<v1.capacity<<endl;
     v1.add(9);
    //  v1.display();
    //  cout<<v1.size<<" "<<v1.capacity<<endl;
     v1.add(8);
    //  v1.display();
    //  cout<<v1.size<<" "<<v1.capacity<<endl;
     v1.add(7);
    //  v1.display();
    //  cout<<v1.size<<" "<<v1.capacity<<endl;
     v1.add(6);
    //  v1.display();
    //  cout<<v1.size<<" "<<v1.capacity<<endl;
     v1.add(5);
    //  v1.display();
    //  cout<<v1.size<<" "<<v1.capacity<<endl;
     v1.add(4);
    //  v1.display();
    //  cout<<v1.size<<" "<<v1.capacity<<endl;
     v1.add(3);
    //  v1.display();
    //  cout<<v1.size<<" "<<v1.capacity<<endl;

    //  cout<<v1.get(4);
     v1.remove();
     v1.display();

}