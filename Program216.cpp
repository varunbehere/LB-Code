#include <iostream>
using namespace std;

int main (){
  int iLength = 0, i = 0;
  int *ptr = NULL;

  cout << "Enter a Number of elements that you want to score: "<<endl;
  cin >> iLength;

  ptr = new int [iLength];
  cout << "Enter the elements : "<<endl;
  for (i = 0; i < iLength; i++){
    cin >> ptr [i];
  }

  cout << "Entered elements : "<<endl;
  for (i = 0; i < iLength; i++){
    cout<< ptr [i]<<endl  ;
  }

  delete []ptr;  // square would delete complete memory of ptr if removed only the first one would be deleted
  return 0;
}
