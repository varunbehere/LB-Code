//Approach 1
#include <iostream>
using namespace std;
int main (){
  int iValue1 = 0, iValue2 = 0;
  int iAns = 0;

  cout << "Enter the first number :";
  cin>>iValue1;

  cout <<"Enter the second number :";
  cin>>iValue2;

  iAns = iValue1 +  iValue2;
  std::cout << "Addition is : " << iAns<< '\n';
  return 0;
}
