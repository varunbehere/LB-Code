#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;               // 1
    while( iCnt <= iNo)     // 2
    {   
        printf("%d\n",iCnt);    // 4
        iCnt++;             // 3
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of times you want to display numbers on screen : ");
    scanf("%d",&iValue);

    Display(iValue);         

    return 0;
}