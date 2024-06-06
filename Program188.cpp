// Approach 2

#include <iostream>
using namespace std;
int Add (int iNo1, int iNo2) {
  int iAns = 0;
  iAns = iNo1 + iNo2;
  return iAns;
}
int main (){
  int iValue1 = 0, iValue2 = 0;

  int iRet = 0;
  cout << "First Number : ";
  cin >> iValue1;

  cout<< "Second Number : ";
  cin >> iValue2;

  iRet = Add (iValue1, iValue2);
  cout<< "Addition is : "<< iRet<<"\n";

  return 0;
}
