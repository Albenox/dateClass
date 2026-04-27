// Date.cpp
// This will contain the logic and calculations used in the class "Date" in the "Date.h" file

#include <iostream>
#include "Date.h"
using namespace std;

// Constructor
Date::Date(int m, int d, int y) {
    setDate(m, d, y);
}

// The function that will validate the inputs such as month, day, and year,
// as well as have the leap year and last day of the month logic
void Date::setDate(int m, int d, int y) {
    
    // A bool that will determine if any of the inputs are invalid, and if so, turn to 1 and set the date to 1/1/1900
    bool invalid = 0;
    // An int that will determine the max day according to the month and potentially, leap year
    int maxDay;
    
    // A series of logic that will determine the maximum amount of days a month has to be valid
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        maxDay = 31;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        maxDay = 30;
    }
    else if (y % 400 == 0 || ((y % 4 == 0) && (y % 100 != 0))) {
        // For leap years in February
        maxDay = 29;
    }
    else {
        // For non leap years in February
        maxDay = 28;
    }
    
    // Logic to check if the month entered is within 1 and 12
    if (m >= 1 && m <= 12) {
        this->month = m;
    }
    else {
        invalid = 1;
    }
    
    // Checks to see if the day entered is under the maximum possible day and is at least 1
    if (d <= maxDay && d > 0) {
        this->day = d;
    }
    else {
        invalid = 1;
    }


    // No logic required for year as there is such a thing as BCE, or negative years
    this->year = y;

    // Checks to see if any of the information was invalid, which if it was, will default to 1/1/1900
    if (invalid == 1) {
        this->month = 1;
        this->day = 1;
        this->year = 1900;
    }
}