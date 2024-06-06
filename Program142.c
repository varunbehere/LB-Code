#include <stdio.h>
#include <stdlib.h>

int Swap (int *p, int *q){
  int temp = 0;
  temp = *p;
  *p = *q;
  *q = temp;
}

int main (){
  int A = 0, B = 0;

  printf("Enter FIrst Number :\n" );
  scanf ("%d", &A);

  printf("Enter Second Number :\n" );
  scanf ("%d", &B);

  Swap (&A, &B);

  printf("Value of A after Swapping : %d\n", A);
  printf("Value of B after Swapping : %d\n", B);
  return 0;
}
