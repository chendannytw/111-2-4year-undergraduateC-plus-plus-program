// 2023-6-7 circle.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include<stdexcept>
#include"pie_2D.h"
#include"cylinder_3D.h"
using namespace std;

int main()
{
    double radious;
    double height;
    cout << "Enter radious for circle:" << endl;
    cin >> radious;
    pie_2d userenter(radious);
    cout << "Enter height for cylinder:" << endl;
    cin >> height;

    cylinder_3d userenter2(radious, height);
    cout << "The result is:\n\n";
    cout << "  The result of circle:\n";

    cout << "     Radious：" << userenter.getradious() <<"cm"

         << "\n     The area is "

        << userenter.compute_area() << " cm2\n" << endl;

    cout << "  The result of cylinder:\n";

    cout << "     Radious：" << userenter2.getradious() << " cm" <<  " | Height：" << userenter2.getheight()

        << " cm" << "\n     The volume is " << userenter2.compute_volume() << " cm3 | The surface is " << userenter2.compute_surface() << " cm2\n" << endl;



    system("pause");

}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
