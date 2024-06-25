#include <stdio.h>
#include <stdlib.h>

// Define a structure for the node
typedef struct node {
  int data;               // Data part of the node
  struct node *next;      // Pointer to the next node
} NODE, *PNODE, **PPNODE; // Typedef for struct node and pointers to node and node pointer

// Function to insert a node at the beginning of the list
void InsertFirst(PPNODE First, int No) {
  PNODE newn = NULL;             // Pointer to a new node
  newn = (PNODE)malloc(sizeof(NODE));  // Allocate memory for the new node

  newn->data = No;    // Set the data for the new node
  newn->next = NULL;  // Initialize the next pointer of the new node to NULL

  if (*First == NULL) {   // If the list is empty
    *First = newn;        // Make the new node the first node
  } else {                // If the list is not empty
    newn->next = *First;  // Point the new node's next to the current first node
    *First = newn;        // Update the first node to the new node
  }
}

// Function to insert a node at the end of the list
void InsertLast(PPNODE First, int No) {
  PNODE newn = NULL;
  PNODE temp = NULL;
  newn = (PNODE)malloc(sizeof(NODE));  // Allocate memory for the new node

  newn->data = No;    // Set the data for the new node
  newn->next = NULL;  // Initialize the next pointer of the new node to NULL

  if (*First == NULL) {   // If the list is empty
    *First = newn;        // Make the new node the first node
  } else {                // If the list is not empty
    temp = *First;        // Set temp to the first node
    while (temp->next != NULL) {  // Traverse to the last node
      temp = temp->next;
    }
    temp->next = newn;    // Link the new node at the end of the list
  }
}

// Function to display the linked list
void Display(PNODE First) {
  while (First != NULL) {           // Traverse the list
    printf("|%d|->  ", First->data);  // Print the data of each node
    First = First->next;            // Move to the next node
  }
  printf("NULL\n");                 // End of list
}

// Function to count the number of nodes in the list
int Count(PNODE First) {
  int iCnt = 0;            // Initialize count
  while (First != NULL) {   // Traverse the list
    iCnt++;                 // Increment count for each node
    First = First->next;    // Move to the next node
  }
  return iCnt;              // Return the total count
}

int main() {
  int iRet = 0;     // Variable to store the count of nodes
  PNODE Head = NULL;  // Initialize the head of the list to NULL

  // Insert nodes at the beginning
  InsertFirst(&Head, 101);
  InsertFirst(&Head, 51);
  InsertFirst(&Head, 21);
  InsertFirst(&Head, 11);
  Display(Head);  // Display the list
  iRet = Count(Head);  // Count the nodes
  printf("Number of Elements are: %d\n", iRet);

  // Insert nodes at the end
  InsertLast(&Head, 111);
  InsertLast(&Head, 121);
  InsertLast(&Head, 151);
  Display(Head);  // Display the updated list

  iRet = Count(Head);  // Count the nodes again
  printf("Number of Elements are: %d\n", iRet);

  return 0;
}
