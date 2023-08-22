/*
 This program is made by FCAI student Ahmed Wael | ID: 20210045
 This program tells you your age by years, months, and days.
 Last Modified: 11/11/2022 2:36 PM
 */
#include <iostream>
using namespace std;
int BirthYear, BirthMonth, BirthDay, PresentYear, PresentMonth, PresentDay, BirthToDays, PresentToDays, BirthToPresent, Year, Month, Day;
char DisplayChoice;
int NewMonth[]={10, 11 , 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
// Declaring needed variables for the program, also declaring the month array which is needed in the calculations.
void FinalYear(){
    Year = BirthToPresent/365.25;
    cout << "Your age by years is: " << Year << '\n';
}
// Function that turns difference between current date and birthdate to age by years.
void FinalMonth(){
    Month = (BirthToPresent-(Year*365.25))/30.416;
    cout << "Your age by months is: " << Month << '\n';
}
// Function that turns difference between current date and birthdate to age by months.
void FinalDay(){
    Day = BirthToPresent - Year * 365.25 - 30.416 * Month;
    cout << "Your age by days is: " << Day << '\n';
}
// Function that turns difference between current date and birthdate to age by days.
void FinalAge(){
    cout << "Your age by years / months / days is: " << BirthToPresent/365.25 << " / "  << (BirthToPresent-(Year*365.25))/30.416 << " / " <<  BirthToPresent - Year * 365.25 - 30.416 * Month << '\n';
}
// Function that turns difference between current date and birthdate to age by full date fom YYYY MM DD.
void DisplayHandler(){
    cout <<"How do you want your age display? " << '\n' << "1- Years" << '\n' << "2- Months " << '\n' << "3- Days" << '\n' << "4- Years / Months / Days" << '\n';
    cin.ignore();
    cin >> DisplayChoice;
    switch (DisplayChoice) {
        case '1':
            FinalYear();
            break;
        case '2':
            FinalMonth();
            break;
        case '3':
            FinalDay();
            break;
        case '4':
            FinalAge();
            break;
        default:
            cout << "Invalid operation!!" << '\n' << "Please try again" << '\n';
            break;
    }
}
// Function that calls the display age functions according to user choice.
void FinalDate(){
    BirthToPresent = PresentToDays - BirthToDays;
    DisplayHandler();
}
// Function that returns the difference between present day and birthday.
void JDNpresent() {

    PresentToDays = (365 * PresentYear) + (PresentYear / 4) - (PresentYear / 100) + (PresentYear / 400) +
                    ((153 * PresentMonth + 2) / 5) + PresentDay;
    FinalDate();
}
// Function that turns present day into days.
void JDNbirth() {

    BirthToDays =
            (365 * BirthYear) + (BirthYear / 4) - (BirthYear / 100) + (BirthYear / 400) + ((153 * BirthMonth + 2) / 5) +BirthDay;
    JDNpresent();
}
// Function that turns birthday into days.
void ValidateDates(){
    if (BirthYear > PresentYear){
        cout << "A date can't be negative!!" << '\n' << "Please try again..." << '\n';
    }else if (BirthMonth > 12){
        cout << "Please put a valid birth month" << '\n';
    }else if (PresentMonth > 12){
        cout << "Please put a valid present month" << '\n';
    }else if (BirthDay > 31){
        cout << "Please put a valid birth day" << '\n';
    }else if (PresentDay > 31){
        cout << "Please put a valid present day" << '\n';
    }else if (BirthMonth < 0){
        cout << "Please put a valid birth month" << '\n';
    }else if (BirthYear < 0){
        cout << "Please put a valid birth year" << '\n';
    }else if (BirthDay < 0){
        cout << "Please put a valid birth day" << '\n';
    }else if (PresentYear < 0){
        cout << "Please put a valid present year" << '\n';
    }else if (PresentMonth < 0){
        cout << "Please put a valid present month" << '\n';
    }else if (PresentDay < 0){
        cout << "Please put a valid present day" << '\n';
    }
    else{
        JDNbirth();
    }
}
// Function that validates that dates are in their correct ranges.
int main(){
    cout << "Welcome Dear User :D" << '\n' << "Can you enter your birth date in the following form YYYY MM DD: " << '\n';
    cin >> BirthYear >> BirthMonth >> BirthDay;
    BirthMonth = NewMonth[BirthMonth-1];
    cout << "Thanks for entering your birth date, Now enter today's date in the same form: " << '\n';
    cin >> PresentYear >> PresentMonth >> PresentDay;
    PresentMonth = NewMonth[PresentMonth-1];
    ValidateDates();
}
// Main function that takes user input and then validates the dates, and then the program works in a flowing system.
