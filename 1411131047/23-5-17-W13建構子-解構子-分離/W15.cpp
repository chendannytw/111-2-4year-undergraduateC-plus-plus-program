#include <iostream>
#include <string> 
#include "Pet.h"
using namespace std;

int main()
{
    string nameOfCourse;
    Pet myGradeBook("Jack", 19);
    cout << "Pet name is: " << myGradeBook.getPetName() << endl;
    myGradeBook.setPetName(nameOfCourse);
    if (myGradeBook.setPetage() == 1) {
        cout << endl;
        myGradeBook.displayMessage();
    }
}
