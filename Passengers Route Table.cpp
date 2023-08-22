/*
This program is made by FCAI student Ahmed Wael | ID: 20210045
This program makes a routed table for passengers using arrays.
Last Modified: 20/12/2022 9:45 PM.
*/
#include <iostream>
using namespace std;
const int NUM_ROUTES = 4;
const int NUM_DAYS = 5;
// Dimensions of the 2D array ==> 4 rows and 5 columns.
int main() {
    int bus[NUM_ROUTES][NUM_DAYS];
// Declare the array.
// Read the data into the array by columns.
    cout << "Give the number of passengers for day 1: ";
    for (int i = 0; i < NUM_ROUTES; i++) {
        cin >> bus[i][0];
    }
// Read the data of first column row by row.
    cout << "Give the number of passengers for day 2: ";
    for (int i = 0; i < NUM_ROUTES; i++) {
        cin >> bus[i][1];
    }
// Read the data of second column row by row.
    cout << "Give the number of passengers for day 3: ";
    for (int i = 0; i < NUM_ROUTES; i++) {
        cin >> bus[i][2];
    }
// Read the data of third column row by row.
    cout << "Give the number of passengers for day 4: ";
    for (int i = 0; i < NUM_ROUTES; i++) {
        cin >> bus[i][3];
    }
// Read the data of fourth column row by row.
    cout << "Give the number of passengers for day 5: ";
    for (int i = 0; i < NUM_ROUTES; i++) {
        cin >> bus[i][4];
    }
// Read the data of fifth column row by row.
    cout << "Number of passengers:" << endl;
    for (int i = 0; i < NUM_ROUTES; i++) {
        for (int j = 0; j < NUM_DAYS; j++) {
            cout << bus[i][j] << " ";
        }
        cout << endl;
    }
// Print the number of passengers

    int total_mon = 0;
    for (int i = 0; i < NUM_ROUTES; i++) {
        total_mon += bus[i][0];
    }
    cout << "Total number of passengers for Mon: " << total_mon << endl;
// Print the total number of passengers for Mon

    int total_route_0 = 0;
    for (int j = 0; j < NUM_DAYS; j++) {
        total_route_0 += bus[0][j];
    }
    cout << "Total number of passengers for route 0: " << total_route_0 << endl;
// Print the total number of passengers for the route stored in row 0

    int max_route_3 = bus[3][0];
    for (int j = 1; j < NUM_DAYS; j++) {
        if (bus[3][j] > max_route_3) {
            max_route_3 = bus[3][j];
        }
    }
    cout << "Maximum number of passengers for route 3: " << max_route_3 << endl;
// Print the maximum number of passengers for the route stored in row 3

    int min_thu = bus[0][3];
    for (int i = 1; i < NUM_ROUTES; i++) {
        if (bus[i][3] < min_thu) {
            min_thu = bus[i][3];
        }
    }
    cout << "Minimum number of passengers for Thursday: " << min_thu << endl;
// Print the minimum number of passengers for Thursday.

    int total_passengers = 0;
    for (int i = 0; i < NUM_ROUTES; i++) {
        for (int j = 0; j < NUM_DAYS; j++) {
            total_passengers += bus[i][j];
        }
    }
    double average_passengers = static_cast<double>(total_passengers) / (NUM_ROUTES * NUM_DAYS);
    cout << "Average number of passengers: " << average_passengers << endl;
// Print the average number of passengers for all days and all routes.
    int max_row = 0;
    int max_passengers = 0;
    for (int i = 0; i < NUM_ROUTES; i++) {
        int total_route = 0;
        for (int j = 0; j < NUM_DAYS; j++) {
            total_route += bus[i][j];
        }
        if (total_route > max_passengers) {
            max_passengers = total_route;
            max_row = i;
        }
    }
    cout << "Largest number of passengers: " << max_passengers << " (route " << max_row << ")" << endl;
// Find the row with the largest number of passengers and print that number and the index
    return 0;
}
