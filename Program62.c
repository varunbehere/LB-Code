//7874
#include <stdio.h>

int SumCount(int iNo){
  int iDigit = 0;
  int iSum = 0;
  if (iNo < 0){
    iNo = -iNo;
  }
  while (iNo != 0){
    iDigit = iNo % 10;
    iSum = iSum + iDigit;
    iNo = iNo / 10;
  }
  return iSum ;
}
int main (){
  int iValue = 0;
  int iRet = 0;
  printf ("Enter Number:\n");
  scanf ("%d",&iValue);

  iRet = SumCount(iValue);
  printf ("Sum of Digits : %d",iRet);

  return 0;
}
