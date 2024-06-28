// Singly Circular Linked lIst

#include <stdio.h>
#include <stdlib.h>

//known as self referential structure
struct node {           // total 12 bytes
  int data;             // 4 byte
  struct node *next;     // 8 byte
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Display (PNODE First, PNODE Last){
  if ((First == NULL) && (Last == NULL)){
    printf("Linked List is empty\n");
    return;
  }
  do{
      printf(" | %d | ->", First -> data );
      First = First->next;
  } while (First != Last->next);
  printf("\n");
}

int Count (PNODE First, PNODE Last){
  int iCount = 0;
  if ((First == NULL) && (Last == NULL)){
    printf("Linked List is empty\n");
    return 0;
  }
  do{
      iCount++;
      First = First->next;
  } while (First != Last->next);

  return iCount;
}

void InsertFirst(PPNODE First, PPNODE Last, int No){
  PNODE newn = NULL;

  newn = (PNODE) malloc (sizeof (NODE));

  newn -> data = No;
  newn -> next = NULL;

  if ((*First == NULL) && (*Last == NULL)){
    *First = newn;
    *Last = newn;
  }
  else{
    newn -> next = *First;
    *First = newn;
  }
  (*Last) -> next = *First;
}

void InsertLast(PPNODE First, PPNODE Last, int No){
  PNODE newn = NULL;

  newn = (PNODE) malloc (sizeof (NODE));

  newn -> data = No;
  newn -> next = NULL;

  if ((*First == NULL) && (*Last == NULL)){
    *First = newn;
    *Last = newn;
  }
  else{
    (*Last) -> next = newn;
    *Last = newn;
  }
  (*Last) -> next = *First;
}

void DeleteFirst(PPNODE First, PPNODE Last){
  if (*First == NULL && *Last == NULL){
    printf("Empty Linked List\n");
    return;
  }
  else if (*First == *Last) {
    *First = NULL;
    *Last = NULL;
  }
  else{
    *First = (*First) -> next;
    free((*Last)-> next);
    (*Last) -> next = *First;
  }
}
void DeleteLast(PPNODE First, PPNODE Last){
  if (*First == NULL && *Last == NULL){
    printf("Empty Linked List\n");
    return;
  }
  else if (*First == *Last) {
    *First = NULL;
    *Last = NULL;
  }
  else{
    PNODE temp = *First;
    while (temp -> next != *Last){
      temp = temp-> next;
    }
    free(*Last);
    *Last = temp;
    (*Last) -> next = *First;
  }
}



int main (){
  PNODE Head = NULL;
  PNODE Tail = NULL;
  int iRet = 0;

  // Display(Head, Tail);    // This will cause segmentaions fault if written without filter

  InsertFirst (&Head, &Tail, 51);
  InsertFirst (&Head, &Tail, 21);
  InsertFirst (&Head, &Tail, 11);

  Display(Head, Tail);
  iRet = Count (Head, Tail);
  printf("Total Nodes:  %d\n", iRet);

  InsertLast (&Head, &Tail, 101);
  InsertLast (&Head, &Tail, 111);
  InsertLast (&Head, &Tail, 121);

  Display(Head, Tail);
  iRet = Count (Head, Tail);
  printf("Total Nodes:  %d\n", iRet);

  DeleteFirst (&Head, &Tail);
  Display(Head, Tail);
  iRet = Count (Head, Tail);
  printf("Total Nodes:  %d\n", iRet);

  DeleteLast (&Head, &Tail);
  Display(Head, Tail);
  iRet = Count (Head, Tail);
  printf("Total Nodes:  %d\n", iRet);

  return 0;
}
