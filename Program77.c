// Input = 5
// Output = 1 1 2 2 3 3 4 4 5 5


#include <stdio.h>

void Display(int iNo){
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo ; iCnt++ ){
    printf("%d\t%d\t", iCnt, iCnt);
  }
}
int main(){
  int iValue = 0;
  printf("Enter the Frequency : ");
  scanf("%d", &iValue);

  Display(iValue);
    return 0;
}