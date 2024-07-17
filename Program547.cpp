#include <iostream>
using namespace std;

class ArrayX{
  public:
    int *Arr;
    int iSize;

    ArrayX(int Value){
      this->iSize = Value;
      this-> Arr = new int [iSize];
    }
    ~ArrayX(){
      delete []Arr;
    }
    void Accept (){
      int i = 0;
      cout<<"Enter Elements: "<<endl;
      for (i = 0; i< iSize; i++){
        cin >> Arr[i];
      }
    }
    void Display (){
      int i = 0;
      cout<<"Entered Elements: "<<endl;
      for (i = 0; i< iSize; i++){
        cout<< Arr[i] <<"\t";
      }
      cout<< endl;
    }
};

int main (){

  // int *ptr = NULL;
  int iLength = 0;

  cout<<"No of Elements: ";
  cin >> iLength;
  // ptr = new isnt [iLength];

  ArrayX aobj (iLength);
  aobj.Accept();
  aobj.Display();

  // delete []ptr;
  return 0;
}
