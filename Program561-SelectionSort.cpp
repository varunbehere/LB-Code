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
    void BubbleSort();
    void BubbleSortEfficient();
    void SelectionSort();
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
  // cout<<"Entered Elements: "<<endl;
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
      iEnd = iMid - 1;
    }
    else if (Value < Arr [iMid]){
      iStart = iMid + 1;
    }
  }
  return bFlag;
}
template <class T>
void ArrayX<T> :: BubbleSort (){
  T temp;
  int i  = 0, j = 0;
  for (i = 0; i < iSize-1; i++) { // added -1 to remove extra 1 pass
    for (j = 0; j < iSize-1-i; j++) { /// change over here added -i
      if (Arr[j] > Arr [j+1]){
        temp = Arr[j];
        Arr[j] = Arr[j+1];
        Arr[j+1] = temp;
      }
    }
    cout<<"Array after pass " <<i+1<<endl;
    Display();
  }
}
template <class T>
void ArrayX<T> :: BubbleSortEfficient (){
  T temp;
  int i  = 0, j = 0;
  bool flag = false;                      // added

  for (i = 0; i < iSize-1; i++) {
    flag = false;                          //added
    for (j = 0; j < iSize-1-i; j++) {
      if (Arr[j] > Arr [j+1]){
        temp = Arr[j];
        Arr[j] = Arr[j+1];
        Arr[j+1] = temp;
        flag = true;                       //added
      }
    }
    if (flag == false){                   //added
      break;
    }
    cout<<"Array after pass " <<i+1<<endl;
    Display();
  }
}
template <class T>
void ArrayX<T> :: SelectionSort (){
  int i = 0, j = 0, min_index = 0;
  T temp;

  for (i = 0; i < iSize-1; i++) {
    min_index = i;
    for (j = i+1; j < iSize; j++) {
      if (Arr[j] < Arr[min_index]){
        min_index = j;
      }
    }
    temp = Arr[i];
    Arr[i] = Arr[min_index];
    Arr[min_index] = temp;
  }
}



int main (){
  int iLength = 0,No = 0;

  cout<<"No of Elements: ";
  cin >> iLength;

  ArrayX<int> *aobj = new ArrayX<int> (iLength);

  aobj->Accept();

  cout<<"\nData before sorting:\n";
  aobj->Display();
  cout<<endl;

  aobj -> SelectionSort();

  cout<<"\n\nData After sorting:\n\n";
  aobj -> Display();

  return 0;
}
