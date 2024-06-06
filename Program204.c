#include <stdio.h>

int Power(int iNo1, int iNo2){
  int iPowerResult = 0;
  int i = 0;
  iPowerResult = 1;
  for (i = 1; i <= iNo2; i++){
    iPowerResult = iPowerResult * iNo1;
  }
  return iPowerResult;
}
int main (){
  int iValue1 = 0 , iValue2 = 0;
  int iRet = 0;
  printf("Enter a Number :");
  scanf("%d", &iValue1);
  printf("Enter the power :");
  scanf("%d", &iValue2);

  iRet =  Power (iValue1,iValue2);
  printf("Result : %d\n", iRet);
  return 0;
}
