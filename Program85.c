// Input = 5
// Output = -5 5 -4 4 -3 3 -2 2 -1 1

#include <stdio.h>

void Display(int iNo){
  int iCnt = 0;
  if (iNo > 0 ){
    iNo = -iNo;
  }
  for (iCnt = iNo; iCnt < 0 ; iCnt++ ){
    printf("%d\t%d\t",iCnt,-iCnt);
  }
}
int main(){
  int iValue = 0;
  printf("Enter the Frequency : ");
  scanf("%d", &iValue);

  Display(iValue);
    return 0;
}
