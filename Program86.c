// Input = 5
// Output = -5 -4 -3 -2 -1 0 1 2 3 4 5

#include <stdio.h>

void Display(int iNo){
  int iCnt = 0;
  for (iCnt = -iNo; iCnt <= 5 ; iCnt++ ){
    printf("%d\t",iCnt);
  }
}
int main(){
  int iValue = 0;
  printf("Enter the Frequency : ");
  scanf("%d", &iValue);

  Display(iValue);
    return 0;
}
