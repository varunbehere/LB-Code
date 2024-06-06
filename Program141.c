#include <stdio.h>
#include <stdlib.h>

int Display(int arr[], int iSize){
  int i = 0;
  for (i= (iSize-1) ; i>=0; i--){
    printf("%d\t", arr[i]);
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
  Display(Brr, iCount);                                          //
  free(Brr);                                                      // 5
  return 0;
}
