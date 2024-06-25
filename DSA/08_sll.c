#include <stdio.h>
#include <stdlib.h>

// Define a structure for the node
typedef struct node {
  int data;              // Data part of the node
  struct node *next;     // Pointer to the next node
} NODE, *PNODE, **PPNODE;  // Typedef for struct node and pointers to node and node pointer

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

int main() {
  PNODE Head = NULL;        // Initialize the head of the list to NULL
  InsertFirst(&Head, 51);   // Insert 51 at the beginning of the list
  InsertFirst(&Head, 21);   // Insert 21 at the beginning of the list
  InsertFirst(&Head, 11);   // Insert 11 at the beginning of the list

  return 0;
}
