// dateClass.cpp
// This will contain the code that will test the class "Date"

#include <iostream>
#include "Date.h"
using namespace std;

// Displays a section with dashes above the title for convinient coding
void displaySection(string title) {
    cout << "------------------------" << endl;
    cout << title << endl;
}

// Displays all information about a Date object
void displayDate(const Date& d) {
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
    // Original date testing
    displaySection("Original Date Tests");

    Date date1(12, 25, 2021);
    Date date2(2, 29, 2024);
    Date date3(2, 29, 2023);
    Date date4;

    displayDate(date1);
    displayDate(date2);
    displayDate(date3);
    displayDate(date4);

    // Start of operator overloading testing
    cout << "Operator Overloading Tests " << endl;

    // Stream output operator testing
    displaySection("Stream Output Operator Test");

    cout << "date1 using <<: " << date1 << endl;

    // Increment operator testing
    displaySection("Increment Operator Tests");

    Date incDate(12, 31, 2024);

    cout << "Starting date: " << incDate << endl;
    cout << "Prefix ++ date: " << ++incDate << endl;

    incDate.setDate(12, 31, 2024);
    cout << "Reset date: " << incDate << endl;
    cout << "Postfix date++: " << incDate++ << endl;
    cout << "After postfix: " << incDate << endl;

    // Decrement operator testing
    displaySection("Decrement Operator Tests");

    Date decDate(1, 1, 2025);

    cout << "Starting date: " << decDate << endl;
    cout << "Prefix -- date: " << --decDate << endl;

    decDate.setDate(1, 1, 2025);
    cout << "Reset date: " << decDate << endl;
    cout << "Postfix date--: " << decDate-- << endl;
    cout << "After postfix: " << decDate << endl;

    // Leap year boundary testing
    displaySection("Leap Year Boundary Tests");

    Date leapDate(2, 29, 2008);

    cout << "Starting date: " << leapDate << endl;
    cout << "Prefix ++ date: " << ++leapDate << endl;
    cout << "Prefix -- date: " << --leapDate << endl;

    cout << "Postfix date++: " << leapDate++ << endl;
    cout << "After postfix ++: " << leapDate << endl;

    cout << "Postfix date--: " << leapDate-- << endl;
    cout << "After postfix --: " << leapDate << endl;

    // Subtraction operator testing
    displaySection("Subtraction Operator Tests");

    Date sub1(4, 18, 2014);
    Date sub2(4, 10, 2014);

    cout << sub1 << " - " << sub2 << " = " << (sub1 - sub2) << " days" << endl;

    Date sub3(2, 2, 2006);
    Date sub4(11, 10, 2003);

    cout << sub3 << " - " << sub4 << " = " << (sub3 - sub4) << " days" << endl;

    // Validation testing
    displaySection("Validation Tests");

    Date invalid1(13, 45, 2018);
    Date invalid2(4, 31, 2000);
    Date invalid3(2, 29, 2009);

    cout << "13/45/2018 becomes: " << invalid1 << endl;
    cout << "4/31/2000 becomes: " << invalid2 << endl;
    cout << "2/29/2009 becomes: " << invalid3 << endl;

    // Stream input testing
    displaySection("Stream Input Operator Test");

    Date userDate;
    cin >> userDate;
    cout << "You entered: " << userDate << endl;

    return 0;
}