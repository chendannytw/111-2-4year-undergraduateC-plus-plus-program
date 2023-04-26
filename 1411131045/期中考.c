#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// self-referential structure                       
struct stuData {
unsigned int StuNum;
char name[20];
int math, computer;
struct stuData *nextStu
} ;

typedef struct stuData ListNode; // synonym for struct listNode
typedef ListNode *ListNodePtr; // synonym for ListNode*

// prototypes
void insert(ListNodePtr *sPtr,int ID ,char *name,int math,int com);
char delete(ListNodePtr *sPtr, char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main(void)
{ 
   ListNodePtr startPtr = NULL; // initially there are no nodes
   int item,math,computer; // char entered by user
	char name[20];
   instructions(); // display the menu
   printf("%s", "? ");
   unsigned int choice; // user's choice
   scanf("%u", &choice);

   // loop while user does not choose 3
   while (choice != 3) { 

      switch (choice) { 
         case 1:
            printf("%s", "Enter a Student ID: ");
            scanf("\n%d", &item);
            printf("%s", "Enter a Student Name: ");
            scanf("\n%s", &name);
            printf("%s", "Enter a Student math: ");
            scanf("\n%d", &math);
            printf("%s", "Enter a Student computer: ");
            scanf("\n%d", &computer);
            insert(&startPtr, item,name,math,computer); // insert item in list
            printList(startPtr);
            break;
         case 2: // delete an element
            // if list is not empty
            if (!isEmpty(startPtr)) { 
               printf("%s", "Enter character to be deleted: ");
               scanf("\n%d", &item);

               // if character is found, remove it
               if (delete(&startPtr, item)) { // remove item
                  printf("student id:%d deleted.\n", item);
                  printList(startPtr);
               } 
               else {
                  printf("%d not found.\n\n", item);
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
      } // end switch

      printf("%s", "? ");
      scanf("%u", &choice);
   } 

   puts("End of run.");
} 

// display program instructions to user
void instructions(void)
{ 
   puts("Enter your choice:\n"
      "   1 to insert an element into the list.\n"
      "   2 to delete an element from the list.\n"
      "   3 to end.");
} 

// insert a new value into the list in sorted order
void insert(ListNodePtr *sPtr, int ID ,char *name,int math,int com)
{ 
   ListNodePtr newPtr = malloc(sizeof(ListNode)); // create node

   if (newPtr != NULL) { // is space available
      newPtr->StuNum = ID; // place value in node
      strcpy(newPtr->name,name);
      newPtr->math=math;
      newPtr->computer=com;
      newPtr->nextStu = NULL; // node does not link to another node

      ListNodePtr previousPtr = NULL;
      ListNodePtr currentPtr = *sPtr;

      // loop to find the correct location in the list       
      while (currentPtr != NULL && ID > currentPtr->StuNum) {
         previousPtr = currentPtr; // walk to ...               
         currentPtr = currentPtr->nextStu; // ... next node 
      }                                          

      // insert new node at beginning of list
      if (previousPtr == NULL) { 
         newPtr->nextStu = *sPtr;
         *sPtr = newPtr;
      } 
      else { // insert new node between previousPtr and currentPtr
         previousPtr->nextStu = newPtr;
         newPtr->nextStu = currentPtr;
      } 
   } 
   else {
      printf("%d not inserted. No memory available.\n", ID);
   } 
} 

// delete a list element
char delete(ListNodePtr *sPtr, char value)
{ 
   // delete first node if a match is found
   if (value == (*sPtr)->StuNum) { 
      ListNodePtr tempPtr = *sPtr; // hold onto node being removed
      *sPtr = (*sPtr)->nextStu; // de-thread the node
      free(tempPtr); // free the de-threaded node
      return value;
   } 
   else { 
      ListNodePtr previousPtr = *sPtr;
      ListNodePtr currentPtr = (*sPtr)->nextStu;

      // loop to find the correct location in the list
      while (currentPtr != NULL && currentPtr->StuNum != value) { 
         previousPtr = currentPtr; // walk to ...  
         currentPtr = currentPtr->nextStu; // ... next node  
      } 

      // delete node at currentPtr
      if (currentPtr != NULL) { 
         ListNodePtr tempPtr = currentPtr;
         previousPtr->nextStu = currentPtr->nextStu;
         free(tempPtr);
         return value;
      } 
   } 

   return '\0';
} 

// return 1 if the list is empty, 0 otherwise
int isEmpty(ListNodePtr sPtr)
{ 
   return sPtr == NULL;
} 

// print the list
void printList(ListNodePtr currentPtr)
{ 
   // if list is empty
   if (isEmpty(currentPtr)) {
      puts("List is empty.\n");
   } 
   else { 
      puts("The list is:");

      // while not the end of the list
      while (currentPtr != NULL) { 
         printf("\n%d %s %d %d --> ", currentPtr->StuNum,currentPtr->name,currentPtr->math,currentPtr->computer);
         currentPtr = currentPtr->nextStu;   
      } 

      puts("NULL\n");
   } 
} 

