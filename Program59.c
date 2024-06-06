//7874
#include <stdio.h>

int OddCount(int iNo){
  int iDigit = 0;
  int iCnt = 0;
  if (iNo < 0){
    iNo = -iNo;
  }
  while (iNo != 0){
    iDigit = iNo % 10;
    if (iDigit % 2 != 0){
      iCnt ++;
    }
    iNo = iNo / 10;
  }
  return iCnt ;
}
int main (){
  int iValue = 0;
  int iRet = 0;
  printf ("Enter Number:\n");
  scanf ("%d",&iValue);

  iRet = OddCount(iValue);
  printf ("Total no. of Odd Digits : %d",iRet);

  return 0;
}
