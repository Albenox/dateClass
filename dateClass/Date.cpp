// Date.cpp
// This will contain the logic and calculations used in the class "Date" in the "Date.h" file

#include <iostream>
#include "Date.h"
#include <string>
using namespace std;

// Constructor
Date::Date(int m, int d, int y) {
    setDate(m, d, y);
}

// Checks if the object's own year is a leap year
bool Date::isLeapYear() const {
    return isLeapYear(this->year);
}

// Checks if the year passed into the function is a leap year
bool Date::isLeapYear(int y) const {
    return (y % 400 == 0 || ((y % 4 == 0) && (y % 100 != 0)));
}

// Returns the last valid day for the object's own month/year
int Date::lastDay() const {
    return lastDay(this->month, this->year);
}

// Returns the last valid day for the month/year passed in
int Date::lastDay(int m, int y) const {
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        return 31;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11) {
        return 30;
    }
    else if (isLeapYear(y)) {
        return 29;
    }
    else {
        return 28;
    }
}

// Numeric string output
string Date::toNumericString() const {
    return to_string(month) + "/" + to_string(day) + "/" + to_string(year);
}

// Month to Day to Year output
string Date::toLongString() const {
    string months[] = { "", "January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December" };

    return months[month] + " " + to_string(day) + ", " + to_string(year);
}

// Day to Month to Year output
string Date::toDayFirstString() const {
    string months[] = { "", "January", "February", "March", "April", "May", "June",
                        "July", "August", "September", "October", "November", "December" };

    return to_string(day) + " " + months[month] + " " + to_string(year);
}

// Accessors
int Date::getMonth() const {
    return month;
}

int Date::getDay() const {
    return day;
}

int Date::getYear() const {
    return year;
}

// The function that will validate the inputs such as month, day, and year,
// as well as have the leap year and last day of the month logic
void Date::setDate(int m, int d, int y) {
    
    // Variables
    // A bool that will determine if any of the inputs are invalid, and if so, turn to 1 and set the date to 1/1/1900
    bool invalid = 0;
    // An int that will determine the max day according to the month and potentially, leap year
    int maxDay = lastDay(m, y);
    
    // Setting variables
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

    // Invalid 
    // Checks to see if any of the information was invalid, which if it was, will default to 1/1/1900
    if (invalid == 1) {
        this->month = 1;
        this->day = 1;
        this->year = 1900;
    }
}