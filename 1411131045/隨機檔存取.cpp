// 隨機檔存取.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>

void displayBits(unsigned int value); // prototype
void shiftbits(int, int, int);
int main(void)
{
    unsigned int number1,mask,dir;
    puts("input number1:");
    scanf_s("%d", &number1);
    puts("input mask:");
    scanf_s("%d", &mask);
    puts("input dir: right=0 left=1 others=error");
    scanf_s("%d", &dir);
    displayBits(number1);
    displayBits(mask);
    shiftbits(number1, mask, dir);
}
void shiftbits(int number1, int mask, int dir)
{
    if (dir == 0)
        number1 = number1 >> mask;
    else if (dir == 1)
        number1 = number1 << mask;
    else
        printf("error");
    displayBits(number1);
}
// display bits of an unsigned int value
void displayBits(unsigned int value)
{
    // declare displayMask and left shift 31 bits
    unsigned int c, displayMask = 1 << 31;

    printf("%10u = ", value);

    // loop through bits
    for (c = 1; c <= 32; ++c) {
        putchar(value & displayMask ? '1' : '0');
        value <<= 1; // shift value left by 1

        if (c % 8 == 0) { // output a space after 8 bits
            putchar(' ');
        }
    }

    putchar('\n');
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
