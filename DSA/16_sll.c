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

void DeleteFirst (PPNODE First){
  PNODE temp = NULL;

  if (*First == NULL){                        //case 1
    printf("Unable to delete, Linked List is Empty\n");
    return;
  }
  else if ((*First)-> next == NULL ){         //case2
    free (*First);
    *First = NULL;
  }
  else {                                      //case3
    temp = *First;
    *First = (*First) -> next;
    free (temp);
  }
}

void DeleteLast (PPNODE First){
  PNODE temp = NULL;
  if (*First == NULL){                        //case 1
    printf("Unable to delete, Linked List is Empty\n");
    return;
  }
  else if ((*First)-> next == NULL ){         //case2
    free (*First);
    *First = NULL;
  }
  else {                                      //case3
    temp = *First;
    while (temp->next->next != NULL){
      temp = temp -> next;
    }
    free (temp->next);
    temp->next = NULL;
  }
}

int Count (PNODE First){                      // Time Complexity : O(n)
  int iCnt = 0;
  while (First != NULL){
    iCnt ++;
    First = First -> next;
  }
  return iCnt;
}

void InsertAtPos (PPNODE First, int No, int iPos){
  int iLength = 0;
  PNODE newn = NULL;
  PNODE temp = NULL;
  int i = 0;
  iLength = Count(*First);
  if (iPos < 1 || iPos > (iLength + 1)){
    printf("Invalid Positions\n");
    return;
  }
  if (iPos == 1){
    InsertFirst(First,No);
  }
  else if (iPos == (iLength + 1)){
    InsertLast(First, No);
  }
  else {
    newn = (PNODE) malloc (sizeof (NODE));

    newn -> data = No;
    newn -> next =NULL;

    temp = *First;
    for (i = 1; i < (iPos-1); i++){
      temp = temp->next;
    }
    newn -> next = temp -> next;
    temp -> next = newn;
  }
}
void DeleteAtPos (PPNODE First, int iPos){
  int iLength = 0,i = 0;

  iLength = Count(*First);

  PNODE temp1 = NULL;
  PNODE temp2 = NULL;

  if (iPos < 1 || iPos > iLength){
    printf("Invalid Positions\n");
    return;
  }

  if (iPos == 1){
    DeleteFirst(First);
  }

  else if (iPos == iLength ){
    DeleteLast(First);
  }

  else {
    temp1 = *First;

    for (i = 1; i< (iPos - 1); i++){
      temp1 = temp1->next;
    }

    temp2 = temp1->next;

    temp1->next = temp2->next;
    free (temp2);
  }
}


void Display (PNODE First){                   // Time Complexity: O(n)
  while (First != NULL){
    printf("|%d| ->",First->data);
    First = First -> next;
  }
  printf("NULL\n");
}

int main (){
  PNODE Head = NULL;
  int iRet = 0;
  InsertFirst(&Head, 51);
  InsertFirst(&Head, 21);
  InsertFirst(&Head, 11);
  // Display (Head);
  // iRet = Count(Head);
  // printf("Total Nodes: %d\n", iRet );

  InsertLast(&Head, 101);
  InsertLast(&Head, 111);
  InsertLast(&Head, 121);
  InsertLast(&Head, 151);
  // Display (Head);

  InsertAtPos(&Head, 105, 5);
  Display(Head);
  iRet = Count(Head);
  printf("No. of Nodes: %d\n",iRet );

  DeleteAtPos(&Head, 5);
  Display(Head);
  iRet = Count(Head);
  printf("No. of Nodes: %d \n",iRet );

  return 0;
}
