// Date.h
// This will contain the class "Date" that can be declared and used

// Checks to see if this class is already defined, and if it is, will not define it again
#ifndef DATE_H
#define DATE_H
using namespace std;

// The class for date that will hold the month, day, and year as ints
class Date {
//
private:
    int month;
    int day;
    int year;

//
public:
    
    // Constructor that sets the initial values to month, day, and year
    Date(int m = 1, int d = 1, int y = 1900);
    
    // Mutator function that will validate the month, day, and year
    void setDate(int m, int d, int y);
    
    // Accessors that are functions which will grab the inputs and populate the private variables, with const to ensure the variables are not changed at all
    int getMonth() const;
    int getDay() const;
    int getYear() const;

    // Function and overloaded function that tracks if the year is a leap year
    bool isLeapYear() const;
    bool isLeapYear(int y) const;

    // Function and overloaded function that holds the last day of the month
    int lastDay() const;
    int lastDay(int m, int y) const;
};

// The portion that will not be defined again if it already is, which should be the entire code
#endif