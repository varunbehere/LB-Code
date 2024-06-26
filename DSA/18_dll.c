#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
  struct node *prev;    // new in this
}

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node** PPNODE;

void Display (PNODE First){}
int Count (PNODE First){
  return 0;
}
void InsertFirst(PPNODE First, int No){}
void InsertLast (PPNODE First, int No){}
void InserAtPos (PPNODE First, int No, int iPos){}

void DeleteFirst(PPNODE First, int No){}
void DeleteLast (PPNODE First, int No){}
void DeleteAtPos (PPNODE First, int No, int iPos){}

int main (){

  return 0;
}
