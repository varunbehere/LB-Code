#include<iostream>
using namespace std;

int CountEven(int Brr[], int iSize){
  int i =0, iCounter = 0;
  for (i = 0; i<iSize; i++){
    if (Brr[i] % 2 == 0){
      iCounter ++;
    }
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
  cout<<"Total Even: "<<iRet<<endl ;
  delete []Arr;                                   //  Memory deallocation
  return 0;
}
