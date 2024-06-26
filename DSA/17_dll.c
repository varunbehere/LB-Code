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

int main (){

  return 0;
}
