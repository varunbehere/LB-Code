#include <iostream>
using namespace std;
int main (){

  int iLength=  0;
  int *ptr = NULL;
  cout<<"No of elements: ";
  cin >> iLength;

  ptr = new int[iLength];

  cout<<"Enter Elements:"<<endl;
  for (int i = 0; i< iLength; i++ ){
    cin >>ptr[i];
  }

  cout<<"Entered Elements:";
  for (int i = 0; i< iLength; i++ ){
    cout<<ptr[i]<<"\t";
  }
  cout<<endl;
  delete []ptr;

  return 0;
}
