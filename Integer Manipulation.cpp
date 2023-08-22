/*
 This program is made by FCAI student Ahmed Wael | ID: 20210045
 This program does some functions on the integer number you enter.
 Last Modified: 2/12/2022 1:12 PM.
 */
#include <iostream>
#include <string>
using namespace std;

long long integer, DigitSum, Reversed_Number;
int DigitTotal;
//Declaring needed variables.
void NumOfDigits(){
    long long temp;
    temp = integer;
for (DigitTotal=0; temp>0; DigitTotal++){
    temp /= 10;
}
}
//Function that gets the number of digits in an integer.
void SumOfDigits(){
    long long Remainder;
    long long temp;
    temp = integer;
for (DigitSum = 0; temp > 0; temp /= 10){
Remainder = temp % 10;
DigitSum += Remainder;
}
}
//Function that gets the sum of an integer's digits
void AverageOfEven(){
    long long  Remainder, temp;
    double EvenDigitSum;
    temp = integer;
    NumOfDigits();
    for (EvenDigitSum = 0; temp > 0; temp /= 100){
        Remainder = temp % 10;
        EvenDigitSum += Remainder;
    }
    cout << "The average of even digits is: " << EvenDigitSum/(DigitTotal/2) << endl << endl;
}
//Function that gets the average of the digits at even places
void AverageOfOdd(){
    long long  Remainder, temp;
    double OddDigitSum;
    temp = integer;
    NumOfDigits();
    for (OddDigitSum = 0; temp > 0; temp /= 100) {
        Remainder = temp % 10;
        if(Remainder % 2 == 0){
            continue;
        }
        else if(Remainder % 2 != 0){
            OddDigitSum += Remainder;
        }
    }
    cout << "The average of odd digits is: " << OddDigitSum/(DigitTotal/2) << endl << endl;
}
//Function that get average of the digits at odd places.
void DigitRepeatTimes(){
    int Digit;
    int DigitCount = 0;
    long long Remainder;
    long long temp;
    temp = integer;
    cout << "What digit do you want to see how time is it repeated? \n";
    cin >> Digit;
    while(temp > 0) {
        Remainder = temp % 10;
        if(Remainder == Digit){
            DigitCount++;
        }
        temp /= 10;
    }
    cout << "The number of repetition of the digit  " << Digit << " is: " << DigitCount << " times" << endl;
}
//Function that gets how many times a certain digit is repeated.
void ReverseTheNumber(){
    long long  Remainder, temp;
    temp = integer;
    while(temp > 0) {
        Remainder = temp % 10;
        Reversed_Number = Reversed_Number * 10 + Remainder;
        temp /= 10;
    }
}
//Function that reverses the number
void Median(){
    string NewInteger = to_string(integer);
    if (NewInteger.length() % 2 == 0){
        cout << "The middle digit is: " << (((NewInteger[(NewInteger.length()-1)/2]))+(NewInteger[((NewInteger.length())/2)]))/2 <<endl;
    }else if(NewInteger.length() % 2 !=0){
        cout << "The middle digit is: " << NewInteger[NewInteger.length()/2] << endl;
    }
}
//Function that returns the median of the integer entered by user.
void NewNumber(){
    cout << "Enter your new number: " << endl;
    cin >> integer;
}
//Function that lets the user enter another integer
void DisplayMenu() {
    int DisplayChoice;
    do {
        cout << "1.Find number of digits of a number.\n "
                "2.Get the sum of all digits of a number.\n"
                "3.Get the average of even digits in a number.\n"
                "4.Get the average of odd digits in a number.\n"
                "5.Get the number of times a certain digit is repeated in a number.\n"
                "6.Get another number that has the number's digits reversed.\n"
                "7.Find the digit in the middle, or the average of the two digits in the middle if the number is even.\n"
                "8.Enter a new number.\n"
                "9.Exit the program.\n";
        cin >> DisplayChoice;
        switch (DisplayChoice) {
            case 1:
                NumOfDigits();
                cout << "Number of digits in the number is: " << DigitTotal << endl;
                break;
            case 2:
                SumOfDigits();
                cout << "Sum of digits is: " << DigitSum << endl;
                break;
            case 3:
                AverageOfEven();
                break;
            case 4:
                AverageOfOdd();
                break;
            case 5:
                DigitRepeatTimes();
                break;
            case 6:
                ReverseTheNumber();
                cout << "The number after it has been reversed is " << Reversed_Number << endl;
                break;
            case 7:
                Median();
                break;
            case 8:
                NewNumber();
                break;
            case 9:
                cout << "Thanks for using the program!";
                exit(0);
            default:
                cout << "Invalid operation, Please try again..\n" << endl;
                break;
        }
    }while(true);
}
//Menu for the user to choose from
int main(){
cout << "Enter an integer: \n";
cin >> integer;
DisplayMenu();
}
//Driver code