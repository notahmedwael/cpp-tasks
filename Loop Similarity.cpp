/*
 This program is made by FCAI student Ahmed Wael | ID: 20210045
 This program checks if the word you enter is similar to "loop".
 Last Modified: 2/12/2022 1:11 PM.
 */
#include <iostream>
#include <string>
using namespace std;

string UserInput={};
char L='l',P ='p', O='o';
int l_count = 0, p_count = 0, o_count = 0;
//Declaring needed variables.

int main() {
    do {
        cout << "Enter a word to be compared to the word loop: \n";
        getline(cin, UserInput);
//Get input from user.
        for (int i = 0; i < UserInput.length(); ++i) {
            UserInput[i] = std::tolower(UserInput[i]);
        }
//Turn the string to lowercase to avoid input errors from the user.
        for (int i = 0; i < UserInput.length(); i++) {
            if (UserInput[i] == L) {
                l_count++;
            } else if (UserInput[i] == P) {
                p_count++;
            } else if (UserInput[i] == O) {
                o_count++;
            } else {
                cout << "The word does not contain the loop structure, Please try again" << endl;
                exit(0);
            }
//Iterate over the string array character by character and search for ('l', 'p', 'o') and calculate how many times they
// were repeated.
        }
        if (l_count + p_count == o_count && l_count == p_count) {
            cout << "Yes, The word " << UserInput << " is similar to -loop-" << endl;
        } else {
            cout << "No, The word " << UserInput << " is not similar to -loop-" << endl;
        }
//If the count of p plus the count of l equals the count of o and count of l equals count of p then the string entered
// by user matches the word -loop- and print "Yes" to the
// user, if not print "No" to the user.
    }while(true);
}