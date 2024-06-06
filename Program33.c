#include<stdio.h>

void Display(int iValue){
  for (int iCnt = 1; iCnt <= (iValue/2) ; iCnt++){
    printf("%d\n", iCnt);
  }
}

int main(){
  int iNo = 0;

  printf("Enter the Number :");
  scanf ("%d",&iNo);

  Display (iNo);
  return 0;
}
