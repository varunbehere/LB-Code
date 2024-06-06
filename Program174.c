#include <stdio.h>
#include <stdbool.h>

bool CheckOccurence (char *str){
  bool bFlag = false;
  while (*str != '\0'){
    if (*str == 'w'){
      bFlag = true;
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
    printf("Contains w\n");
  }
  else {
    printf("Does not have any w\n");
  }

  return 0;
}
