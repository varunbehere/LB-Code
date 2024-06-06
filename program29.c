#include <stdio.h>
#include <stdbool.h>

bool checkerFunction(int iValue){
  if ((iValue >= 10) && (iValue <= 20)){
    return true;
  }
  else{
    return false;
  }
}

int main (){
  int iNo = 0;
  bool bRet = false;

  printf("Enter a Number :");
  scanf("%d",&iNo);

  bRet = checkerFunction(iNo);
  if (bRet == true){
    printf("%d is in the range\n", iNo);
  }
  else{
    printf("%d is not in the range\n",iNo);
  }

  return 0;
}
