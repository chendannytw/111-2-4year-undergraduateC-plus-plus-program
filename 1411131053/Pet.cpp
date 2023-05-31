// Fig. 9.20: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include "Pet.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
Pet::Pet(const string& vari, const string& name,
    const Date& dateOfBirth, const Date& dateOfadopt)
    : Variety(vari),
    Name(name), // initialize firstName
    birthDate(dateOfBirth), // initialize birthDate
    adoptDate(dateOfadopt) // initialize hireDate
{
    cout << "Pet Variety is:"
        << Variety << ' ' << endl;
    // output Employee object to show when constructor is called
    cout << "Pet name is: "
        << Name << ' ' << endl;
} // end Employee constructor

// print Employee object
void Pet::print() const
{
    cout << Name << ", "  << Variety << "  adopt: ";
    adoptDate.print();
    cout << "  Birthday: ";
    birthDate.print();
    cout << endl;

    if (this->adoptDate.year > this->adoptDate.year)
        cout << "adoption date is OK" << endl;
    else if((this->adoptDate.year == this->birthDate.year) && (this->adoptDate.month > this->birthDate.month))
        cout<< "adoption date is illeagel" << endl;
} // end function print

// output Employee object to show when its destructor is called
Pet::~Pet()
{
    cout << "Pet object destructor: "
        << Name << ", "  << Variety << endl;
} // end ~Employee destructor