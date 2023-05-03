// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include <iostream>
#include <cmath>

// 計算正方體體積
void cube(int& a) {
    a = std::pow(a, 3);
}

// 計算圓柱體體積
void cylinder(int& r, int& h) {
    double volume = std::pow(r, 2) * 3.14 * h;
    // 因為傳入的參數型別是 int，所以這邊需要用四捨五入來取整
    int roundedVolume = static_cast<int>(std::round(volume));
    h = roundedVolume;
}

// 計算長方體體積
void volume(int& a, int& b, int& c) {
    a = a * b * c;
}

int main() {
    int a, b, c, r, h;
    std::cout << "Enter the length of the cube: ";
    std::cin >> a;
    cube(a);
    std::cout << "The volume of the cube is " << a << std::endl;

    std::cout << "Enter the radius and height of the cylinder: ";
    std::cin >> r >> h;
    cylinder(r, h);
    std::cout << "The volume of the cylinder is " << h << std::endl;

    std::cout << "Enter the length, width, and height of the rectangular prism: ";
    std::cin >> a >> b >> c;
    volume(a, b, c);
    std::cout << "The volume of the rectangular prism is " << a << std::endl;

    return 0;
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
