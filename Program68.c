#include <stdio.h>

//1 2 3 4 5
void Display( int iNo){
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo  ; iCnt ++){
    printf ("* \t");
  }
  printf ("\n");
}
int main (){
  int iValue = 0;
  printf ("Enter frequency :");
  scanf ("%d",&iValue);

  Display(iValue);
  return 0;
}
