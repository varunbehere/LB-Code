#include <iostream>
using namespace std;

void Display(int iNo){
  static int i = 1;
  // i = 1;
  if (i <= iNo){
    cout << "*"<< endl;
    i++;
    Display(iNo);
  }
}
int main (){
  int iValue = 0;
  cout<< "Enter number : "<<endl;
  cin >> iValue;
  Display (iValue);
  return 0;
}
