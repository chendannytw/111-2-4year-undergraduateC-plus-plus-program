#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct listNode {                                      
   unsigned int StuNum;
   char name[20];
   int math, computer;
   struct listNode *nextPtr;
}; 

typedef struct listNode ListNode;
typedef ListNode *ListNodePtr;


void insert(ListNodePtr *sPtr, unsigned int value,char* stuNA,int Math,int Com);
char delete(ListNodePtr *sPtr, unsigned int value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main(void)
{ 
   ListNodePtr startPtr = NULL; 
   unsigned int Num;
   int M,C;
   char Name[20];
   

   instructions();
   printf("%s", "? ");
   unsigned int choice; 
   scanf("%u", &choice);

   while (choice != 3) { 

      switch (choice) { 
         case 1:
            printf("%s", "Enter a ID: ");
            scanf("\n%u", &Num);
            printf("%s", "Enter a Name: ");
            scanf("\n%s", &Name);
            printf("%s", "Enter Math: ");
            scanf("\n%d", &M);
            printf("%s", "Enter computer: ");
            scanf("\n%d", &C);
            insert(&startPtr, Num,Name,C,M); 
            printList(startPtr);
            break;
         case 2: 
            if (!isEmpty(startPtr)) { 
               printf("%s", "Enter character to be deleted: ");
               scanf("\n%u", &Num);

               
               if (delete(&startPtr, Num)) {
                  printf("%c deleted.\n", Num);
                  printList(startPtr);
               } 
               else {
                  printf("%c not found.\n\n", Num);
               } 
            } 
            else {
               puts("List is empty.\n");
            } 

            break;
         default:
            puts("Invalid choice.\n");
            instructions();
            break;
      } 

      printf("%s", "? ");
      scanf("%u", &choice);
   } 

   puts("End of run.");
} 

void instructions(void)
{ 
   puts("Enter your choice:\n"
      "   1 to insert an element into the list.\n"
      "   2 to delete an element from the list.\n"
      "   3 to end.");
} 

void insert(ListNodePtr *sPtr, unsigned int value,char* stuNA,int Math,int Com)
{ 
   ListNodePtr newPtr = malloc(sizeof(ListNode));

   if (newPtr != NULL) {
      newPtr->StuNum = value; 
      strcpy(newPtr->name,stuNA);
      newPtr->math=Math;
	  newPtr->computer =Com;
      newPtr->nextPtr = NULL; 

      ListNodePtr previousPtr = NULL;
      ListNodePtr currentPtr = *sPtr;

      while (currentPtr != NULL && value > currentPtr->StuNum) {
         previousPtr = currentPtr;              
         currentPtr = currentPtr->nextPtr; 
      }                                          

      if (previousPtr == NULL) { 
         newPtr->nextPtr = *sPtr;
         *sPtr = newPtr;
      } 
      else { 
         previousPtr->nextPtr = newPtr;
         newPtr->nextPtr = currentPtr;
      } 
   } 
   else {
      printf("%c not inserted. No memory available.\n", value);
   } 
} 

char delete(ListNodePtr *sPtr, unsigned int value)
{ 
   if (value == (*sPtr)->StuNum) { 
      ListNodePtr tempPtr = *sPtr; 
      *sPtr = (*sPtr)->nextPtr; 
      free(tempPtr);
      return value;
   } 
   else { 
      ListNodePtr previousPtr = *sPtr;
      ListNodePtr currentPtr = (*sPtr)->nextPtr;

      while (currentPtr != NULL && currentPtr->StuNum != value) { 
         previousPtr = currentPtr; 
         currentPtr = currentPtr->nextPtr; 
      } 

      if (currentPtr != NULL) { 
         ListNodePtr tempPtr = currentPtr;
         previousPtr->nextPtr = currentPtr->nextPtr;
         free(tempPtr);
         return value;
      } 
   } 

   return '\0';
} 

int isEmpty(ListNodePtr sPtr)
{ 
   return sPtr == NULL;
} 

void printList(ListNodePtr currentPtr)
{ 
  if (isEmpty(currentPtr)) {
      puts("List is empty.\n");
   } 
   else { 
      puts("The list is:");

      while (currentPtr != NULL) { 
         printf("%u:%6s %d & %d--> ", currentPtr->StuNum,currentPtr->name,currentPtr->math,currentPtr->computer);
         currentPtr = currentPtr->nextPtr;   
      } 

      puts("NULL\n");
   } 
} 

