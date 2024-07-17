#include <iostream>
using namespace std;

int main (){

  int *ptr = NULL;
  int iLength = 0, i= 0;

  cout<<"No of Elements: ";
  cin >> iLength;

  ptr = new int [iLength];

  cout<<"Enter Elements: "<<endl;
  for (i = 0; i< iLength; i++){
    cin >> ptr[i];
  }

  cout<<"Entered Elements: "<<endl;
  for (i = 0; i< iLength; i++){
    cout<< ptr[i] <<"\t";
  }
  cout<< endl;
  delete []ptr;
  return 0;
}
