#include <iostream>
using namespace std;

int Addition(int Arr[], int iSize) {
  int iSum = 0;
  for (int i = 0; i < iSize; i++) {
    iSum = iSum + Arr[i];
  }
  return iSum;
}

int main() {
  int iLength = 0;
  int *ptr = NULL;
  int iRet = 0;

  cout << "No of elements: ";
  cin >> iLength;

  ptr = new int[iLength];

  cout << "Enter Elements:" << endl;
  for (int i = 0; i < iLength; i++) {
    cin >> ptr[i];
  }

  iRet = Addition(ptr, iLength);
  cout << "Sum of all elements: " << iRet << endl;

  delete[] ptr;

  return 0;
}
