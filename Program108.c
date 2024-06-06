#include <stdio.h>

/*
  #
  #   #
  #   #   #
  #   #   #   #
*/

void Display(int iRows, int iCol){
  int i = 0, j = 0;
  if (iRows != iCol){
    printf("No of Columns and No of Rows Not equal");
    return;
  }
  for (i =1 ; i<= iRows; i++){
    for (j = 1 ; j <= iCol; j++){
      if (i >= j){
        printf("%d\t",j);
      }
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
