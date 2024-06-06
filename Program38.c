#include <stdio.h>
#include <stdbool.h>

//Time comlpexity - O(n/2)
int DisplayFactors(int iValue){
  int iCnt = 0;
  printf("Factors of %d are :\n",iValue);
  for (iCnt = 1; iCnt <= (iValue/2); iCnt++){
    if (iValue % iCnt == 0 ){
      printf("%d\n", iCnt);
    }
  }
}

int main(){
  int iNo = 0;

  printf("Enter the Number :");
  scanf ("%d",&iNo);

  DisplayFactors(iNo);
  return 0;
}
