#include<stdio.h>

unsigned long long int Factorial(int iNo) {
    int iCnt = 0;
    unsigned long long int iFact = 1;
    iCnt = 1;
    while (iCnt <= iNo){
      iFact = iFact * iCnt;
      iCnt++;
    } 


    return iFact;
}

int main() {
    int iValue = 0;
    unsigned long long int iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("%llu is the factorial of %d", iRet, iValue);

    return 0;
}
