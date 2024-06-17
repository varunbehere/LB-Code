#include<iostream>
using namespace std;

int Addition( int iNo ){
  int iSum = 0, iCounter = 1;
  while (iCounter <= iNo){
    iSum = iSum + iCounter;
    iCounter++;
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
