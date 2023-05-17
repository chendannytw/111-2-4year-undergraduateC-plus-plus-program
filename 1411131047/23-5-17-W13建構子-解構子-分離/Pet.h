#include <iostream>
#include <string> 
using namespace std;

class Pet
{
public:
    Pet(string name, int age);
    int setPetage();
    

    void setPetName(string Name);
    

    string getPetName() const;
   
    void displayMessage() const;
    ~Pet();
   
private:
    string PetName;
    int PetAge;
};
