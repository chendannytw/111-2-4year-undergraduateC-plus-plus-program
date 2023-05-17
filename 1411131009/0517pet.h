#include <iostream>
#include <string> 
// program uses C++ standard string class
using namespace std;

// GradeBook class definition
class Pet
{
public:
    // function that sets the course name
    Pet(string name, int age);
    ~Pet();
    void setPetName(string name, int age);


    // function that gets the course name
    string getPetName() const;

    int getPetAge() const;

    // function that displays a welcome message
    void displayMessage() const;


private:
    string PetName = "unknown"; // course name for this GradeBook
    int PetAge = 0;
};
#pragma once

