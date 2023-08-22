/*
 This program is made by FCAI student Ahmed Wael | ID: 20210045
 This program computes net salary after deducing taxes and absence hours.
 Last Modified: 11/11/2022 11:40 PM
 */
#include <iostream>
using namespace std;
double HourlyGrossSalary, GrossSalary, AbsenceHours, Tax, SalaryPostAbsence, NetSalary;
// Declaring needed variables.
void FinalTax(){
    NetSalary = SalaryPostAbsence - Tax;
    cout << "Tax = "<< Tax << '\n' << "Your net salary is: " << NetSalary;
}
// Function that computes net salary after deducing taxes and absence hours then outputs tax and net salary.
void CalcTax() {
    if (0 < GrossSalary && GrossSalary <= 2500) {
        Tax = (SalaryPostAbsence-2500 * (0.025));
    }else if(2500 < GrossSalary && GrossSalary <= 6000){
        Tax = ((2500 * (0.025)) + ((SalaryPostAbsence-3500) * (0.1)));
    }else if(6000 < GrossSalary && GrossSalary <= 16000){
        Tax = ((2500 * (0.025)) + (3500 * (0.1)) + ((SalaryPostAbsence-(2500+3500)) * (0.15)));
    }else{
       Tax =  ((2500 * (0.025)) + (3500 * (0.1)) + (10000 * (0.15)) + ((SalaryPostAbsence - (2500 + 3500 +10000)) * (0.2)));
    }
    FinalTax();
}
// Function that computes taxes.
void DeduceAbsence(){
    SalaryPostAbsence = GrossSalary - (AbsenceHours * HourlyGrossSalary);
    CalcTax();
}
// Function that computes absence hours and deduces it from Monthly gross salary.
int main (){
    cout << "Hello dear employee :D" << '\n' << "Can you enter your hour salary: " << '\n';
    cin >> HourlyGrossSalary;
    GrossSalary = HourlyGrossSalary * (22 * 8);
    cout << "Thank you, now can you enter your absence hours: " << '\n';
    cin >> AbsenceHours;
    DeduceAbsence();
}
// Main program that takes hour pay rate and absence hours from user then proceeds to deduce taxes and absence hours.