#include <stdio.h>

//*****
void Display(int iNo){
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo ; iCnt ++){
    printf ("* \t");
  }
  printf ("\n");
}
int main (){
  Display(5);
  return 0;
}
