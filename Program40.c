#include  <stdio.h>
#include  <stdbool.h>

bool CheckPerfect(int iNo){
  int iCnt = 0;
  int iSum = 0;
    if (iNo < 0){                           // Filter
      printf("Enter Positive only" );
      return false;
    }

    for (iCnt = 1 ; iCnt <= (iNo / 2); iCnt ++){
      if (iNo % iCnt == 0){
        iSum = iSum + iCnt;
      }
    }
    if (iSum == iNo){
      return true;
    }
    else{
      return false;
    }
}
int main(){
  int iValue = 0;
  bool bRet = false;

  printf("Enter a Number :");
  scanf("%d",&iValue);

  bRet = CheckPerfect (iValue);

  if (bRet == true){
    printf("%d is Perfect number",iValue);
  }
  else{
    printf("%d is not a Perfect number",iValue);
  }

  return 0;
}
