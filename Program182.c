#include <stdio.h>
#include <stdbool.h>

void UpdateString (char *str){
  while (*str != '\0'){
    if (*str == ' '){
      *str = '_';
    }
    str++;
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