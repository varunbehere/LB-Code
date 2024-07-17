#include <iostream>
using namespace std;

void Swap (int &A, int &B){
  int Temp = 0;
  Temp = A;
  A = B;
  B = Temp;
}

int main (){
  int Value1 = 10, Value2 =20;
  cout <<"Value 1 :" << Value1<<endl;
  cout <<"Value 2 :" << Value2<<endl;

  Swap (Value1, Value2);
  cout<<"Values after swapping"<<endl;
  cout <<"Value 1 :" << Value1<<endl;
  cout <<"Value 2 :" << Value2<<endl;

  return 0;
}
