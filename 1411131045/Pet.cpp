#include <iostream>
#include "Pet.h" // Pet class definition
#include "Date.h" // Date class definition
using namespace std;

// constructor uses member initializer list to pass initializer 
// values to constructors of member objects  
Pet::Pet(const string& type, const string& name,
    const Date& dateOfBirth, const Date& dateOfadopt)
    : type(type), // initialize type
    Name(name), // initialize name
    birthDate(dateOfBirth), // initialize birthDate
    adoptDate(dateOfadopt) // initialize adoptDate
{
    // output Pet object to show when constructor is called
    cout << "Pet object constructor: "
        << type << ' ' << name << endl;
} // end Pet constructor

// print Pet object
void Pet::print() const
{
    cout << Name << ", " << type << "  adoptDate: ";
    adoptDate.print();
    cout << "  Birthday: ";
    birthDate.print();
    cout << endl;
    if (this->adoptDate.year > this->birthDate.year)
    {
        cout << "Pet date is right!";
    }
    else if ((this->adoptDate.year == this->birthDate.year)&& this->adoptDate.month > this->birthDate.month)
    {
        cout << "Pet date is right!";
    }
    else
    {
        cout << "Pet date is flase";
    }
} // end function print

// output Pet object to show when its destructor is called
Pet::~Pet()
{
    cout << "Pet object destructor: "
        << Name << ", " << type << endl;
} // end ~Pet destructor