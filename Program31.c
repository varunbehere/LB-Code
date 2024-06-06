#include <stdio.h>
#include <stdbool.h>

bool CheckDivisible(int iValue){
  if (iValue % 4 == 0 ){
    return true;
  }
  else{
    return false;
  }
}

int main(){
  int iNo = 0;
  bool bRet = false;

  printf("Enter the Number :");
  scanf ("%d",&iNo);

  bRet = CheckDivisible (iNo);
  if (bRet == true ){
    printf("%d is divisible by 4", iNo);
  }
  else{
    printf("%d is not divisible by 4", iNo);
  }
  return 0;
}
