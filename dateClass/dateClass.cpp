// dateClass.cpp
// This will contain the code that will test the class "Date" to verify and use everything it can do

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
    // Object made from the class "Date" in the format of Month, Day, Year
    Date testDate(12, 25, 2021);

    // Different formats for the date
    cout << testDate.toNumericString() << endl;
    cout << testDate.toLongString() << endl;
    cout << testDate.toDayFirstString() << endl;

    return 0;
}