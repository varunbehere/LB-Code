#include <stdio.h>

void Display(){
  int iCnt =0;
  for (iCnt = 1; iCnt <= 4; iCnt ++){
    printf("*\t");
  }
  printf("\n");
  for (iCnt = 1; iCnt <= 4; iCnt ++){
    printf("*\t");
  }
  printf("\n");
  for (iCnt = 1; iCnt <= 4; iCnt ++){
    printf("*\t");
  }
}
int main (){
  Display();
  return 0;
}
