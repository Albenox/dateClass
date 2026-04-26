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
    Date(int m = 1, int d = 1, int y = 1900);
    void setDate(int m, int d, int y);
};

// The portion that will not be defined again if it already is, which should be the entire code
#endif