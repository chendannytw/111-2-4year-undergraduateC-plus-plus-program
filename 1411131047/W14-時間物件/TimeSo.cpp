#include <iostream>
#include <iomanip>
#include <stdexcept> 
#include "Time.h"

using namespace std;


date::date(int Y, int M, int D){
    year = Y, month = M, day = D;
} // end Time constructor

// set new Time value using universal time
void date::setTime(int y, int m, int d)
{
    // validate hour, minute and second
    if ((y >= 1 && y < 9999) && (m >= 1 && m < 13) &&
        (d >= 1 && d < 32))
    {
        year = y;
        month = m;
        day = d;
    } // end if
    else
        throw invalid_argument("year, month and/or day was out of range");
} // end function setTime

// print Time in universal-time format (HH:MM:SS)
void date::printUniversal() const
{
    cout << "西元" << setfill('0') << setw(4) << year << "/"
        << setw(2) << month << "/" << setw(2) << day;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void date::printStandard() const
{
    cout << ((year <= 1911) ? "西元前" : " 民國") << ((year < 1911) ? 1911-year : year-1911) << "/"
        << setfill('0') << setw(2) << month << "/" << setw(2)
        << day ;
} // end function printStandard