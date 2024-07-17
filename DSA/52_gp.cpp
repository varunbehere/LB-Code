#include <iostream>
using namespace std;

int Addition (int iNo1, int iNo2){
  int iSum  = 0;
  iSum = iNo1 + iNo2;
  return iSum;
}

int main (){

  int iRet = 0;
  int iValue1 =0, iValue2 =0;
  cout<< "Enter numbers :: "<<endl;
  cin >> iValue1;
  cin >> iValue2;

  iRet = Addition (iValue1, iValue2);
  cout<<"Addition : "<< iRet<<endl;

  return 0;
}
