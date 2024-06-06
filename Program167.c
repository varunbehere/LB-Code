#include <stdio.h>

int strlenCapital (char *str){
  int iCnt = 0;
  while (*str != '\0'){
    if ((*str >= 65) && (*str <= 90)){        //ascii values of A and Z
      iCnt ++;
    }
    str++;
  }
  return iCnt;
}
int main (){
  int iRet = 0;
  char Arr [20];
  printf("Enter String : ");
  scanf ("%[^'\n']s", Arr);

  iRet = strlenCapital(Arr);
  printf("No of Capitals : %d\n", iRet );

  return 0;
}
