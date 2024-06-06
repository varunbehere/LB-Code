#include <stdio.h>
#include <stdbool.h>

int DisplayFactors(int iValue){
  int iCnt = 0;
  int iSum = 0;
  printf("Factors of %d are :\n",iValue);
  for (iCnt = 1; iCnt < iValue; iCnt++){
    if (iValue % iCnt == 0 ){
      iSum = iSum + iCnt;
    }
  }
  return iSum;
}

int main(){
  int iNo = 0;
  int iRet = 0;
  printf("Enter the Number :");
  scanf ("%d",&iNo);
  iRet = DisplayFactors(iNo);
  printf("Sumation of Factors : %d\n",iRet);
  return 0;
}
