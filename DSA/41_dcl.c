#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node * prev;
  struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display (PNODE First, PNODE Last){
  if (First == NULL && Last == NULL){
    printf("LL is empty\n");
  }
  else{
    do{
      printf("|p|%d|n|-> ", First -> data);
      First = First -> next;
    }while (First != Last-> next);
  }
  printf("\n");
}

int Count (PNODE First, PNODE Last){
  int iCount = 0;
  do{
    iCount ++;
    First = First -> next;
  }while(First != Last -> next);
  return iCount;
}


void InsertFirst(PPNODE First, PPNODE Last, int No){
  PNODE newn = NULL;
  newn = (PNODE) malloc (sizeof (NODE));

  newn -> data = No;
  newn -> prev = NULL;
  newn -> next = NULL;

  if ((*First == NULL) && (*Last == NULL)){
    *First = newn;
    *Last = newn;
  }
  else{
    newn -> next = *First;
    (*First) -> prev = newn;
    *First = newn;
  }
  (*Last) -> next = *First;
  (*First) -> prev = *Last;
}
void InsertLast(PPNODE First, PPNODE Last, int No){
  PNODE newn = NULL;
  newn = (PNODE) malloc (sizeof (NODE));
  newn -> data = No;
  newn -> next = NULL;
  newn -> prev = NULL;

  if ((*First == NULL) && (*Last == NULL)){
    *First = newn;
    *Last = newn;
  }
  else{
    newn -> prev = *Last;
    (*Last) -> next = newn;
    *Last = newn;
  }
  (*Last) -> next = *First;
  (*First) -> prev = *Last;
}
void InsertAtPos(PPNODE First, PPNODE Last,int Pos, int No){

  int iLength = 0;

  iLength = Count (*First, *Last);

  if(Pos < 1 || Pos > (iLength +1)){
    printf("Invalid Position\n");
    return;
  }

  if (Pos == 1){
    InsertFirst (First, Last, No);
  }
  else if (Pos == (iLength+1)){
    InsertLast(First, Last, No);
  }
  else{
    int i = 0;
    PNODE newn = NULL;
    PNODE temp = *First;
    newn = (PNODE) malloc (sizeof (NODE));

    newn -> data = No;
    newn -> prev = NULL;
    newn -> next = NULL;

    for (i = 1; i <(Pos - 1); i++){
      temp = temp -> next;
    }
    newn -> prev = temp;
    newn -> next = temp -> next;

    newn -> next -> prev = newn;
    temp -> next = newn;
  }
}

void DeleteFirst(PPNODE First, PPNODE Last){
  if ((*First == NULL) && (*Last == NULL)){
    printf("Already Empty\n");
    return;
  }
  else if (*First == *Last){
    free (*First);
    *First = NULL;
    *Last =  NULL;
  }
  else{
    *First = (*First) -> next;
    free ((*First) -> prev);
  }
  (*First) -> prev = *Last;
  (*Last) -> next = *First;
}
void DeleteLast(PPNODE First, PPNODE Last){
  if ((*First == NULL) && (*Last == NULL)){
    printf("Already Empty\n");
    return;
  }

  else if (*First == *Last){
    // free(*First);
    *First = NULL;
    *Last = NULL;
  }
  else{
    *Last = (*Last) -> prev;
    free ((*Last) -> next);
    (*First) -> prev = *Last;
    (*Last) -> next = *First;
  }
}

void DeleteAtPos (PPNODE First, PPNODE Last, int Pos){
  int iLength = 0;
  iLength = Count(*First, *Last);
  if (Pos < 1 || Pos > iLength){
    printf("Invalid Position\n");
    return;
  }

  if (Pos == 1){
    DeleteFirst(First, Last);
  }
  else if (Pos == iLength){
    DeleteLast (First, Last);
  }
  else{
    int i = 0;
    PNODE temp = *First;
    for (i = 1; i < (Pos -1); i++){
      temp = temp-> next;
    }
    temp -> next = temp -> next -> next;
    free (temp->next->prev);
    temp -> next -> prev = temp;
  }
}


int main (){
  PNODE Head = NULL;
  PNODE Tail = NULL;
  int iRet = 0;

  //InsertFirst
  InsertFirst(&Head,&Tail,51);
  InsertFirst(&Head,&Tail,21);
  InsertFirst(&Head,&Tail,11);
  Display(Head, Tail);
  iRet = Count (Head, Tail);
  printf("Total Nodes: %d\n",iRet );

  // InsertLast
  InsertLast(&Head,&Tail,101);
  InsertLast(&Head,&Tail,111);
  InsertLast(&Head,&Tail,121);
  Display(Head, Tail);
  iRet = Count (Head, Tail);
  printf("Total Nodes: %d\n",iRet );

  // DeleteFirst(&Head,&Tail);
  DeleteFirst(&Head,&Tail);
  Display(Head, Tail);
  iRet = Count (Head, Tail);
  printf("Total Nodes: %d\n",iRet );

  // Delete Last
  DeleteLast(&Head,&Tail);
  Display(Head, Tail);
  iRet = Count (Head, Tail);
  printf("Total Nodes: %d\n",iRet );

  InsertAtPos(&Head,&Tail,3,71);
  Display(Head, Tail);
  iRet = Count (Head, Tail);
  printf("Total Nodes: %d\n",iRet );

  DeleteAtPos(&Head,&Tail,3);
  Display(Head, Tail);
  iRet = Count (Head, Tail);
  printf("Total Nodes: %d\n",iRet );

  return 0;
}
