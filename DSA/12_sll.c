//Program to revise / practise

#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst (PPNODE First, int No){        // Time Complexity : O(1)
  PNODE newn = NULL;
  newn = (PNODE) malloc (sizeof (NODE));

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
void InsertLast (PPNODE First, int No){         // Time Complexity : O(n)
  PNODE newn = NULL;
  newn = (PNODE) malloc (sizeof (NODE));

  PNODE temp = NULL;
  temp = (PNODE) malloc (sizeof (NODE));

  newn -> data = No;
  newn -> next = NULL;

  if (*First == NULL){
    *First = newn;
  }
  else{
    temp = *First;
    while(temp -> next != NULL){
      temp = temp -> next;
    }
    temp -> next = newn;
  }
}
void Display (PNODE First){                   // Time Complexity: O(n)
  while (First != NULL){
    printf("|%d| ->",First->data);
    First = First -> next;
  }
  printf("NULL\n");
}
int Count (PNODE First){                      // Time Complexity : O(n)
  int iCnt = 0;
  while (First != NULL){
    iCnt ++;
    First = First -> next;
  }
  return iCnt;
}

int main (){
  PNODE Head = NULL;
  int iRet = 0;
  InsertFirst(&Head, 100);
  InsertFirst(&Head, 90);
  InsertFirst(&Head, 80);
  Display (Head);
  iRet = Count(Head);
  printf("Total Nodes: %d\n", iRet );

  InsertLast(&Head, 110);
  InsertLast(&Head, 120);
  InsertLast(&Head, 13  0);
  Display (Head);
  iRet = Count(Head);
  printf("Total Nodes: %d\n", iRet );

  return 0;
}
