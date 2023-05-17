#include <iostream>
#include <string> // program uses C++ standard string class
#include "Pet.h"
using namespace std;
void Petdata:: setPetName(string name, int age)
{
    PetName = name; // store the Pet name in the object
    PetAge = age;
    if (PetAge >= 0 && PetAge <= 20)
    {
        cout << "Pet age is in range";
    }
    else
    {
        cout << "Pet age is over range";
    }
} // end function setPetName
string Petdata::getPetName()
{
    return PetName; // return the object's PetName  //私有資料成員PetName可以透過自家的函數存取
} // end function getPetName
int Petdata::getPetAge()
{
    return PetAge;
}
// function that displays a welcome message
void Petdata::displayMessage()
{
    // this statement calls getPetName to get the 
    // name of the Pet this Petdata represents
    cout << "Pet name is:" << getPetName() << "!" << "\nPet age is:" << getPetAge() << "!"
        << endl;
} // end function displayMessage