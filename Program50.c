#include<stdio.h>

int main(){
  int iNo = 9758;
  int iDigit = 0;

  iDigit = iNo % 10;      // 8

  printf("%d\n", iDigit);  // 8

  iNo = iNo / 10;          // 975
  iDigit = iNo % 10;       // 5
  printf("%d\n", iDigit);  // 5

  iNo = iNo / 10;          // 97
  iDigit = iNo % 10;       // 7
  printf("%d\n", iDigit);  // 7

  iNo = iNo / 10;          // 9
  iDigit = iNo % 10;       // 9
  printf("%d\n", iDigit);  // 9

  iNo = iNo /10 ;          // 0
  iDigit = iNo % 10;       // 0
  printf("%d\n", iDigit);  // 0
}
