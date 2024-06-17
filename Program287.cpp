// Iterative code to return the total no of digits

#include<iostream>
using namespace std;

int Display( int iNo ){
  int iCnt = 0;
  while(iNo != 0){
    iCnt ++;
    iNo = iNo / 10;
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
