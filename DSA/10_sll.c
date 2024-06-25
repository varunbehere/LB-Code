//started

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int data;
  struct node * next;
} NODE, *PNODE, **PPNODE ;                   // With this we are integrating both typedef and the struct node

void InsertFirst (PPNODE First, int No){
  PNODE newn = NULL;
  // Allocate dynamic memory to the node
  newn = (PNODE) malloc (sizeof(NODE));

  newn -> data = No;
  newn -> next = NULL;

  if (*First == NULL){
    *First = newn;
  }
  else{
    newn -> next = *First;
    *First = newn;
  }
}

void Display(PNODE First){
  while (First != NULL){
    printf("|%d|->  ",First -> data );
    First = First->next;
  }
  printf(" NULL\n");
}

int Count(PNODE First){
  int iCnt = 0;
  while (First != NULL){
    First = First->next;
    iCnt ++;
  }
  return iCnt;
}


int main (){
  int iRet = 0;
  PNODE Head = NULL;

  InsertFirst(&Head, 101);
  InsertFirst(&Head, 51);
  InsertFirst(&Head, 21);
  InsertFirst(&Head, 11);
  Display(Head);
  iRet = Count(Head);

  printf("Number of Elements are : %d\n", iRet);

  return 0;
}
