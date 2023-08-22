/*
This program is made by FCAI student Ahmed Wael | ID: 20210045
 This program checks if the next number in the array is double the previous.
 Last Modified: 20/12/2022 9:30 PM.
 */
#include <iostream>
using namespace std;
int nextIsDouble(const int data[], int size) {
    int count = 0;
    for (int i = 0; i < size - 1; i++) {
        if (data[i + 1] == data[i] * 2) {
            count++;
// If the upcoming number is equal to double the previous add 1 to the count.
        }
    }
    return count;
}
// Function prototype that checks if the next number in the array is double the previous, it takes two parameters and
// returns one variable which is count.
int main() {
    int size;
    // Declaring the variable size which we will put for the array.
    cout << "Enter size of array: " << endl;
    cin >> size;
// Get the size from user.
    int *data = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << i << ": " << endl;
        cin >> data[i];
    }
// Pointer to integer in the array to fill the array by user according to the size previously entered by user.
    int count = nextIsDouble(data, size);
// Call the function that checks if next is double and return the count.
    cout << "Number of elements followed by double: " << count << endl;
// Show count to user.
    return 0;
}
