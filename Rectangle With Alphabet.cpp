/*
 This program is made by FCAI student Ahmed Wael | ID: 20210045
 This program draws a rectangular shape based on its given dimensions.
 Last Modified: 2/12/2022 12:36 AM.
 */
#include <iostream>
#include <string>

using namespace std;

int length, width;
const string alphabet ={"abcdefghijklmnopqrstuvwxyz"};
// Declaring needed variables.
int main(){
    cout << "Hello Dear user, would you enter the length and width with a whitespace between them:\n";
    cin >> length >> width;
// Take input from user.
    for (int i = 1; i <= length; i++){
        //Loop on rows.
    for (int j = 1; j <= width; j++){
        //Loop on column.
        if (i == 1 || i == length || j == 1 || j == width){
            cout << alphabet[i-1];
        }
        else{
            cout << " ";
        }
        // If the number iterating is 1 or the length or width maximum value then print the equivalent from the alphabet
        // string array, and for other iterations inside the loop print a whitespace to get a rectangle figure.
    }
    cout << endl;
    }
return 0;
}