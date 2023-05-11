// 類別及物件.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// Petdata class definition
class Petdata
{
public:
    // function that sets the Pet name
    void setPetName(string name,int age)
    {
        PetName = name; // store the Pet name in the object
        PetAge = age;
        if (PetAge>=0&&PetAge<=20)
        {
            cout << "Pet age is in range";
        }
        else
        {
            cout << "Pet age is over range";
        }
    } // end function setPetName

    // function that gets the Pet name
    string getPetName()
    {
        return PetName; // return the object's PetName  //私有資料成員PetName可以透過自家的函數存取
    } // end function getPetName
    int getPetAge()
    {
        return PetAge;
    }
    // function that displays a welcome message
    void displayMessage()
    {
        // this statement calls getPetName to get the 
        // name of the Pet this Petdata represents
        cout << "Pet name is:" << getPetName()<<"!" << "\nPet age is:" << getPetAge()<<"!"
            << endl;
    } // end function displayMessage
private:
    string PetName="unknow"; // Pet name for this Petdata
    int PetAge;
}; // end class Petdata  

// function main begins program execution
int main()
{
    string nameOfPet; // string of characters to store the Pet name
    int ageOfPet;
    Petdata myPetdata; // create a Petdata object named myPetdata

    // display initial value of PetName
    cout << "Initial Pet name is: " << myPetdata.getPetName()
        << endl;

    // prompt for, input and set Pet name
    cout << "\nPlease enter the Pet name:" << endl;
    getline(cin, nameOfPet); // read a Pet name with blanks
    cout << "\nPlease enter the Pet age:" << endl;
    cin >> ageOfPet;
    myPetdata.setPetName(nameOfPet,ageOfPet); // set the Pet name

    cout << endl; // outputs a blank line
    myPetdata.displayMessage(); // display message with new Pet name
} // end main

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
