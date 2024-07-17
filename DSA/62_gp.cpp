#include <iostream>
using namespace std;
// template <class T>
float Maximum(float Arr[], int iSize) {
  float Max = 0.0f;
  int i = 0;
  for (i = 0; i< iSize ; i++){
    if (Max < Arr[i]){
      Max = Arr [i];
    }
  }
  return Max;
}

int main() {
  int iLength = 0;
  float *ptr = NULL;
  float iRet = 0;

  cout << "No of elements: ";
  cin >> iLength;
  ptr = new float[iLength];

  cout << "Enter Elements:" << endl;
  for (int i = 0; i < iLength; i++) {
    cin >> ptr[i];
  }
  iRet = Maximum(ptr, iLength);
  cout << "Maximum:  " << iRet << endl;

  delete []ptr;

  return 0;
}
