//Input : 3 5
// Output : 1 1 1 1 1
//          2 2 2 2 2
//          3 3 3 3 3


#include <stdio.h>

void Display(int iRows, int iCol){
  int i = 0, j = 0;
  for (i =1 ; i<= iRows; i++){
    for (j = 1 ; j <= iCol; j++){
      printf("%d\t",i);
    }
    printf("\n");
  }
}
int main (){
  int iValue1 = 0, iValue2 = 0;
  printf("Enter No. of Rows : ");
  scanf("%d", &iValue1);

  printf("Enter No. of Columns : ");
  scanf("%d", &iValue2);

  Display (iValue1, iValue2);
  return 0;
}
