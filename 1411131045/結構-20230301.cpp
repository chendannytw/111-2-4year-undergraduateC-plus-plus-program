// 結構-20230301.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <stdio.h>
#define SIZE 4
#define STU 13
struct student {
    char name[20];
    unsigned int stu_id;
    float math;
    float computer;
    float avg;
};
typedef struct student  STUDENT;
void bubblesort(STUDENT mystu[STU]);//排序副程式
//int binarySearch(int b[], int searchKey, int low, int high);
//void sort(char** name, int a[][SIZE], int size);
// function main begins program execution
int main(void)
{
    int key, result = 0, i, j;
    // initialize a

    
    STUDENT stu, stu_class[STU] = { {"Alice",2,98,72,0},
                        {"Danny",3,76,32,0},
                        {"Tom",6,98,67,0},
                        {"Nina",7,89,32,0},
                        {"May",8,98,55,0},
                        {"Tim",9,89,32,0},
                        {"Sindy",10,98,65,0},
                        {"Bob",11,99,32,0},
                        {"Steven",12,98,71,0},
                        {"Ellen",13,76,91,0},
                        {"Nicole",18,93,49,0},
                        {"Tan",19,67,82,0},
                        {"Jenny",20,66,98,0} };



    puts("Name ID items in original order");
    // output original array
    for (j = 0; j < STU; j++)
        stu_class[j].avg = (stu_class[j].math + stu_class[j].computer) / 2;

    for (j = 0; j < STU; j++)
    {
        printf("%28s", stu_class[j].name);
        printf(" %d", stu_class[j].stu_id);
        printf(" %.2f", stu_class[j].math);
        printf(" %.2f", stu_class[j].computer);
        printf(" %.2f", stu_class[j].avg);
        printf("\n");
    }
    bubblesort(stu_class);
    puts("Name ID items in arranging order");
    for (j = 0; j < STU; j++)
    {
        printf("%28s", stu_class[j].name);
        printf(" %d", stu_class[j].stu_id);
        printf(" %.2f", stu_class[j].math);
        printf(" %.2f", stu_class[j].computer);
        printf(" %.2f", stu_class[j].avg);
        printf("\n");
    }

    printf("中位數為學生%s，平均分數為%.2f", stu_class[STU/2].name, stu_class[STU/2].avg);
}

void bubblesort(STUDENT mystu[STU]) 
{
    STUDENT stu;
    int hold, pass, i;
    for (pass = 1; pass < STU; ++pass) {

        // loop to control number of comparisons per pass
        for (i = 0; i < STU - pass; ++i) {

            // compare adjacent elements and swap them if first
            // element is greater than second element
            if (mystu[i].avg < mystu[i + 1].avg) {
                stu = mystu[i];
                mystu[i] = mystu[i + 1];
                mystu[i + 1] = stu;
            }
        }
    }
}

    /*sort(name, a, stu);
    puts("\nData items in ascending order");

    for(j=0;j<stu;j++)
    {	printf("%8s", name[j]);
        for (i = 0; i < SIZE; ++i) {
            printf("%4d", a[j][i]);
        }
        printf("\n");
    }

}


void sort(char **name, int a[][SIZE], int size)
{char *ptr;
    int hold,pass,i;
    for (pass = 1; pass < size; ++pass) {

        // loop to control number of comparisons per pass
        for (i = 0; i < size - pass; ++i) {

            // compare adjacent elements and swap them if first
            // element is greater than second element
            if (a[i][3] < a[i + 1][3]) {
                ptr=name[i];
                name[i]=name[i+1];
                name[i+1]=ptr;
                swap(&a[i][0], &a[i+1][0]);
                swap(&a[i][1], &a[i+1][1]);
                swap(&a[i][2], &a[i+1][2]);
                swap(&a[i][3], &a[i+1][3]);
            }
        }
    }

}

void swap(int *e1Ptr,int *e2Ptr)
{int hold;
hold=*e1Ptr;
*e1Ptr=*e2Ptr;
*e2Ptr=hold;
}
*/
// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
