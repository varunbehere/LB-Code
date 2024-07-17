#include <iostream>
using namespace std;

class int <T>;

class ArrayX{
  public:
    int *Arr;
    int iSize;

    ArrayX(int Value);
    ~ArrayX();
    void Accept ();
    void Display ();
};

ArrayX :: ArrayX(int Value){
  this->iSize = Value;
  this-> Arr = new int [iSize];
}

ArrayX :: ~ArrayX(){
  delete []Arr;
}

void ArrayX :: Accept (){
  int i = 0;
  cout<<"Enter Elements: "<<endl;
  for (i = 0; i< iSize; i++){
    cin >> Arr[i];
  }
}

void ArrayX :: Display (){
  int i = 0;
  cout<<"Entered Elements: "<<endl;
  for (i = 0; i< iSize; i++){
    cout<< Arr[i] <<"\t";
  }
  cout<< endl;
}

int main (){
  int iLength = 0;

  cout<<"No of Elements: ";
  cin >> iLength;

  ArrayX aobj (iLength);
  aobj.Accept();
  aobj.Display();

  return 0;
}
