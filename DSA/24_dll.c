#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
  struct node *prev;    // new in this
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node** PPNODE;

void Display (PNODE First){
  printf("NULL <=>");
  while (First != NULL){
    printf("| %d | <=>",First -> data );
    First = First -> next;
  }
  printf("NULL\n");

}
int Count (PNODE First){
  int iCnt = 0;
  while (First != NULL){
    iCnt ++;
    First = First -> next;
  }
  return iCnt;
}

void InsertFirst(PPNODE First, int No){
  PNODE newn = NULL;
  newn = (PNODE) malloc (sizeof (NODE));

  newn->prev = NULL;                               //newline
  newn->data = No;
  newn->next = NULL;

  if (*First == NULL){
    *First = newn;
  }
  else{
    newn->next = *First;
    (*First) -> prev = newn;                        //newnline
    *First = newn;
  }
}

void InsertLast (PPNODE First, int No){
  PNODE temp = NULL;
  PNODE newn = NULL;
  newn = (PNODE)malloc (sizeof (NODE));

  newn -> prev = NULL;                             //newline
  newn -> data = No;
  newn -> next = NULL;

  if (*First == NULL){
    *First = newn;
  }
  else {
    temp = *First;
    while (temp->next != NULL){
      temp = temp-> next;
    }
    temp-> next = newn;
    newn->prev = temp;                              //newline
  }
}
void InsertAtPos (PPNODE First, int No, int iPos){
  int iLength = 0, i= 0;
  PNODE newn = NULL;
  PNODE temp = NULL;
  iLength = Count (*First);

  if (iPos < 1 || iPos > (iLength + 1)){
    printf("Invalid Position\n");
  }
  if (iPos == 1){
    InsertFirst(First,No);
  }
  else if (iPos == (iLength + 1)){
    InsertLast(First,No);
  }
  else{
    newn = (PNODE) malloc (sizeof (NODE));

    newn -> prev = NULL;
    newn -> data = No;
    newn -> next = NULL;

    temp = *First;
    for ( i = 1; i < (iPos - 1); i++){
      temp = temp -> next;
    }

    newn -> next = temp->next;
    temp -> next -> prev = newn;                          // newline      - sets the node which was after temp previosly, its prev is set to newn
    temp -> next = newn;
    newn -> prev = temp;                                  // newline       - sets prev of newn to the temp where we are at

  }

}

void DeleteFirst(PPNODE First){
  if (*First == NULL){}
  else if ((*First)-> next == NULL ){
    free (*First);
    *First = NULL;
  }
  else{
    *First = (*First) -> next;
    free ((*First)-> prev);               //newline
    (*First) -> prev = NULL;              //newline
  }
}

void DeleteLast (PPNODE First){
  PNODE temp = NULL;
  if (*First == NULL){}
  else if ((*First)-> next == NULL ){
    free (*First);
    *First = NULL;
  }
  else{
    temp = *First;
    while (temp->next->next != NULL){
      temp = temp -> next;
    }
    free( temp -> next);
    temp -> next = NULL;
  }
}
void DeleteAtPos (PPNODE First, int iPos){

  int iLength = 0, i= 0;
  PNODE temp = NULL;
  iLength = Count (*First);

  if (iPos < 1 || iPos > iLength){
    printf("Invalid Position\n");
  }
  if (iPos == 1){
    DeleteFirst(First);
  }
  else if (iPos == (iLength + 1)){
    DeleteLast(First);
  }
  else{

    temp = *First;
    for ( i = 1; i < (iPos - 1); i++){
      temp = temp -> next;
    }

    temp -> next = temp -> next -> next;
    free (temp->next->prev);
    temp->next->prev = temp;
  }
}

int main (){
  int iRet = 0;
  PNODE Head = NULL;
  InsertFirst(&Head, 8);
  InsertFirst(&Head, 4);
  InsertFirst(&Head, 12);

  InsertLast(&Head, 5);
  InsertLast(&Head, 18);
  InsertLast(&Head, 3);
  Display(Head);
  iRet = Count (Head);
  printf("No of Nodes: %d \n", iRet );


  // DeleteFirst(&Head);
  // Display(Head);
  // iRet = Count (Head);
  // printf("No of Nodes: %d \n", iRet );
  //
  // DeleteLast(&Head);
  // Display(Head);
  // iRet = Count (Head);
  // printf("No of Nodes: %d \n", iRet );

  InsertAtPos (&Head,11,5);
  Display(Head);

  DeleteAtPos (&Head,5);
  Display(Head);

  return 0;
}


/*
  InsertFirst Steps:
  1. Create a new node for storing
  2. Allocate memory to it
  3. Initialize it with data and prev, next to NULL
  4. If *First is NULL then directly allocate it to * First
  5. Else newn->next = *First, (*First)-> prev = newn, *First = newn
     That is
            set the newn's next to *First that is previous first nodes address
            set the previous first node's prev to newn
            set the *First to newn to make it first
*/
