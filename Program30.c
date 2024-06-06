#include <stdio.h>

//Function Header
///////////////////////////////////////////////////////////
//
//      Function Name :       CalculateTicket
//      Description :         used  to generate ticket amount
//      Input :               Integer
//      Output :              Integer
//      Author Name :         Varun Behere
//      Date :                29-04-2024
//
///////////////////////////////////////////////////////////

int CalculateTicket(int iValue){
  if ((iValue >= 0) && (iValue <= 4)){
    return 0;
  }
  else if ((iValue > 4) && (iValue <= 10)){
    return 900;
  }
  else if ((iValue > 10) && (iValue <= 50)){
    return 2000;
  }
  else if(iValue>50){
    return 500;
  }
}

int main(){
  int iAge = 0;
  int iRet = 0;

  printf("enter your age:");
  scanf("%d",&iAge);

  iRet = CalculateTicket(iAge);
  printf("Your Ticket Price : %d",iRet);

  return 0;
}
