#include <stdio.h>
#include <stdlib.h>

int Maximum(int arr[], int iSize){
  int i = 0, iMax = 0;
  for (i = 0 ; i<iSize ; i++){
    if  (arr[i] > iMax){
      iMax = arr[i];
    }
  }
  return iMax;
}

int main (){
  int iCount = 0, i =0, iRet = 0;
  int *Brr = NULL;
  printf("Maximum\n" );
  printf("Enter Number of Elements that you want to enter : ");   //  1
  scanf ("%d",&iCount);

  Brr = (int *)malloc( iCount * sizeof(int));                     // 2

  printf("Enter the Elements: ");                                 // 3
  for (i = 0; i<iCount; i++){
    scanf ("%d",&Brr[i]);
  }

  iRet = Maximum(Brr, iCount);                                    // 4
  printf("Maximum Number : %d\n", iRet );

  free(Brr);                                                      // 5
  return 0;
}
