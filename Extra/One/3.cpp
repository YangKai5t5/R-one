// Here’s a C++ program that checks if there is a leap year in the next five years from a given year:

#include <iostream>
using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            } else {
                return false;
            }
        } else {
            return true;
        }
    } else {
        return false;
    }
}

int main() {
    int year=2000;
    bool foundLeapYear = false;

    // cout << "Enter a year: ";
    // cin >> year;

    cout << "Leap years in the next five years from " << year << " is: ";
    for (int i = 1; i <= 5; ++i) {
        if (isLeapYear(year + i)) {
            cout << year + i << " ";
            foundLeapYear = true;
        }
    }

    if (!foundLeapYear) {
        cout << "None";
    }

    cout << endl;
    return 0;
}
