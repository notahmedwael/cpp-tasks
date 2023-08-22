/*
 This program is made by FCAI student Ahmed Wael | ID: 20210045
 This program outputs letter of the string "A string." using pointers, also outputs the index of pointer.
 Last Modified: 30/12/2022 4:00 PM.
*/
#include <iostream>
using namespace std;

int main() {
    const char str[] = "A String.";
    //Declaring the string.
    const char* pstr;
    //Declaring pointer.
    pstr = &str[0];
    //Pointer points to the beginning of the string (References to first letter "A").
    cout << *pstr << " " << (pstr - str) << " " << *(pstr + 3) << endl;
    // Dereference the first letter "A", put a space, then print index with the operator "-", Add 3 to the pointer and dereference it to print "t".
    pstr += 2;
    // Update pointer position +2 to the old position (Now points to "S").
    cout << (pstr - str) << " " << *(pstr + 2) << " " << *(pstr + 5) << endl;
    // Print index position of the pointer which is the third but will print 2 because the string is defined as an array of characters so 0 is the first index,
    //Put a space, then add 2 to the pointer 
    return 0;
}