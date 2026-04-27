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
    this->month = m;
    this->day = d;
    this-> year = y;
}