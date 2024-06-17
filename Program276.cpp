#include <iostream>
using namespace std;
void Display (int iNo){
  int i = 0;

  i= 1;
  while (i <= iNo) {
    cout <<i<<endl;
    i++;
  }

}

int main (){
  int iValue = 0;
  cout<<"Number : ";
  cin >>iValue;

  Display(iValue);
  return 0;
}
