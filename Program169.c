#include <stdio.h>

int strlenSmall (char *str){
  int iCnt = 0;
  while (*str != '\0'){
    if ((*str >= 97) && (*str <= 122)){ // ascii value of a and z
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

  iRet = strlenSmall(Arr);
  printf("No of Smalls : %d\n", iRet );

  return 0;
}
