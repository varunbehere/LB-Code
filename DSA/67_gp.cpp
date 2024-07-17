#include <iostream>
using namespace std;

template <class T>

class ArrayX{
    public :
      T *Arr;
      int iSize;

    ArrayX(int No);
    ~ArrayX();
    void Accept ();
    void Display ();
    T Addition ();
};

template <class T>
ArrayX<T>::ArrayX(int No){
  iSize = No;
  Arr = new T[iSize];
}

template <class T>
ArrayX::~ArrayX(){
  delete []Arr;
}

template <class T>
void ArrayX::Accept (){
  int i = 0;
  cout<< "Enter the Elements: ";
  for (int i = 0; i< iSize; i++){
    cin>>Arr[i];
  }
}

template <class T>
void ArrayX:: Display (){
  int i = 0;
  cout<< "Elements: ";
  for (int i = 0; i< iSize; i++){
    cout<<Arr[i]<<"\t";
  }
}
template <class T>
T ArrayX:: Addition (){
  int  i = 0;
  T Sum = 0;
  for (i=0; i< iSize; i++){
    Sum += Arr[i];
  }
  return Sum;
}

int main() {
  ArrayX <float>aobj(5);
  aobj.Accept();
  aobj.Display();
  cout<<"\nAddition : "<<aobj.Addition()<<endl;
  return 0;
}
