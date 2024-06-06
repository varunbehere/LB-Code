#include <stdio.h>
#include <stdlib.h>

int Addition (int arr[], int iSize){
  int i = 0, iSum = 0;
  for (i = 0; i < iSize ; i++){
    iSum += arr[i];
  }
  return iSum;
}

int main (){
  int iCount = 0, i = 0,iRet = 0;
  int *Brr = NULL;

// Step 1 : Accept number of Elements from user

  printf("Enter no of Elements you Want : " );
  scanf("%d",&iCount);

// Step 2 : Allocate dynamic memory for that no of Elements

  Brr = (int *)malloc (iCount * sizeof(int));

// Step 3 : Accept the values from user and store into that memory

  printf("Elements: ");
  for ( i = 0; i < iCount; i++) {
    scanf("%d", &Brr[i]);
  }
// Step 4 : Pass the address of that memory to the function

  iRet = Addition(Brr, iCount);
  printf("Addition: %d\n", iRet);

// Step 5 : After using that memory free it explicitly

  free (Brr);

  return 0;
}
/*
Step 1 : Accept number of Elements from user
Step 2 : Allocate dynamic memory for that no of Elements
Step 3 : Accept the values from user and store into that memory
Step 4 : Pass the address of that memory to the function
Step 5 : After using that memory free it explicitly


*/
