#include <iostream>
using namespace std;

template <class T>

class ArrayX{
  public:
    T *Arr;
    int iSize;

    ArrayX(int Value);
    ~ArrayX();
    void Accept ();
    void Display ();
};

template <class T>
ArrayX<T> :: ArrayX(int Value){
  this->iSize = Value;
  this-> Arr = new T [iSize];
}

template <class T>
ArrayX<T> :: ~ArrayX(){
  delete []Arr;
}

template <class T>
void ArrayX<T> :: Accept (){
  int i = 0;
  cout<<"Enter Elements: "<<endl;
  for (i = 0; i< iSize; i++){
    cin >> Arr[i];
  }
}

template <class T>
void ArrayX<T> :: Display (){
  int i = 0;
  cout<<"Entered Elements: "<<endl;
  for (i = 0; i< iSize; i++){
    cout<< Arr[i] <<"\t";
  }
  cout<< endl;
}

int main (){
  int iLength = 0;

  cout<<"No of Elements: ";
  cin >> iLength;

  ArrayX<int> *aobj = new ArrayX<int> (iLength);
  aobj->Accept();
  aobj->Display();

  return 0;
}
