#include<stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst (PPNODE First, int No){
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

void InsertLast (PPNODE First, int No){

  PNODE newn = NULL;
  newn = (PNODE) malloc (sizeof (NODE));

  PNODE temp = NULL;
  temp = (PNODE) malloc (sizeof (NODE));

  newn -> data = No;
  newn -> next = NULL;

  if (*First == NULL){
    *First = newn;
  }
  else {
    temp = *First;
    while (temp -> next != NULL) {
      temp = temp -> next;
    }
    temp->next = newn;
  }

}

void Display (PNODE First){
  while (First != NULL){
    printf("|%d|-> ", First->data);
    First = First -> next;
  }
  printf("NULL\n");
}

int main (){
  PNODE Head = NULL;
  printf("InsertFirst :\n");
  InsertFirst(&Head, 130);
  InsertFirst(&Head, 120);
  InsertFirst(&Head, 110);

  Display (Head);

  printf("InsertLast: \n");
  InsertLast(&Head, 140);
  InsertLast(&Head, 150);
  InsertLast(&Head, 160);

  Display (Head);

  return 0;
 }
