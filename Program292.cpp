// Recursive Code to return the total addition of digits

#include<iostream>
using namespace std;

int SumDigits( int iNo ){
  static int iSum = 0;
  int iDigit= 0;
  if(iNo != 0){
    iSum += (iNo % 10);
    SumDigits(iNo / 10);
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
