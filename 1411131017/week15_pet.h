// Pet.h

#ifndef PET_H
#define PET_H

#include <string>
#include "Date.h" // include Date class definition

class Pet
{
public:
    Pet(const std::string&, const std::string&,
        const Date&, const Date&);
    void print() const;
    ~Pet(); // provided to confirm destruction order
private:
    std::string spec; // string 是系統類別 composition: member object
    std::string Name; // string 是系統類別 composition: member object
    const Date birthDate; // Date 是自訂類別 composition: member object
    const Date adoptDate; // Date 是自訂類別 composition: member object
}; // end class Employee
#endif
