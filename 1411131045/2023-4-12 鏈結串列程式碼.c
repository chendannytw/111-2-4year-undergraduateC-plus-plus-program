#include <stdio.h>
#include <stdlib.h>

// self-referential structure                       
struct listNode {                                      
   int ID; // each listNode contains a character 
   int math, com;
   float aver;
   struct listNode *nextPtr; // pointer to next node
}; 

typedef struct listNode ListNode; // synonym for struct listNode
typedef ListNode *ListNodePtr; // synonym for ListNode*

// prototypes
void insert(ListNodePtr *sPtr, int id, int math, int computer,float average);
char delete(ListNodePtr *sPtr, int value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main(void)
{ 
   ListNodePtr startPtr = NULL; // initially there are no nodes
   int item,math, computer,average; // char entered by user

   instructions(); // display the menu
   printf("%s", "? ");
   unsigned int choice; // user's choice
   scanf("%u", &choice);
   // loop while user does not choose 3
   while (choice != 3) { 
      switch (choice) { 
         case 1:
    {
 		printf("%s", "請輸入學號: ");
    	scanf("\n%d", &item);
    	printf("%s", "請輸入數學成績: ");
    	scanf("\n%d", &math);
    	printf("%s", "請輸入電腦成績: ");
    	scanf("\n%d", &computer);
    	average=(math+computer)/2;
    	insert(&startPtr, item,math,computer,average); // insert item in list
    	printList(startPtr);
	}
            break;
         case 2: // delete an element
            // if list is not empty
            if (!isEmpty(startPtr)) { 
               printf("%s", "輸入欲刪除資料的學生學號: ");
               scanf("\n%d", &item);
               // if character is found, remove it
               if (delete(&startPtr, item)) { // remove item
                  printf("student's id is%d deleted.\n", item);
                  printList(startPtr);
               } 
               else {
                  printf("student's id is%d not found.\n\n", item);
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
void insert(ListNodePtr *sPtr, int id, int math, int computer,float average)
{ 
   ListNodePtr newPtr = malloc(sizeof(ListNode)); // create node

   if (newPtr != NULL) { // is space available
      newPtr->ID = id; // place value in node
      newPtr->math = math; // place value in node
      newPtr->com = computer; // place value in node
      newPtr->aver=average;
      newPtr->nextPtr = NULL; // node does not link to another node

      ListNodePtr previousPtr = NULL;
      ListNodePtr currentPtr = *sPtr;

      // loop to find the correct location in the list       
      while (currentPtr != NULL && id > currentPtr->ID) {
         previousPtr = currentPtr; // walk to ...               
         currentPtr = currentPtr->nextPtr; // ... next node 
      }                                          

      // insert new node at beginning of list
      if (previousPtr == NULL) { 
         newPtr->nextPtr = *sPtr;
         *sPtr = newPtr;
      } 
      else { // insert new node between previousPtr and currentPtr
         previousPtr->nextPtr = newPtr;
         newPtr->nextPtr = currentPtr;
      } 
   } 
   else {
      printf("%c not inserted. No memory available.\n", id);
   } 
} 

// delete a list element
char delete(ListNodePtr *sPtr, int value)
{ 
   // delete first node if a match is found
   if (value == (*sPtr)->ID) { 
      ListNodePtr tempPtr = *sPtr; // hold onto node being removed
      *sPtr = (*sPtr)->nextPtr; // de-thread the node
      free(tempPtr); // free the de-threaded node
      return value;
   } 
   else { 
      ListNodePtr previousPtr = *sPtr;
      ListNodePtr currentPtr = (*sPtr)->nextPtr;
      // loop to find the correct location in the list
      while (currentPtr != NULL && currentPtr->ID != value) { 
         previousPtr = currentPtr; // walk to ...  
         currentPtr = currentPtr->nextPtr; // ... next node  
      } 
      // delete node at currentPtr
      if (currentPtr != NULL) { 
         ListNodePtr tempPtr = currentPtr;
         previousPtr->nextPtr = currentPtr->nextPtr;
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
      puts("\n學生成績:");

      // while not the end of the list
      while (currentPtr != NULL) { 
         printf("\nID:%d  math:%d  computer:%d  average:%.2f-->", currentPtr->ID,currentPtr->math,currentPtr->com,currentPtr->aver);
         currentPtr = currentPtr->nextPtr;   
      } 

      puts("NULL\n");
   } 
} 
