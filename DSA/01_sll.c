#include <stdio.h>
#include <stdlib.h>

//known as self referential structure
struct node {           // total 12 bytes
  int data;             // 4 byte
  struct node *next;     // 8 byte
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;


int main (){
  struct node *Head = NULL;
  struct node obj;
  return 0;
}
