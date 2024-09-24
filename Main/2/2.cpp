//  Count occurrence of alphabets in a given sentence.

#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype>  // for tolower

using namespace std;

int main() {
    string sentence="hello how ARe you";
    unordered_map<char, int> alphabetCount;  // HashMap to store count of each alphabet

    // Loop through the sentence
    for (char ch : sentence) {
        if (isalpha(ch)) {  // Check if the character is an alphabet
            ch = tolower(ch);  // Convert to lowercase for case-insensitive counting
            alphabetCount[ch]++;  // Increment count for the corresponding alphabet
        }
    }

    // Display the count of each alphabet
    for (auto pair : alphabetCount) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
