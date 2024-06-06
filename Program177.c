#include <stdio.h>
#include <stdbool.h>

bool CheckOccurence (char *str, char charSearch){
  bool bFlag = false;
  while (*str != '\0'){
    if (*str == charSearch){
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
  char cValue = '\0';

  printf("Enter String : ");
  scanf ("%[^'\n']s", Arr);

  printf("Enter the character you want to search: ");
  scanf (" %c", &cValue); // space bar resolves the issue of character not getting aceepted


  bRet = CheckOccurence(Arr,cValue);
  if (bRet == true){
    printf("character is present \n");
  }
  else {
    printf("character is not present \n");
  }

  return 0;
}
