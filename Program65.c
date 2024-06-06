#include <stdio.h>

int ReversedNumber(int iNo) {
  int iDigit = 0, iReversed =0;
  if (iNo < 0){
    iNo = -iNo;
  }
  while (iNo != 0){
    iDigit = iNo % 10;
    iReversed = ( iReversed * 10 ) + iDigit;
    iNo = iNo / 10;
  }
  return iReversed;
}
int main (){
  int iValue = 0, iRet = 0;

  printf ("Enter a Number : ");
  scanf("%d",&iValue);

  iRet = ReversedNumber(iValue);
  printf("Reversed Number : %d\n", iRet);
  return 0;
}
