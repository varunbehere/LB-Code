#include <iostream>
using namespace std;

void Swap (char &A, char &B){
  char Temp = 0;
  Temp = A;
  A = B;
  B = Temp;
}

int main (){
  char Value1 = 'A', Value2 = 'B';
  cout <<"Value 1 :" << Value1<<endl;
  cout <<"Value 2 :" << Value2<<endl;

  Swap (Value1, Value2);
  cout<<"Values after swapping"<<endl;
  cout <<"Value 1 :" << Value1<<endl;
  cout <<"Value 2 :" << Value2<<endl;

  return 0;
}
