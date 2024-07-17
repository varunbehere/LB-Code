#include <iostream>
using namespace std;

template <class T>

T Addition (T iNo1, T iNo2){
  T iSum  = 0;
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
