// Recursive Code to return the total no of digits

#include<iostream>
using namespace std;

int Display( int iNo ){
  static int iCnt = 0;
  if(iNo != 0){
    iCnt ++;
    iNo = iNo / 10;
    Display(iNo);
  };
  return iCnt;
}

int main (){
  int iValue = 0, iRet = 0;
  cout << "Enter a number : ";
  cin >> iValue;

  iRet = Display (iValue);
  cout <<"Total no of digits : "<< iRet << endl ;
  return 0;
}
