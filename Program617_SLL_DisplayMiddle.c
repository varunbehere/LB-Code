#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First -> next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
}

int Addition (PNODE First){
  int iSum = 0;
  while (First != NULL){
    iSum += (First ->data);
    First = First -> next;
  }
  return iSum;
}

int EvenCount (PNODE First){
  int iCnt = 0;
  while (First != NULL){
    if ((First -> data) % 2 == 0){
      iCnt ++;
    }
    First = First -> next;
  }
  return iCnt;
}

int OddCount (PNODE First){
  int iCnt = 0;
  while (First != NULL){
    if ((First -> data) % 2 != 0){
      iCnt ++;
    }
    First = First -> next;
  }
  return iCnt;
}

int CountFrequency (PNODE First, int iNo){
  int iCnt = 0;
  while (First != NULL){
    if ((First -> data) == iNo){
      iCnt ++;
    }
    First = First -> next;
  }
  return iCnt;
}

bool Search(PNODE First, int iNo){
  bool bFlag = false;

  while (First != NULL){
    if ((First -> data) == iNo){
      bFlag = true;
      break;
    }
    First = First -> next;
  }
  return bFlag;
}
//
// int FirstOccurence (PNODE First, int iNo){
//   int iCnt = 1;
//   bool bFlag = false;
//   while (First != NULL){
//     if ((First -> data) == iNo){
//       bFlag = true;
//       break;
//     }
//     iCnt ++;
//     First = First -> next;
//   }
//
//   if (bFlag == true ){
//     return iCnt;
//   }
//   else{
//     return -1;
//   }
// }


int FirstOccurence (PNODE First, int iNo){
  int iCnt = 1, iPos = -1;
  while (First != NULL){
    if ((First -> data) == iNo){
      iPos = iCnt;
      break;
    }
    iCnt ++;
    First = First -> next;
  }

  if (iPos == -1 ){
    return -1;
  }
  else{
    return iCnt;
  }
}

int LastOccurence (PNODE First, int iNo){
  int iCnt = 1, iPos = -1;
  while (First != NULL){
    if ((First -> data) == iNo){
      iPos = iCnt;
    }
    iCnt ++;
    First = First -> next;
  }
    return iPos;
}
void SumDigits(PNODE First){
  int iSum = 0, iDigit = 0, iNo = 0;
  while (First != NULL){
    iNo = (First -> data);
    while(iNo != 0){
      iDigit = iNo % 10;
      iSum += iDigit;
      iNo = iNo / 10;
    }
    printf("%d\t", iSum);
    iSum = 0;
    First = First -> next;
  }
  printf("\n");
}

void SumFactors(PNODE First){
  int iSum = 0, iNo = 0;
  while (First != NULL){
    iNo = (First -> data);
    for (int i  = 1; i<= (iNo / 2); i++){
      if (iNo % i == 0){
        iSum = iSum + i;
      }
    }
    printf("%d\t", iSum);
    iSum = 0;
    First = First -> next;
  }
  printf("\n");
}

bool CheckPerfect(int iNo)
{
    int iSum = 0;
    int i = 0;
    for(i = 1; i <= iNo/2;i++)
    {
     if(iNo % i == 0)
     {
         iSum = iSum +i;
     }
    }

    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void DisplayPerfect(PNODE First)
{
    while(First != NULL)
    {
        if(CheckPerfect(First->data) == true)
        {
            printf("The Perfect Number is : %d\n",First->data);
        }
       First = First->next;
    }
}

// int MiddleElement (PNODE First){                              /// It has higher time complexity = n + (n/2)
//     int iCnt = 0, iPos = 0;
//     PNODE temp = First;
//     while (temp != NULL){
//       iCnt ++;
//       First = First -> next;
//     }
//     iPos = iCnt / 2;
//     for (int i = 1; i < iPos; i++) {
//       First = First -> next;
//     }
//     return (First -> data);
// }

int MiddleElementUpdated (PNODE First){                             // has lesser complexity
  PNODE Teacher = First;
  PNODE Student = First;

  while( (Teacher != NULL) && (Teacher -> next != NULL)){
    Teacher = Teacher -> next -> next;
    Student = Student -> next;
  }
  return (Student -> data);
}

bool CheckLoop(PNODE First){
  PNODE Teacher = First;
  PNODE Student = First;

  bool bFlag = false;

  while ((Teacher != NULL) && (Teacher -> next != NULL)){}
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0,iValue = 0;
    bool bRet = false;

    InsertFirst(&Head,111);
    InsertFirst(&Head,101);
    InsertFirst(&Head,11);
    InsertFirst(&Head,51);
    InsertFirst(&Head,28);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    DisplayPerfect(Head);

    // iRet = MiddleElement(Head);
    // printf("Middle element: %d\n", iRet);
    //
    iRet = MiddleElementUpdated(Head);
    printf("Middle element: %d\n", iRet);

    return 0;
}
