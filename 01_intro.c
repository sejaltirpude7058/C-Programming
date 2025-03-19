/*

What is C Programming?
-> c is a Programming Language.
   c was designed and written by Dennis Ritchie in 1972 at AT&T's bell laboratory of USA
   c is considerd as middle-level programming language becuase it combines features of both high level (easy to read syntax) and low level (direct hardware manipulation) programming language
   c is simple efficeint , platform independed (portable), flexible language
   c is case senstive var and VAR are diffrent
   c is used in developing operating systems(UNIX, Linux kernal), embedded systems, network and telecommunications

what is variable?
-> variable is used to store data values
   variable is the name given to memory location through which we can access and prform actions
   the data stored in a variable can varry throughout program.
   variables in c are case senstive

what is characterset?
-> character set refers to the collection of characters which includes letters, digits, special charaters 

what is datatype?
-> data type specifies what type of data is going to be stored in a variable

what is format specifiers?
-> Format specifiers are placeholders used in printf() and scanf() to specify the data type of a variable

Datatypes and there size in c with format specifiers
-> 
int                4 bytes        %d
float              4 bytes        %f
char               1 byte         %c
double             8 bytes        %lf 
unsigned char      1 bytes
enum               4 bytes
short int          2 bytes
unsigned long      4 bytes
long double        12 to 16 bytes


variable naming conventions :
-> 
 variable name should always start with letters (a to z) or (A to Z)
 c keyword cannot be a variable name
 cannot start with numbers 
 cannot use special charaters except underscore ( _ )
 variable name should be meaningfull and readable

variable declaration 
->
syntax

data_type variable_name = value;

*/

//basic program using c

#include <stdio.h> //#include is a preprocessor directive used to include the standard input output header file
int main(){ // main is the entry point of the program
    //printf is used to print the output to the console
    printf("Hello World");//output -> Hello World

    int age; //variable declaration
    printf("Enter your age: "); 
    
    // scanf is used to take the input from the user
    scanf("%d ", &age); //& is used to get the address of the variable

    printd("your age is %d ", age);
}
