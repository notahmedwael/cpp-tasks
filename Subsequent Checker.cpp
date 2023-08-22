/*
This program is made by FCAI student Ahmed Wael | ID: 20210045
This program checks if a word is subsequent of another word.
Last Modified: 20/12/2022 10:30 PM.
*/
#include <iostream>
#include <string>
using namespace std;
bool hasSubsequence(const string& text, const string& subsequence) {
// Function prototype with body
    int i = 0;
// Index for text
    int j = 0;
// Index for subsequence
    while (i < text.length() && j < subsequence.length()) {
        if (text[i] == subsequence[j]) {
            i++;
            j++;
// Advance both indices if characters match
        } else {
            i++;
// Only advance the index for text if characters do not match
        }
    }
    return (j == subsequence.length());
// Return true if all characters in subsequence were found in text
}

int main() {
    string text;
    string subsequence;
// Declaring needed variables
    cout << "Enter a text string: ";
    getline(std::cin, text);
    cout << "Enter a subsequence: ";
    getline(std::cin, subsequence);
// Take input from user
    if (hasSubsequence(text, subsequence)) {
        cout << "The subsequence is present in the text." << endl;
// If the second word is subsequent of the first, print to the user that it's a subsequent.
    } else {
        cout << "The subsequence is not present in the text." << endl;
    }
// If the second word is not a subsequent of the first, print to the user that it's not a subsequent.
    return 0;
}
