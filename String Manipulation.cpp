/*
 This program is made by FCAI student Ahmed Wael | ID: 20210045
 This program takes a string from user and applies some function from the user selection menu to it.
 Last Modified: 30/12/2022 7:00 PM.
*/

#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void menu();
void strlength(char* ptr);
void copystr(char* ptr);
void concstr(char* ptr);
void reversestr(char* ptr, string str);
void vow_consstr(char* ptr);
void sortstr(char* ptr, int length);
// Function prototypes.
int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int length = str.size();
    char* ptr = &str[0];
// Declaring the string entered by user, assign a pointer to the beginning of the string.  
    while(true){
    menu();
    int choice;
    cin >> choice;
// Take user choice in the menu and keep it running till the user decides to exit.
    switch (choice)
    {
    case 1:
        strlength(ptr);
// Return the length of the string.
        break;
    case 2:
        copystr(ptr);
// Copy the string into another string.       
        break;
    case 3:
        concstr(ptr);
// Concatenate another string to the first string.        
        break;
    case 4: 
        reversestr(ptr, str);
// Reverse the string.        
        break;
    case 5:
    vow_consstr(ptr);
//Count the number of vowels and consonants in the string.    
        break;
    case 6:
    sortstr(ptr, length);
// Sort the string alphabetically.    
        break;
    case 7:
    cout << "Enter a new string: ";
    getline(cin, str);
    ptr = &str[0];
// Enter a new string, then update the pointer to the beginning of the new string entered.    
        break;                   
    case 8:
        cout << "Thanks for using the program.." << endl;
        exit(0);
// Exit the program on user demand.        
    default:
        cout << "Invalid operation, Please try again.." << endl;
        break;
// Make user put another input if the input he entered is outside(1-8)         
    }
    }
}


void menu(){
    cout << "What would you like to do:\n"
    "1-Find the length of the string using pointers\n"
    "2-Copy this string to new string using pointers.\n"
    "3-Get another string from user and concatenate two strings using pointers.\n"
    "4-Find reverse of a string using pointers.\n"
    "5-Count the total number of vowels and consonants in a string using pointers.\n"
    "6-Sort character of a string in a new string using pointer.\n"
    "7-Enter a new string.\n"
    "8-Exit program.\n";
}
//User Menu

void strlength(char* ptr){
    int length = 0;
    while(*ptr){
        length++;
        ptr++;
    }
    cout << "Length of the string: " << length << endl;
}
// Iterate on the string and increase the length and pointer counter and then print the length

void copystr(char* ptr){
    string newstr;
    while(*ptr){
        newstr += *ptr;
        ptr++;
    }
    cout << "New string is: " << newstr << endl;
}

void concstr(char* ptr){
    string str2;
    cout << "Enter the new string: ";
    cin >> str2;
    char* ptr2 = &str2[0];
    string newstr;
    while(*ptr){
        newstr += *ptr;
        ptr++;
    }
    while(*ptr2){
        newstr += *ptr2;
        ptr2++;
    }
    cout << "The new concatenated string is: " << newstr << endl;
}


void reversestr(char* ptr, string str){
    string reversedstr;
    ptr += str.size()-1;
    while(ptr>=&str[0]){
        reversedstr += *ptr;
        ptr--;
    }
    cout << endl;
}


void vow_consstr(char* ptr){
    int vowels = 0, consonants = 0;
    while(*ptr){
    if(isalpha(*ptr)){
        if(isupper(*ptr)){
            *ptr = tolower(*ptr);
        }
        if(*ptr == 'a' || *ptr == 'e' || *ptr == 'i' ||*ptr == 'o' ||*ptr == 'u' ){
            vowels++;
        }
        else{
            consonants++;
        }
    }
    ptr++;
}
    cout << "Number of vowels is: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
}


void sortstr(char* ptr, int length){
    char sortedstr[length+1];
    for (int i = 0; i < length; i++) {
        sortedstr[i] = *ptr;
        ptr++;
}
    sortedstr[length]='\0';
    for (int i = 0; i < length; i++) {
        for (int j = i + 1; j < length; j++) {
            if (sortedstr[i] > sortedstr[j]) {
                char temp = sortedstr[i];
                sortedstr[i] = sortedstr[j];
                sortedstr[j] = temp;
}
}
}
    cout << "The sorted string is: " << sortedstr << endl;
}