#include <iostream>
#include <string> 
using namespace std;


class Pet
{
public:
    int setPetage(int age)
    {
        if (age <= 20 && age > 0) {
            PetAge = age;
            return 1;
        }
        else
        {
            cout << "Wrong" << endl;
            return 0;
        }
    } 

    void setPetName(string Name)
    {
        PetName = Name;
    }

    string getPetName() const
    {
        return PetName;
    } 
    
    void displayMessage() const
    {
        
        cout << "Hello \n" << getPetName() << "! your age is " << PetAge << endl;
    }
private:
    string PetName;
    int PetAge;
}; 

int main()
{
    string nameOfCourse; 
    int age;
    Pet myGradeBook;
    cout << "Pet name is: " << myGradeBook.getPetName() << endl;
    getline(cin, nameOfCourse);
    myGradeBook.setPetName(nameOfCourse);
    cout << "Pet age is" << endl;
    cin >> age;
    if (myGradeBook.setPetage(age)==1){
        cout << endl;
        myGradeBook.displayMessage();
    }  
} 

