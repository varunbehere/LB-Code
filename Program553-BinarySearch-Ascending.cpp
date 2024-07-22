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
    bool BinarySearch(T Value);
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
  int iStart = 0, iEnd = 0;
  for (iStart = 0,iEnd = iSize-1; iStart <= iEnd; iStart++, iEnd--){
    if (Arr[iStart] == Value || Arr[iEnd] == Value){
      bFlag = true;
      break;
    }
  }
  return bFlag;
}
template <class T>
bool ArrayX<T> :: BinarySearch (T Value){

  int iStart = 0, iEnd = 0;
  iEnd = iSize - 1;
  bool bFlag = false;

  while (iStart <= iEnd ){
    int iMid = iStart + ((iEnd - iStart) / 2);
    if (Arr[iMid] == Value){
      bFlag = true;
      break;
    }
    else if (Value > Arr[iMid]){
      iStart = iMid + 1;
    }
    else if (Value < Arr [iMid]){
      iEnd = iMid - 1;
    }
  }
  return bFlag;


  // int iStart = 0, iEnd = iSize - 1;
  // bool bFlag = false;
  // while (iStart <= iEnd) {
  //     int iMid = iStart + ((iEnd - iStart) / 2);
  //     if (Arr[iMid] == Value) {
  //         bFlag = true;
  //         break;
  //     }
  //     else if (Value > Arr[iMid]) {
  //         iStart = iMid + 1;
  //     }
  //     else {
  //         iEnd = iMid - 1;
  //     }
  // }
  // return bFlag;
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
  // bRet = aobj -> BidirectionalSearch(No);
  bRet = aobj -> BinarySearch(No);
  if (bRet == true){
    cout<<"Found"<<endl;
  }
  else{
    cout<<"Not Found\n";
  }
  return 0;
}
