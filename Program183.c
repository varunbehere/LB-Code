#include <stdio.h>
#include <stdbool.h>

void UpdateString (char *str){
  while (*str != '\0'){
    printf("%c\n",*str );
    str++;
  }
}
int main (){
  char Arr [100];
  printf("Enter String : ");
  scanf ("%[^'\n']s", Arr);
  return 0;
}
