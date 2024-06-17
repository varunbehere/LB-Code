#include <iostream>
using namespace std;


int Average (int Arr[], int iSize){
  int iSum = 0, iAvg = 0 , i = 0;
  for (i = 0 ; i < iSize; i++){
    iSum += Arr[i];
  }
  iAvg = iSum / iSize;
  return iAvg;
}

int main (){
  int iLength = 0, i = 0;
  float fRet = 0;
  int *ptr = NULL;

  cout << "Enter a Number of elements that you want to score: "<<endl;
  cin >> iLength;

  ptr = new int [iLength];
  cout << "Enter the elements : "<<endl;
  for (i = 0; i < iLength; i++){
    cin >> ptr [i];
  }

  fRet = Average(ptr, iLength);
  cout << "Average is : "<< fRet << endl ;

  delete []ptr;  // square brackets would delete complete memory of ptr if removed only the first one would be deleted
  return 0;
}
