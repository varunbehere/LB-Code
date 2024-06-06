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
  int arr[5] = {10,20,30,40,50};
  iRet = Addition(arr,5);
  printf("Addition : %d\n", iRet);
  return 0;
}
