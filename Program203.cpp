#include <iostream>
using namespace std;
int Difference (int iNo){
  int iSumEven = 0, iSumOdd = 0;
  int iDigit = 0, iDifference = 0;
  while (iNo > 0){
    iDigit = iNo % 10;
    if (iDigit %2 == 0) {
      iSumEven = iSumEven + iDigit;
    }
    else{
      iSumOdd = iSumOdd + iDigit;
    }
    iNo /= 10;
  }
  iDifference = iSumEven - iSumOdd;
  return iDifference;
}
int main (){
  int iValue = 0;
  int iRet = 0;

  cout << "Number : ";
  cin >> iValue;

  iRet = Difference(iValue);
  cout<< "Difference : "<<iRet;
  return 0;
}
