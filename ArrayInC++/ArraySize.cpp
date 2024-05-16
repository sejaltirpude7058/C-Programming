//To get the size of an array we can use the sizeof operator
#include<iostream>
using namespace std;
int main(){
    int MyArr[] = {32, 90, 6, 56, 12, 5, 78};
    int n = sizeof(MyArr);
    cout<<n<<endl;

    //To find out how many element an array has
    //we need to divide rhe size of an array to the size of datatype it contains
    cout<<sizeof(MyArr)/sizeof(MyArr[0]);

}