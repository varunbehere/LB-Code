#include<stdio.h>

void Display(int iNo){
  int iDigit = 0;
  while (iNo != 0){
    iDigit = iNo % 2;
    printf("%d\t", iDigit );
    iNo = iNo / 2;
  }
  printf("\n");
}

int main (){
  int iValue = 0;

  printf("Value : ");
  scanf ("%d", &iValue);

  Display(iValue);

  return 0;
}


/*

2   |  12  |
2   |   6  | 0
2   |   3  | 0
2   |   1  | 1
2   |   0  | 1


*/
