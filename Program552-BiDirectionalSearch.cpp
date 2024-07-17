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
    bool LinearSearch(T Value);
    bool BidirectionalSearch(T Value);
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

template <class T>
bool ArrayX<T> :: LinearSearch (T Value){
  bool bFlag = false;
  int i = 0;
  for (i = 0; i< iSize; i++){
    if (Arr[i] == Value){
      bFlag = true;
      break;
    }
  }
  return bFlag;
}
template <class T>
bool ArrayX<T> :: BidirectionalSearch (T Value){
  bool bFlag = false;
  int i = 0;
  int iEnd = 0;
  iEnd = iSize-1;
  for (i = 0; i < (iSize / 2); i++, iEnd--){
    if (Arr[i] == Value || Arr[iEnd] == Value){
      bFlag = true;
      break;
    }
  }
  return bFlag;
}


int main (){
  int iLength = 0,No = 0;
  bool bRet  = false;

  cout<<"No of Elements: ";
  cin >> iLength;

  ArrayX<int> *aobj = new ArrayX<int> (iLength);

  aobj->Accept();
  aobj->Display();

  cout<<"Enter Element to search : ";
  cin >>No;

  // bRet  = aobj->LinearSearch(No);
  bRet = aobj -> BidirectionalSearch(No);
  if (bRet == true){
    cout<<"Found"<<endl;
  }
  else{
    cout<<"Not Found\n";
  }
  return 0;
}
