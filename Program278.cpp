#include<iostream>
using namespace std;

void Display(int iNo ){
  while (iNo>=0 ){
    cout<< iNo<<endl;
    iNo--;
  }
}

int main (){
  int iValue = 0;
  cout << "Enter a number : ";
  cin >> iValue;

  Display (iValue);
  return 0;
}
