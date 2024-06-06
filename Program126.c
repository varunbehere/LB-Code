#include <stdio.h>
#include <stdlib.h>

void DisplayOdd (int arr[], int iSize){
  int i = 0;
  for (i = 0; i<iSize; i++){
    if (arr[i]%2 != 0){
      printf("%d\n", arr[i]);
    }
  }
}

int main (){
  int iCount = 0, i = 0;
  int *Brr = NULL;

  printf("Enter no of Elements you Want : " );
  scanf("%d",&iCount);

  Brr = (int *)malloc (iCount * sizeof(int));

  printf("Elements: ");
  for ( i = 0; i < iCount; i++) {
    scanf("%d", &Brr[i]);
  }
  printf("Odd Numbers from an Array : \n" );
  DisplayOdd (Brr, iCount);
  // printf("Addition: %d\n", iRet);

  free (Brr);

  return 0;
}
