#include <stdio.h>

#include <stdlib.h>
struct node {
  int data;
  struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No){
  PNODE newn = NULL;
  newn = (PNODE) malloc (sizeof (NODE));

  newn -> data = No;
  newn -> next = NULL;

  if (*First == NULL){
    *First = newn;
  }
  else{
    newn->next = *First;
    *First = newn;
  }
}

void InsertLast(PPNODE First, int No){
  PNODE newn = NULL;
  newn = (PNODE) malloc (sizeof (NODE));

  newn -> data = No;
  newn -> next = NULL;

  if (*First == NULL){
    *First = newn;
  }
  else{
    PNODE temp = *First;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = newn;
  }
}

void Display(PNODE First){
  while (First != NULL){
    printf("|%d|-> ", First->data );
    First = First-> next;
  }
  printf("\n");
}


int main (){
  PNODE Head = NULL;

  InsertFirst(&Head, 50);
  InsertFirst(&Head, 30);
  InsertFirst(&Head, 10);
  Display(Head);

  InsertLast(&Head, 60);
  InsertLast(&Head, 70);
  InsertLast(&Head, 80);
  Display(Head);
  return 0;
}
