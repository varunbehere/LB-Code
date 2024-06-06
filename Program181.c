#include <stdio.h>
#include <stdbool.h>

void UpdateString (char *str){
  while (*str != '\0'){
    if (*str == ' '){
      *str = '*';
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



// for  String ==  Hello World
/*
  l is present in string : true
  Frequency of l : 3
  Frequency : 3
  First OCcurenes: 3
  Last Occurence : 10
*/
