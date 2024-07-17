#include <iostream>
using namespace std;

template <class T>

T Minimum(T Arr[], int iSize) {
  T Min = Arr[0];
  int i = 0;
  for (i = 0; i< iSize ; i++){
    if (Min > Arr[i]){
      Min = Arr [i];
    }
  }
  return Min;
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
  iRet = Minimum(ptr, iLength);
  cout << "Minimum:  " << iRet << endl;

  delete []ptr;

  return 0;
}
