#include <iostream>
using namespace std;
template <class T>
T Addition(T Arr[], int iSize) {
  T iSum = 0;
  for (int i = 0; i < iSize; i++) {
    iSum = iSum + Arr[i];
  }
  return iSum;
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
  iRet = Addition(ptr, iLength);
  cout << "Sum of all elements: " << iRet << endl;

  delete []ptr;

  return 0;
}
