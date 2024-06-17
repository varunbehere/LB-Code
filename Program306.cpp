#include<iostream>
using namespace std;

int CountEven(int Brr[], int iSize){
  static int i =0, iCounter = 0;
  if (i<iSize){
    if (Brr[i] % 2 == 0){
      iCounter ++;
    }
    i++;
    CountEven(Brr, iSize);
  }
  return iCounter;
}

int main (){
  int *Arr = NULL;
  int iCount = 0, i = 0, iRet = 0;
  cout <<"Enter the Size : ";
  cin >> iCount;
  Arr = new int (iCount);                         // Dynamic memory allocation

  cout<<"Enter the elements: ";
  for (int i = 0 ; i < iCount; i++ ){
    cin >> Arr[i];
  }

  iRet =  CountEven(Arr, iCount);
  cout<<"Total Evens: "<<iRet<<endl ;
  delete []Arr;                                   //  Memory deallocation
  return 0;
}
