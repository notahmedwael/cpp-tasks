/*
This program is made by FCAI student Ahmed Wael | ID: 20210045
This program checks if a string is palindrome or not.
Last Modified: 20/12/2022 10:00 PM.
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool isPalindrome(string str) {
//Function prototype with the body of function.
    str.erase(remove(str.begin(), str.end(), ' '), str.end());
// Remove spaces from the string.
    transform(str.begin(), str.end(), str.begin(), ::tolower);
// Turn the string into lowercase.
    for (int i = 0; i < str.length()/2; i++) {
        if (str[i] != str[str.length()-i-1]) {
            return false;
        }
    }
    return true;
}
// Check if the string is a palindrome, iterates over the first half of the string and compares it with the other half
// from the end if any letter is not equal to its equivalent on the other side, the function returns false, but if they
// are equal the function returns true.
int main() {
    string input;
    cout << "Enter a string: " <<endl;
    getline(cin, input);
// Take the string from the user.
    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
// If the palindrome function returns true, print to the user that the string is palindrome.
    } else {
        cout << "The string is not a palindrome." << endl;
    }
// If the palindrome function returns false, print to the user that the string is not palindrome.
    return 0;
}
