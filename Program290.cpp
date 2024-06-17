// Recursive Code to return the total addition of digits

#include<iostream>
using namespace std;

int SumDigits( int iNo ){
  static int iSum = 0;
  int iDigit= 0;
  if(iNo != 0){
    iDigit = iNo %10;
    iSum += iDigit;
    iNo = iNo / 10;
    SumDigits(iNo);
  };
  return iSum;
}

int main (){
  int iValue = 0, iRet = 0;
  cout << "Enter a number : ";
  cin >> iValue;

  iRet = SumDigits (iValue);
  cout <<"Sum of digits : "<< iRet << endl ;
  return 0;
}
