#include <stdio.h>
#include <stdbool.h>

bool CheckOccurence (char *str){
  bool bFlag = false;
  while (*str != '\0'){
    if (*str == 'l' || *str == 'L'){
      bFlag = true;
      break;
    }
    str++;
  }
  return bFlag;
}
int main (){
  bool bRet = false;
  char Arr [100];
  printf("Enter String : ");
  scanf ("%[^'\n']s", Arr);

  bRet = CheckOccurence(Arr);
  if (bRet == true){
    printf("Contains l/L\n");
  }
  else {
    printf("Does not have any l/L\n");
  }

  return 0;
}
