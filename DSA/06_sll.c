//started

#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node * next;
};

typedef struct node NODE;           // used to create the node
typedef struct node * PNODE;        // used to store the address of the node
typedef struct node ** PPNODE;      // used to store the address of the pointer

int main (){

  PNODE Head = NULL;

  return 0;
}
