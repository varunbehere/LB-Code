#include <iostream>
using namespace std;

float Addition(float Arr[], int iSize) {
  float iSum = 0;
  for (int i = 0; i < iSize; i++) {
    iSum = iSum + Arr[i];
  }
  return iSum;
}

int main() {
  int iLength = 0;
  float *ptr = NULL;
  float fRet = 0;

  cout << "No of elements: ";
  cin >> iLength;

  ptr = new float[iLength];

  cout << "Enter Elements:" << endl;
  for (int i = 0; i < iLength; i++) {
    cin >> ptr[i];
  }

  fRet = Addition(ptr, iLength);
  cout << "Sum of all elements: " << fRet << endl;

  delete []ptr;

  return 0;
}
