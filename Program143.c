#include <stdio.h>
#include <stdlib.h>

int Reverse(int arr[], int iSize){
  int iStart = 0,temp = 0, iEnd = 0;
  iEnd = iSize -1 ;
  while (iStart < iEnd){
    temp = arr[iStart];
    arr[iStart] = arr[iEnd];
    arr[iEnd] = temp;

    iStart ++;
    iEnd --;
  }

}

int main (){
  int iCount = 0, i =0, iRet = 0;
  int *Brr = NULL;
  printf("Enter Number of Elements that you want to enter : ");   //  1
  scanf ("%d",&iCount);

  Brr = (int *)malloc( iCount * sizeof(int));                     // 2

  printf("Enter the Elements: ");                                 // 3
  for (i = 0; i<iCount; i++){
    scanf ("%d",&Brr[i]);
  }
  Reverse(Brr, iCount);                                           //4
  printf("Elements after Display: \t" );
  for (i = 0; i< iCount; i++  ){
    printf("%d\t", Brr[i]);
  }
  printf("\n");
  free(Brr);                                                      // 5
  return 0;
}
