// // Include necessary libraries
// #include <iostream>
// #include <vector>
// #include <sstream>

// // Use standard namespace
// using namespace std;

// // Function to find the longest even-length word in a sentence
// string longestEvenWord(string sentence) {
//     // Create an input string stream to split the sentence into words
//     istringstream iss(sentence);
//     // Variable to store the current word
//     string word;
//     // Initialize maximum length and first even word
//     int maxLength = 0;
//     string firstEvenWord = "00";

//     // Split the sentence into words and iterate over each word
//     while (iss >> word) {
//         // Check if the word's length is even and greater than the current maximum length
//         if (word.length() % 2 == 0 && word.length() > maxLength) {
//             // Update maximum length and first even word
//             maxLength = word.length();
//             firstEvenWord = word;
//         }
//     }

//     // Return the first even word with the maximum length, or "00" if no even-length words are found
//     return firstEvenWord;
// }

// // Main function
// int main() {
//     // Test sentence
//     string sentence = "Time to write great code";
//     // Call the function and print the result
//     cout << longestEvenWord(sentence) << endl;
//     return 0;
// }


#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>

using namespace std;

string longestEvenWord(string sentense){
    stringstream ss(sentense);

    
    string word = "0";

    int maxLength = 0;
    string firstEvenWord = "";

    while(ss >> word){

        if(word.length()%2==0 && word.length()>maxLength ){
            maxLength = word.length();
            firstEvenWord = word;
        }
    }

    return firstEvenWord;
}

int main(){
    string sen;
    cout<<"Enter String: ";
    getline(cin, sen);

    cout<<"The longest even word is "<<longestEvenWord(sen);
}

