#include <stdio.h>


struct clientData {
    unsigned int StuNum;
    char Name[20]; 
    int math;
	int computer;
    double  average; 
};

typedef struct clientData CLIENT;

int main(void)
{
    FILE* cfPtr; 
    unsigned int i;
    if ((cfPtr = fopen("accounts.dat", "rb+")) == NULL) {   
        puts("File could not be opened.");
    }
    else {

        
        CLIENT stuData = { 0, "",0,0, 0.0 }, blankClient = { 0, "",0,0, 0.0 };



        for (i = 1; i <= 100; ++i) {
            fwrite(&blankClient, sizeof(struct clientData), 1, cfPtr); 
        }
        printf("%s", "Enter student number"
            " (1 to 100, 0 to end input): ");
        scanf("%d", &stuData.StuNum);

        while (stuData.StuNum != 0) {
            printf("%s", "Enter Name, Math, computer: ");

            fscanf(stdin, "%14s %4d %4d", &stuData.Name, &stuData.math, &stuData.computer);
            stuData.average=(stuData.math+stuData.computer)/2.0;
			
            fseek(cfPtr,(stuData.StuNum - 1)*sizeof(struct clientData), SEEK_SET);

            fwrite(&stuData, sizeof(struct clientData), 1, cfPtr);
            printf("%s", "Enter studen number: ");
            scanf("%d", &stuData.StuNum);
        }


        fclose(cfPtr);
    }

    if ((cfPtr = fopen("accounts.dat", "rb")) == NULL) {
        puts("File could not be opened.");
    }
    else {
        printf("%-6s%-6s%-4s %-8s%11s\n", "Acct", "Name","Math","computer", "average:");
      
        while (!feof(cfPtr)) {
            
            struct clientData stuData = { 0, "",0,0, 0.0 };

            int result = fread(&stuData, sizeof(struct clientData), 1, cfPtr);
            if (stuData.StuNum != 0) { 
                printf("%-6d%-6s%4d%9d%10.2f\n",stuData.StuNum, stuData.Name,stuData.math,stuData.computer, stuData.average);
            }
        }

        fclose(cfPtr);
    }

}
