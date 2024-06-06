#include <stdio.h>

int Addition (int arr[], int iSize){
  int i = 0, iSum = 0;
  for (i = 0; i < iSize ; i++){
    iSum += arr[i];
  }
  return iSum;
}

int main (){
  int i = 0, iRet = 0;
  int brr[5];

  printf("Enter Elements: \n");
  for (i = 0; i < 5; i++){
    scanf ("%d",&brr[i]);
  }

  iRet = Addition(brr,5);
  printf("Addition : %d\n", iRet);
  return 0;
}
