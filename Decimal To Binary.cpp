/*
 This program is made by FCAI student Ahmed Wael | ID: 20210045
 This program converts decimal numbers to binary numbers.
 Last Modified: 1/12/2022 11:53 PM.
 */
#include <iostream>

using namespace std;
long long DecimalToBinary(int);
//Function that converts decimal to binary prototype.
int main() {
    int n;
    long long binary;
//Declaring needed variables.
    do {
        cout << "Enter a decimal number: \n";
        cin >> n;
//Getting input from user.
        binary = DecimalToBinary(n);
        cout << n << " is equivalent to " << binary << endl;
//Print result to the user.
    }while (n!=0);

}
long long DecimalToBinary(int n){
    long long binary = 0;
    int remainder, i = 1;

    do {
        remainder = n % 2;
        n /= 2;
        binary += remainder * i;
        i *= 10;
    }while(n!=0);

    return binary;
}
//1. Divide the decimal number by 2.
// 2. Get the integer quotient for the next iteration.
// 3. Get the remainder for the binary digit.
// 4. Repeat the steps (1 to 3) until the quotient is equal to 0.