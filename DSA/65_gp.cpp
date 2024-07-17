#include <iostream>
using namespace std;

class ArrayX{
    public :
      int *Arr;
      int iSize;

    ArrayX(int No){
      iSize = No;
      Arr = new int[iSize];
    }
    ~ArrayX(){
      delete Arr;
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
    int Addition (){
      int  i = 0;
      int Sum = 0;
      for (i=0; i< iSize; i++){
        Sum += Arr[i];
      }
      return Sum;
    }
};

int main() {
  int Ret = 0;
  ArrayX aobj(5);
  aobj.Accept();
  aobj.Display();
  Ret = aobj.Addition();
  cout<<"\nAddition : "<<Ret<<endl;
  return 0;
}
