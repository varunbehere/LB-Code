#include <stdio.h>
#include <stdlib.h>

_____ _____ (int arr[], int iSize){

}

int main (){
  int iCount = 0, i = 0,iRet = 0;
  int *Brr = NULL;

  printf("Enter no of Elements you Want : " );
  scanf("%d",&iCount);

  Brr = (int *)malloc (iCount * sizeof(int));

  printf("Elements: ");
  for ( i = 0; i < iCount; i++) {
    scanf("%d", &Brr[i]);
  }

  iRet = ___________ n(Brr, iCount);
  printf("Addition: %d\n", iRet);

  free (Brr);

  return 0;
}
