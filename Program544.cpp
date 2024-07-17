#include <iostream>
using namespace std;

void Accept (int Arr[], int iSize){
  int i = 0;
  cout<<"Enter Elements: "<<endl;
  for (i = 0; i< iSize; i++){
    cin >> Arr[i];
  }
}
void Display (int Arr[], int iSize){
  int i = 0;
  cout<<"Entered Elements: "<<endl;
  for (i = 0; i< iSize; i++){
    cout<< Arr[i] <<"\t";
  }
  cout<< endl;
}

int main (){

  int *ptr = NULL;
  int iLength = 0;

  cout<<"No of Elements: ";
  cin >> iLength;
  ptr = new int [iLength];

  Accept(ptr, iLength);
  Display(ptr,iLength);

  delete []ptr;
  return 0;
}
