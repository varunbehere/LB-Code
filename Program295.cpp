#include<iostream>
using namespace std;

void Factors( int iNo ){
  int i = 0;
  cout<<"Factors : ";
  for (i = 1; i<= (iNo/2); i++){
    if (iNo % i == 0){
      cout<<i<<endl;
    }
  }
}

int main (){
  int iValue = 0;
  cout << "Enter a number : ";
  cin >> iValue;
  Factors(iValue);
  return 0;
}
