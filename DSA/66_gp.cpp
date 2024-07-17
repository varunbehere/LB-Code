#include <iostream>
using namespace std;

template <class T>

class ArrayX{
    public :
      T *Arr;
      int iSize;

    ArrayX(int No){
      iSize = No;
      Arr = new T[iSize];
    }
    ~ArrayX(){
      delete []Arr;
    }

    void Accept (){
      int i = 0;
      cout<< "Enter the Elements: ";
      for (int i = 0; i< iSize; i++){
        cin>>Arr[i];
      }
    }
    void Display (){
      int i = 0;
      cout<< "Elements: ";
      for (int i = 0; i< iSize; i++){
        cout<<Arr[i]<<"\t";
      }
    }
    T Addition (){
      int  i = 0;
      T Sum = 0;
      for (i=0; i< iSize; i++){
        Sum += Arr[i];
      }
      return Sum;
    }
};

int main() {
  ArrayX <int>aobj(5);
  aobj.Accept();
  aobj.Display();
  cout<<"\nAddition : "<<aobj.Addition()<<endl;
  return 0;
}
