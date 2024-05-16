// Take  Character input and write a program to check whether the character is vowel or consonent
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter Alphabet Character: ";
    cin >> ch;
    int ascii = (int)ch;
    if (ascii > 64 && ascii < 91 || ascii > 96 && ascii < 134)
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            cout << " The given Character " << ch << " is Vowel";
        }
        else
        {
            cout << "The given Character " << ch << " is Consonent";
        }
    }
    else
    {
        cout << ch << " Is not an Alphabet character";
    }
}