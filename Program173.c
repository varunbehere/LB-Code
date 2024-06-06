#include <stdio.h>

int countSpace (char *str){
  int iCnt = 0;
  while (*str != '\0'){
    if (*str == ' '){   
      iCnt ++;
    }
    str++;
  }
  return iCnt;
}
int main (){
  int iRet = 0;
  char Arr [100];
  printf("Enter String : ");
  scanf ("%[^'\n']s", Arr);

  iRet = countSpace(Arr);
  printf("No of Spaces  : %d\n", iRet );

  return 0;
}
