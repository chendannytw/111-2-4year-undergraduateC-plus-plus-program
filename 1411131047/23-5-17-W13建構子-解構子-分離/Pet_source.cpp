#include <iostream>
#include <string>
#include "Pet.h"
using namespace std;

Pet::Pet(string name, int age){
    PetName = name;
    PetAge = age;
}

Pet::~Pet() {
    cout << "Welcome Welcome!" << endl;
}

int Pet::setPetage()
{
    if (PetAge <= 20 && PetAge > 0) {
        return 1;
    }
    else
    {
        cout << "Wrong" << endl;
        return 0;
    }
}

void Pet::setPetName(string Name)
{
    PetName = Name;
}

string Pet::getPetName() const
{
    return PetName;
}

void Pet::displayMessage() const
{

    cout << "Hello! \n" << getPetName() << " your Pet age is " << PetAge << endl;
}

