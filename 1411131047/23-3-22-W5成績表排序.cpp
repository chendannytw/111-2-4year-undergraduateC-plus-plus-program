#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void blank(FILE *cfPtr);
void write(FILE *cfPtr);
void read(FILE *cfPtr);


typedef struct{
    unsigned int StuNum;
    char Name[20];
    int math, computer;
    float average;
    int rank;
    
}stuData;


void bubble(stuData *studArr,int num);

int main(void){
    FILE *cfPtr;
    blank(cfPtr);
    write(cfPtr);
    read(cfPtr);
}

void blank(FILE *cfPtr){
    int i;
    if((cfPtr = fopen("accounts1.dat","wb"))==NULL){     
        puts("File could not be opened.");
    }
    else{
        stuData blankstudent = {0,"",0,0,0.0,0};

        for(i = 1 ; i <= 100 ; i++){
            fwrite(&blankstudent, sizeof(stuData),1,cfPtr);
        }
    }
    fclose(cfPtr);                                         
}

void write(FILE *cfPtr){
    if((cfPtr = fopen("accounts1.dat","rb+")) == NULL){    
        puts("File could not be opened.");
    }
    else{
        stuData student = {0,"",0,0,0.0,0};

        printf("%s","Enter studentNum(1 to 100, 0 to end input) : ");   

        scanf("%d",&student.StuNum);

        while(student.StuNum != 0 ){
            printf("%s","Enter name ,math, computer : ");
            fscanf(stdin,"%19s%3d%3d",student.Name,&student.math,&student.computer);           
            student.average=(double)(student.math+student.computer)/2;
            fseek(cfPtr,(student.StuNum-1)*sizeof(stuData),SEEK_SET);
            fwrite(&student,sizeof(stuData),1,cfPtr);                    
            printf("%s","Enter student number : ");
            scanf("%d",&student.StuNum);
        }
        fclose(cfPtr);                                            
    }                        
}

void read(FILE *cfPtr){
    
    stuData stuArr[100];  
    int i=0,j;
    if((cfPtr = fopen("accounts1.dat","rb+")) == NULL){                
        puts("File could not be opened.");
    }
    else{
        printf("%-6s%-6s%-10s%-10s%-10s\n","Num","Name","math","computer","average");

        while(!feof(cfPtr)){
            stuData student = {0,"",0,0,0.0};
            int result = fread(&student,sizeof(stuData),1,cfPtr);

            if(result != 0 && student.StuNum != 0 ){
                printf("%-6d%-6s%4d%9d%10.2f\n",student.StuNum,student.Name,student.math,student.computer,student.average);
                stuArr[i].StuNum=student.StuNum;
                strcpy(stuArr[i].Name,student.Name);
                stuArr[i].math=student.math;
                stuArr[i].computer=student.computer;
                stuArr[i].average=student.average;
                i++;
            }
        }
        fclose(cfPtr);
    }
    printf("\n");
   

    for(j=0;j<i;++j)
    	printf("%-6d%-6s%4d%9d%10.2f\n",stuArr[j].StuNum,stuArr[j].Name,stuArr[j].math,stuArr[j].computer,stuArr[j].average);
    
    printf("\n");
    bubble(stuArr,i);
           
    for(j=0;j<i;++j){
		stuArr[j].rank=j+1;
        printf("%-6d%-6s%4d%9d%10.2f%3d\n",stuArr[j].StuNum,stuArr[j].Name,stuArr[j].math,stuArr[j].computer,stuArr[j].average,stuArr[j].rank);
}
}

void bubble(stuData *studArr,int num)
{
    int pass, i, j;
    for (pass = 1; pass < num; ++pass) {

       
        for (i = 0; i < num - 1; ++i) {
            
            if (studArr[i].average < studArr[i + 1].average) {
                stuData temp;
                temp=studArr[i];
                studArr[i]=studArr[i+1];
                studArr[i+1]=temp;

            }
        }
    }
}

/*
51 
ana 100 50
23 
leo 66 77
73
wang 55 60
13
chan 78 90
7
leon 88 100
0
*/


