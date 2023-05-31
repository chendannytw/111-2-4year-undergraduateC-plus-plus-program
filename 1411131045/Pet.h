#ifndef Pet_H
#define Pet_H

#include <string>
#include "Date.h" // include Date class definition
using namespace std;
class Pet
{
public:
    Pet(const string&, const string&,
        const Date&, const Date&);
    void print() const;
    ~Pet(); // provided to confirm destruction order
private:
    string type; // composition: member object
    string Name; // composition: member object
    const Date birthDate; // composition: member object
    const Date adoptDate; // composition: member object
}; // end class Pet

#endif
