//Program with array traversal for string or character array

#include <stdio.h>
#include <stdbool.h>

void UpdateString (char *str){
  int iCnt = 0;
  for (iCnt = 0 ; str[iCnt] != '\0'; iCnt++){
    printf("%c\n", str[iCnt] );
  }
}

int main (){
  char Arr [100];
  printf("Enter String : ");
  scanf ("%[^'\n']s", Arr);
  UpdateString(Arr);
  printf("Updated String: %s\n",Arr);
  return 0;
}
