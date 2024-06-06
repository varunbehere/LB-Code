#include <stdio.h>
#include <stdlib.h>

int Updator(int arr[], int iSize){
  int i = 0;
  for (i= 0 ; i<iSize; i++){
    arr[i] *= 2;
  }
}

int main (){
  int iCount = 0, i =0, iRet = 0;
  int *Brr = NULL;
  printf("Enter Number of Elements that you want to enter : ");   //  1
  scanf ("%d",&iCount);

  Brr = (int *)malloc( iCount * sizeof(int));                     // 2

  printf("Enter the Elements: ");                                 // 3
  for (i = 0; i<iCount; i++){
    scanf ("%d",&Brr[i]);
  }
  Updator(Brr, iCount);                                          // 4
  printf("Data after updation: \n");
  for (i = 0; i<iCount; i++){
    printf("%d\t", Brr[i] );
  }
  printf("\n");
  free(Brr);                                                      // 5
  return 0;
}
