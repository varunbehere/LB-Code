#include<iostream>
using namespace std;

int Addition( int iNo ){
  static int iSum = 0, iCounter = 1;
  if (iCounter <= iNo){
    iSum = iSum + iCounter;
    iCounter++;
    Addition(iNo);
  }
  return iSum;
}

int main (){
  int iValue = 0, iRet = 0;
  cout << "Enter a number : ";
  cin >> iValue;

  iRet = Addition (iValue);
  cout <<"Additon : "<<iRet<<endl;
  return 0;
}
