//7874
#include <stdio.h>

void EvenDisplay(int iNo){
  int iDigit = 0;
  int iCnt = 0;
  if (iNo < 0){
    iNo = -iNo;
  }
  while (iNo != 0){
    iDigit = iNo % 10;
    if (iDigit % 2 == 0){
      printf ("%d",iDigit);
    }
    iNo = iNo / 10;
  }
}
int main (){
  int iValue = 0;

  printf ("Enter Number:\n");
  scanf ("%d",&iValue);

  EvenDisplay(iValue);
  return 0;
}
