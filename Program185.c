#include <stdio.h>

void strrevx (char *str){
  char *start = str;
  char *end = str;
  char temp;
  while (*end  != '\0'){
    end++;
  }
  end--;
  while(start < end ){
    temp = *start;
    *start = *end;
    *end = temp;

    start++;
    end--;
  }
}

int main (){
  char Arr [100];
  printf("Enter String : ");
  scanf ("%[^'\n']s", Arr);
  strrevx(Arr);
  printf("Reversed String: %s\n",Arr);
  return 0;
}
