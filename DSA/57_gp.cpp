#include <iostream>
using namespace std;

template <class T>

void Swap (T &A, T &B){
  T Temp = 0;
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

  cout<<endl<<endl;

  int Value11 = 10, Value21 = 20;
  cout <<"Value 1 :" << Value11<<endl;
  cout <<"Value 2 :" << Value21<<endl;

  Swap (Value11, Value21);
  cout<<"Values after swapping"<<endl;
  cout <<"Value 1 :" << Value11<<endl;
  cout <<"Value 2 :" << Value21<<endl;

  return 0;
}
