// 2023-5-24-Date.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<stdexcept>
#include"Date.h"
using namespace std;

int main()
{
    Date t; // instantiate object t of class Date

    // output Date object t's initial values
    cout << "The initial universal Date is ";
    t.printUniversal(); // 00:00:00
    cout << "\nThe initial standard Date is ";
    t.printStandard(); // 12:00:00 AM

    t.setDate(2003, 12, 18); // change Date

    // output Date object t's new values
    cout << "\n\nUniversal Date after setDate is ";
    t.printUniversal(); // 13:27:06
    cout << "\nStandard Date after setDate is ";
    t.printStandard(); // 1:27:06 PM

    // attempt to set the Date with invalid values
    try
    {
        t.setDate(99, 99, 99); // all values out of range
    } // end try
    catch (invalid_argument& e)
    {
        cout << "\n\nException: " << e.what() << endl;
    } // end catch

    // output t's values after specifying invalid values
    cout << "\nAfter attempting invalid settings:"
        << "\nUniversal Date: ";
    t.printUniversal(); // 13:27:06
    cout << "\nStandard Date: ";
    t.printStandard(); // 1:27:06 PM
    cout << endl;
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
