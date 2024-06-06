#include <stdio.h>

int Addition (int ptr[], int iSize){
  int i = 0, iSum = 0;
  for (i = 0; i < iSize ; i++){
    iSum += ptr[i];
  }
  return iSum;
}

int main (){
  int i = 0, iRet = 0;
  int arr[5];

  printf("Enter Elements: \n");
  for (i = 0; i < 5; i++){
    scanf ("%d",&arr[i]);
  }

  iRet = Addition(arr,5);
  printf("Addition : %d\n", iRet);
  return 0;
}
