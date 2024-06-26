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

void Display (PNODE First){}
int Count (PNODE First){
  return 0;
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

  newn -> prev = NULL;                                // newline
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
    newn->prev = temp;                                // newline
  }
}
void InserAtPos (PPNODE First, int No, int iPos){}

void DeleteFirst(PPNODE First, int No){}
void DeleteLast (PPNODE First, int No){}
void DeleteAtPos (PPNODE First, int No, int iPos){}

int main (){
  PNODE Head = NULL;
  InsertFirst(&Head, 8);
  InsertFirst(&Head, 4);
  InsertFirst(&Head, 12);
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
