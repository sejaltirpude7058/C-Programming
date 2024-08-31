// Input a string of length less than 10 and convert it into integer without using builtin function.
// Input : "3244"
// Output : 3244
// Input : "12"
// Output : 12

#include<iostream>
#include<string>
using namespace std; 
int main(){
    string str;
    cout<<"Enter string: ";
    cin >> str;
    int val = 0, p  = 1;
    while (str.size())
    {
        val += p * (str.back() - '0');
        str.pop_back();
        p *= 10;
}
cout << val;


// This function returns a direct reference to the last character of the string. This shall only be used on non-empty strings.
// This can be used to access the last character of the string as well as to append a character at the end of the string. Length of the string remains unchanged after appending a character, last character of string gets replaced by the new one


// Accessing last character
// char end_char = str.back();

// Appending character at end of string
// str.back() = '#';
// Parameter: This function takes no parameter

// Return value: A reference to the last character in the string

// Exception: If the string is empty it shows undefined behavior.


// Dry Run
// Initial Setup:

// str = "1234"
// val = 0 (This will store the final integer value.)
// p = 1 (This represents the place value, starting with 1 for the units place.)

// First Iteration:
// str.back() gives the last character '4'.
// '4' - '0' converts '4' to the integer 4.
// val += p * 4 => val = 0 + 1 * 4 = 4.
// str.pop_back() removes the last character, so str = "123".
// p *= 10 => p = 1 * 10 = 10.

// Second Iteration:
// str.back() gives the last character '3'.
// '3' - '0' converts '3' to the integer 3.
// val += p * 3 => val = 4 + 10 * 3 = 34.
// str.pop_back() removes the last character, so str = "12".
// p *= 10 => p = 10 * 10 = 100.
// Third Iteration:

// str.back() gives the last character '2'.
// '2' - '0' converts '2' to the integer 2.
// val += p * 2 => val = 34 + 100 * 2 = 234.
// str.pop_back() removes the last character, so str = "1".
// p *= 10 => p = 100 * 10 = 1000.
// Fourth Iteration:

// str.back() gives the last character '1'.
// '1' - '0' converts '1' to the integer 1.
// val += p * 1 => val = 234 + 1000 * 1 = 1234.
// str.pop_back() removes the last character, so str = "".
// p *= 10 => p = 1000 * 10 = 10000.
// End of Loop:

// The string str is now empty, so the loop ends.

}