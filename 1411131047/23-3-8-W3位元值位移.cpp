#include <stdio.h>
void displayBits(unsigned int value); 
void BitMove(int num, int direc,int Mv);

int main(void)
{
    unsigned int number1 ,move,direc;
    puts("OriginNumber Direction ShiftNumber");
    scanf_s("%d %d %d", &number1, &direc, &move);
    BitMove(number1,direc, move); 
}

void displayBits(unsigned int value)
{
    unsigned int c, displayMask = 1 << 31;
    printf("%-10u = ", value);    
    for (c = 1; c <= 32; ++c) {
        putchar(value & displayMask ? '1' : '0');
        value <<= 1; 
        if (c % 8 == 0) {
            putchar(' ');
        }
    }
    putchar('\n');
}

void BitMove(int num, int direc1,int Mv) {
    displayBits(num);
    if (direc1==1)displayBits(num<<=Mv);
    else if (direc1 == 2)displayBits(num >>= Mv);
}
