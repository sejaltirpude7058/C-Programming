#include <iostream>
#include <string>

using namespace std;

string longestEvenWord(string sentence) {
    int maxLength = 0;
    string firstEvenWord = "00";
    string word = "";
    int wordLength = 0;

    for (int i = 0; i <= sentence.length(); i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            wordLength = word.length();
            if (wordLength % 2 == 0 && wordLength > maxLength) {
                maxLength = wordLength;
                firstEvenWord = word;
            }
            word = "";
        } else {
            word += sentence[i];
        }
    }

    return firstEvenWord;
}

int main() {
    string sentence = "Time to write great code";
    cout << longestEvenWord(sentence) << endl;
    return 0;
}
