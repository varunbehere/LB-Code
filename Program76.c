// Input = 0 
// Output = 0 1 2 3 4 5


#include <stdio.h>

void Display(int iNo){
  int iCnt = 0;
  for (iCnt = 0; iCnt <= iNo ; iCnt++ ){
    printf("%d  ", iCnt);
  }
}
int main(){
  int iValue = 0;
  printf("Enter the Frequency : ");
  scanf("%d", &iValue);

  Display(iValue);
    return 0;
}
