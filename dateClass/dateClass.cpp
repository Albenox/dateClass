// dateClass.cpp
// This will contain the code that will test the class "Date" to verify and use everything it can do

#include <iostream>
#include "Date.h"
using namespace std;

void displayDate(Date d) {
    cout << "Numeric: " << d.toNumericString() << endl;
    cout << "Long: " << d.toLongString() << endl;
    cout << "Day First: " << d.toDayFirstString() << endl;
    cout << "Month: " << d.getMonth() << endl;
    cout << "Day: " << d.getDay() << endl;
    cout << "Year: " << d.getYear() << endl;
    cout << "Leap Year? " << (d.isLeapYear() ? "Yes" : "No") << endl;
    cout << "Last Day of Month: " << d.lastDay() << endl;
    cout << "------------------------" << endl;
}

int main()
{
    // Objects made from the class "Date" in the format of Month, Day, Year
    Date date1(12, 25, 2021);
    Date date2(2, 29, 2024);
    Date date3(2, 29, 2023);
    Date date4(12, 10, 2025);
    Date date5;

    // Different formats for the date
    displayDate(date1);
    displayDate(date2);
    displayDate(date3);
    displayDate(date4);
    displayDate(date5);

    return 0;
}