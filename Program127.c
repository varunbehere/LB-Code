#include <stdio.h>
#include <stdlib.h>

int SumEven (int arr[], int iSize){
  int i = 0;
  int iSum = 0;
  for (i = 0; i<iSize; i++){
    if (arr[i]%2 == 0){
      iSum += arr[i];
    }
  }
  return iSum;
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
  printf("Even Numbers from an Array : \n" );
  iRet = SumEven (Brr, iCount);
  printf("Addition of Even: %d\n", iRet);

  free (Brr);

  return 0;
}
