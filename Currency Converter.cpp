/*
 This program is made by FCAI student Ahmed Wael | ID: 20210045
 This program converts between currencies and each other; supported currencies are EGP, USD, EUR, SR, AED.
 Last Modified: 8/11/2022 1:42 AM
 */
#include <iostream>
using namespace std;
char CurrencyIn, CurrencyOut;
double MoneyAmountIn, MoneyAmountOut;
// Declaring needed variables
void EGPToUSD(){
    MoneyAmountOut = MoneyAmountIn * 24.32;
    cout << "Your balance after converting from EGP to USD is: " << MoneyAmountOut << " Dollar" << '\n';
}

void EGPToEUR(){
    MoneyAmountOut = MoneyAmountIn * 24.39;
    cout << "Your balance after converting from EGP to EUR is: " << MoneyAmountOut << " Euro" << '\n';
}

void EGPToSAR(){
    MoneyAmountOut = MoneyAmountIn * 6.47;
    cout << "Your balance after converting from EGP to SAR is: " << MoneyAmountOut << " Saudi Riyal" << '\n';
}

void EGPToAED(){
    MoneyAmountOut = MoneyAmountIn * 6.59;
    cout << "Your balance after converting from EGP to AED is: " << MoneyAmountOut << " AED" << '\n';
}

// Functions that convert from EGP to other different currencies.
void USDToEGP(){
    MoneyAmountOut = MoneyAmountIn * (1/24.32);
    cout << "Your balance after converting from USD to EGP is: " << MoneyAmountOut << " Egyptian Pound" << '\n';
}

void USDToEUR(){
    MoneyAmountOut = MoneyAmountIn * 1;
    cout << "Your balance after converting from USD to EUR is: " << MoneyAmountOut << " Euros" << '\n';
}

void USDToSAR(){
    MoneyAmountOut = MoneyAmountIn * (1/3.76);
    cout << "Your balance after converting from USD to SAR is: " << MoneyAmountOut << " Saudi Riyal" << '\n';
}

void USDToAED(){
    MoneyAmountOut = MoneyAmountIn * (1/3.67);
    cout << "Your balance after converting from USD to AED is: " << MoneyAmountOut << " AED" << '\n';
}

// Functions that convert from USD to other currencies.
void EURToEGP(){
    MoneyAmountOut = MoneyAmountIn * (1/24.39);
    cout << "Your balance after converting from EUR to EGP is: " << MoneyAmountOut << " E£" << '\n';
}

void EURToUSD(){
    MoneyAmountOut = MoneyAmountIn * 1;
    cout << "Your balance after converting from EUR to USD is: " << MoneyAmountOut << " Dollar" << '\n';
}

void EURToSAR(){
    MoneyAmountOut = MoneyAmountIn * (1/3.77);
    cout << "Your balance after converting from EUR to SAR is: " << MoneyAmountOut << " Saudi Riyal" << '\n';
}

void EURToAED(){
    MoneyAmountOut = MoneyAmountIn * (1/3.68);
    cout << "Your balance after converting from EUR to AED is: " << MoneyAmountOut << " AED" << '\n';
}

// Functions that convert from EUR to other currencies.
void SARToEGP(){
    MoneyAmountOut = MoneyAmountIn * (1/6.47);
    cout << "Your balance after converting from SAR to EGP is: " << MoneyAmountOut << " Egyptian Pound" << '\n';
}

void SARToUSD(){
    MoneyAmountOut = MoneyAmountIn * (3.67);
    cout << "Your balance after converting from SAR to USD is: " << MoneyAmountOut << " Dollar" << '\n';
}

void SARToEUR(){
    MoneyAmountOut = MoneyAmountIn * (3.77);
    cout << "Your balance after converting from SAR to EUR is: " << MoneyAmountOut << " Euro" << '\n';
}

void SARToAED(){
    MoneyAmountOut = MoneyAmountIn * (0.98);
    cout << "Your balance after converting from SAR to AED is: " << MoneyAmountOut << " AED" << '\n';
}

// Functions that convert from SAR to other currencies.
void AEDToEGP(){
    MoneyAmountOut = MoneyAmountIn * (1/.59);
    cout << "Your balance after converting from AED to EGP is: " << MoneyAmountOut << " Egyptian pound" << '\n';
}

void AEDToUSD(){
    MoneyAmountOut = MoneyAmountIn * (3.67);
    cout << "Your balance after converting from AED to USD is: " << MoneyAmountOut << " Dollar" << '\n';
}

void AEDToEUR(){
    MoneyAmountOut = MoneyAmountIn * (3.68);
    cout << "Your balance after converting from AED to EUR is: " << MoneyAmountOut << " Euro" << '\n';
}

void AEDToSAR(){
    MoneyAmountOut = MoneyAmountIn * 1.02;
    cout << "Your balance after converting from AED to SAR is: " << MoneyAmountOut << " Saudi Riyal" << '\n';
}

// Functions that convert from AED to other currencies.

void handleCurrency() {
    cout << "What Currency do you want to convert to?" << '\n' << "1-EGP" << '\n' << "2-USD" << '\n' << "3-EUR" << '\n'
         << "4-SAR" << '\n' << "5-AED" << '\n';
    cin >> CurrencyOut;
    switch (CurrencyOut) {
        case '1':
            if(CurrencyIn == '1'){
                cout << "You can't convert to the same currency !" << '\n' << "Please try again..." << '\n';
            }

            else if(CurrencyIn == '2'){
                EGPToUSD();
            }

            else if(CurrencyIn == '3'){
                EGPToEUR();
            }

            else if(CurrencyIn == '4'){
                EGPToSAR();
            }

            else if (CurrencyIn == '5'){
                EGPToAED();
            }

            else{
                cout << "Invalid operation!" << '\n' << "Please try again..." << '\n';
            }
            break;
        case '2':
            if(CurrencyIn == '1'){
                USDToEGP();
            }
            else if(CurrencyIn == '2'){
                cout << "You can't convert to the same currency !" << '\n' << "Please try again..." << '\n';
            }
            else if(CurrencyIn == '3'){
                USDToEUR();
            }
            else if(CurrencyIn == '4'){
                USDToSAR();
            }
            else if(CurrencyIn== '5'){
                USDToAED();
            }
            else{
                cout << "Invalid operation!" << '\n' << "Please try again..." << '\n';
            }
            break;
        case '3':
            if(CurrencyIn == '1'){
                EURToEGP();
            }
            else if(CurrencyIn == '2'){
                EURToUSD();
            }
            else if(CurrencyIn == '3'){
                cout << "You can't convert to the same currency !" << '\n' << "Please try again..." << '\n';
            }
            else if(CurrencyIn == '4'){
                EURToSAR();
            }
            else if(CurrencyIn == '5'){
                EURToAED();
            }
            else{
                cout << "Invalid operation!" << '\n' << "Please try again..." << '\n';
            }
            break;
        case '4':
            if(CurrencyIn == '1'){
                SARToEGP();
            }

            else if(CurrencyIn == '2'){
                SARToUSD();
            }

            else if(CurrencyIn =='3'){
                SARToEUR();
            }

            else if(CurrencyIn == '4'){
                cout << "You can't convert to the same currency !" << '\n' << "Please try again..." << '\n';
            }

            else if(CurrencyIn == '5'){
                SARToAED();
            }

            else{
                cout << "Invalid operation!" << '\n' << "Please try again..." << '\n';
            }
            break;
        case '5':
            if(CurrencyIn == '1'){
                AEDToEGP();
            }

            else if(CurrencyIn == '2'){
                AEDToUSD();
            }

            else if(CurrencyIn == '3'){
                AEDToEUR();
            }

            else if(CurrencyIn == '4'){
                AEDToSAR();
            }

            else if(CurrencyIn == '5'){
                cout << "You can't convert to the same currency !" << '\n' << "Please try again..." << '\n';
            }

            else{
                cout << "Invalid operation!" << '\n' << "Please try again..." << '\n';
            }
            break;
        default:
            cout << "Invalid operation!" << '\n' << "Please try again..." << '\n';
            break;
    }
    }
    // This function takes the desired currency that the user wants to convert to then it recalls the needed function to do so.
void GetMoney(){
    cout << "How much money do you have?" << '\n';
    cin >> MoneyAmountIn;
    if(MoneyAmountIn <= 0){
        cout << "You can't enter a negative number or a zero" << '\n';
    }
    handleCurrency();
}

// This function takes the balance of the user and refuses negative numbers and returns to the main menu.
int main() {
    do {
        cout << "Welcome Dear User :D" << '\n';
        cout << "What Currency do you want to convert from?" << '\n' << "1-EGP" << '\n' << "2-USD" << '\n' << "3-EUR"
             << '\n' << "4-SAR" << '\n' << "5-AED" << '\n' << "Or press E to exit." << '\n';
        cin >> CurrencyIn;
        GetMoney();
    } while (CurrencyIn != 'E' or 'e');
}

// Main function that takes the user currency which he has then organizes the whole program into a structured program that integrates together recalling other functions to perform operations.
