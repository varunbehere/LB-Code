#include <iostream>
using namespace std;

int SumFactors (int iNo){
  int iCnt = 0;
  int iSum = 0;
  for (iCnt = 1 ; iCnt <= (iNo/2); iCnt++){
    if ((iNo % iCnt) == 0){
      iSum += iCnt;
    }
  }
  return iSum;
}

int main (){
  int iValue = 0;
  int iRet = 0;
  cout << "Number : ";
  cin >> iValue;

  iRet = SumFactors(iValue);
  cout << "Sum of Factors : "<< iRet << '\n';

  return 0;
}
