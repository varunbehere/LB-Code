#include <stdio.h>
#include <stdbool.h>

int CountFrequency (char *str, char charSearch){
  int iCnt = 1, iPos = -1;
  while (*str != '\0'){
    if (*str == charSearch){
      iPos =iCnt;
    }
    iCnt++;
    str++;
  }
  return iPos;
}
int main (){
  int iRet = 0 ;
  char Arr [100];
  char cValue = '\0';

  printf("Enter String : ");
  scanf ("%[^'\n']s", Arr);

  printf("Enter the character you want to search: ");
  scanf (" %c", &cValue); // space bar resolves the issue of character not getting aceepted

  iRet = CountFrequency(Arr,cValue);
  if (iRet == -1){
    printf("There is no such letter \n");
  }
  else{
    printf("Last occurence of the letter is : %d\n",iRet );
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
