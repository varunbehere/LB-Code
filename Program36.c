#include <stdio.h>
#include <stdbool.h>

int CountFactors(int iValue){
  int iCnt = 0;
  int iCntFactors = 0;
  printf("Factors of %d are :\n",iValue);
  for (iCnt = 1; iCnt < iValue; iCnt++){
    if (iValue % iCnt == 0 ){
      iCntFactors++;
    }
  }
  return iCntFactors;
}

int main(){
  int iNo = 0;
  int iRet = 0;
  printf("Enter the Number :");
  scanf ("%d",&iNo);
  iRet = CountFactors(iNo);
  printf("Total No. of Factors : %d\n",iRet);
  return 0;
}
