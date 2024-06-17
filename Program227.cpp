#include <iostream>
using namespace std;

class ArrayX {
  private :
    int *Arr;
    int iSize;
  public:
    ArrayX (int No) {
      cout << "Inside Constructor"<<endl;
      iSize = No;
      Arr =   new int [iSize];
    }
    ~ArrayX() {
      cout<<"Inside Destructor"<<endl;
      delete []Arr;
    }
    void Accept (){
      int i = 0;

      cout << "Enter the elements: "<<endl;
      for (i = 0; i<iSize; i ++){
        cin >> Arr [i];
      }
    }
    void Display (){
      int i = 0;
      cout << "elements: ";

      for (i = 0; i < iSize; i++){
        cout << Arr[i]<< endl;
      }
    }
    float Average (){
      int iSum = 0,  i = 0;
      float fAns = 0.0f;
      for (i = 0 ; i < iSize; i++){
        iSum += Arr[i];
      }
      fAns = (float)iSum / (float)iSize;
      // cout << "Average : "<<fAns<<endl;
      return fAns;
    }
};

int main (){
  int iLength = 0;
  float fRet = 0.0f;
  cout <<"Enter the number of elements you want to enter :";
  cin >> iLength;

  // ArrayX aobj (iLength);                      // Static object creation
  ArrayX *aobj = new ArrayX(iLength);            // Dynamic Object Creations
  aobj->Accept();
  aobj->Display();
  fRet = aobj->Average();
  cout<< "Average : "<<fRet<<endl;
  delete aobj;                                    // Because of this , dynamic object creation is preffered;
  return 0;
}
