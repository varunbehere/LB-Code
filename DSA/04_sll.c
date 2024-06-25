#include <stdio.h>
#include <stdlib.h>

struct node {           // total 12 bytes
  int data;             // 4 byte
  struct node *next;     // 8 byte
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

int main (){

  PNODE Head = NULL;

  NODE obj1;
  NODE obj3;
  NODE obj2;

  obj1.data = 11;
  obj1.next = &obj2;

  obj2.data = 21;
  obj2.next = &obj3;

  obj3.data = 51;
  obj3.next = NULL;

  Head = &obj1;


  printf(" Head : %d \n", Head );
  printf("&obj1 : %d \n", &obj1);
  printf("&obj2 : %d \n", &obj2);
  printf("&obj3 : %d \n", &obj3);


  return 0;
}
