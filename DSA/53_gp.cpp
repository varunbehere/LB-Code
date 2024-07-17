#include <iostream>
using namespace std;

float Addition (float fNo1, float fNo2){
  float fSum  = 0;
  fSum = fNo1 + fNo2;

  return fSum;
}

int main (){

  float fRet = 0.0f;
  float fValue1 =0.0f, fValue2 =0.0f;
  cout<< "Enter numbers :: "<<endl;
  cfN >> fValue1;
  cfN >> fValue2;

  fRet = Addition (fValue1, fValue2);
  cout<<"Addition : "<< fRet<<endl;

  return 0;
}
