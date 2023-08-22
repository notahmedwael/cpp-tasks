/*
 This program is made by FCAI student Ahmed Wael | ID: 20210045
 This is an ATM program.
 Last Modified: 12/11/2022 11:40 PM
 */
#include <iostream>
#include <string>
using namespace std;
char Menu1Choice, Menu2Choice;
string NationalID, NewNationalID;
double Balance, WithdrawBalance, DepositBalance;
string Password, NewPassword;
// Declaring needed variables.
void Withdraw(){
cout << "How much would you like to withdraw?\n ";
cin >> WithdrawBalance;
if (WithdrawBalance > Balance){
    cout << "You don't have enough balance, Please try again..\n";
}else if (WithdrawBalance <=0 ) {
    cout << "You can't withdraw 0 or a -ve number, Please try again..\n";
}else{
    Balance -= WithdrawBalance;
    cout << "Your balance has been updated and now it is: " << Balance;
}
// Function that withdraws money from the balance and checks if the desired withdrawal is greater than the balance then the withdrawal proposal is rejected or if the withdrawal is 0 or -ve.
// If the user has enough money then withdrawal is accepted and new balance is printed to the user.
}
void Deposit(){
    cout << "How much would you like to deposit?\n ";
    cin >> DepositBalance;
    if(DepositBalance <= 0){
        cout << "You can't deposit 0 or -ve number, Please try again..\n";
    }else{
        Balance += DepositBalance;
        cout << "Your balance has been updated and now it is: " << Balance;
    }
}
// Function that deposits money to your balance, but first it is checked if the deposit is 0 or -ve number then it's rejected & if not the deposit is accepted.
// If it is accepted then balance gets updated and printed to the user.
void ShowBalance(){
    cout << "Your balance is: " << Balance;
}
// Function that shows current balance to the user.
void Menu2(){
    do {
        cout << "What would you like to do: \n" << "1- Withdraw Money\n" << "2- Deposit Money\n" << "3- Require balance\n" << "4- Quit\n";
        cin >> Menu2Choice;
        switch (Menu2Choice) {
            case '1':
                Withdraw();
                break;
            case '2':
                Deposit();
                break;
            case '3':
                ShowBalance();
                break;
            case '4':
                exit(0);
            default:
                cout << "Invalid operation, Please try again..\n";
                break;
        }
    } while(true);
}
// 2nd menu function that calls other functions to withdraw money, deposit money, show balance, or quit the program.
void Login(){
    cout <<"Thank you for filling in your data, now time to login :D \n" << "Please enter your 14 digit national ID: \n";
    cin >> NewNationalID;
    cout << "Please enter your password: \n";
    cin >> NewPassword;
    if(NationalID == NewNationalID && Password == NewPassword){
        Menu2();
    }else{
     cout << "Your login attempt does not match our records please try again..\n";
    }
}
// Login function that makes sure that the data you entered when you created your account matches the data you put in the Login.
void CreateAccount(){
    cout << "Please enter your National ID (14 digit): \n";
    cin >> NationalID;
    if (NationalID.size() != 14){
        cout <<"The ID you entered isn't 14 digit!\n" << "Please try again..\n";
        exit(0);
    }
    cout << "Please enter your password (8 characters at least & 1st character is uppercase): \n";
    cin >> Password;
    if(Password.size() > 8 && islower(Password[0]) ){
        cout << "The password you entered is either less than 8 characters or the 1st character is not uppercase.\n";
        exit(0);
    }
    cout << "Please enter your Balance: \n";
    cin >> Balance;
    if (Balance <= 0){
        cout << "Your balance cannot be 0 or -ve, Please try again.\n";
        exit(0);
    }
    Login();
}
// Function that lets you create your account and makes sure that every thing is in its valid range and according to input rules given to the user.
void Menu1(){
    do {
        cout << "Hello Dear User :D \n" << "What would you like to do: \n" << "1- Create an account\n" << "2- Login\n"
             << "3- Quit\n";
        cin >> Menu1Choice;
        switch (Menu1Choice) {
            case '1':
                CreateAccount();
                break;
            case '2':
                Login();
                break;
            case '3':
                cout << "Thanks for using the program..\n";
                exit(0);
            default:
                cout << "Invalid choice!!\n" << "Please try again\n";
                break;
        }
    }while(true);
}
// Main menu function that makes you create an account then login with it or quit the program
int main(){
    Menu1();
}
// Driver function that calls the main menu then the program flows.