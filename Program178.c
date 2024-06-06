#include <stdio.h>
#include <stdbool.h>

int CheckOccurence (char *str, char charSearch){
  bool bFlag = false;
  int iCnt = 1;
  while (*str != '\0'){
    if (*str == charSearch){
      bFlag = true;
      break;
    }
    iCnt++;
    str++;
  }
  if (bFlag == true){
    return iCnt;
  }
  else{
    return -1;
  }
}
int main (){
  int iRet = 0 ;
  char Arr [100];
  char cValue = '\0';

  printf("Enter String : ");
  scanf ("%[^'\n']s", Arr);

  printf("Enter the character you want to search: ");
  scanf (" %c", &cValue); // space bar resolves the issue of character not getting aceepted


  iRet = CheckOccurence(Arr,cValue);
  if (iRet != -1){
    printf("character present at : %d\n", iRet );
  }
  else{
    printf("There is no such letter\n");
  }

  return 0;
}



// for  String ==  Hello World
/*
  l is present in string : true
  Frequency of l : 3
  Frequency : 3
  First OCcurenes: 3
  Last Occurence : 10




*/
