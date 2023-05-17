#pragma once
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// Petdata class definition
class Petdata
{
public:
    // function that sets the Pet name
    void setPetName(string name, int age);


    // function that gets the Pet name
    string getPetName();
    int getPetAge();
    // function that displays a welcome message
    void displayMessage();
private:
    string PetName = "unknow"; // Pet name for this Petdata
    int PetAge;
}; // end class Petdata  
