#include <stdio.h>
#include <stdlib.h>

int CountOdd (int arr[], int iSize){
  int i = 0;
  int iFreq = 0;
  for (i = 0; i<iSize; i++){
    if (arr[i]%2 != 0){
      iFreq ++;
    }
  }
  return iFreq;
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
  iRet = CountOdd (Brr, iCount);
  printf("Frquency of Odd Numbers: %d\n", iRet);

  free (Brr);

  return 0;
}
