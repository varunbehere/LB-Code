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
};

int main (){
  int iLength = 0;
  cout <<"Enter the number of elements you want to enter :";
  cin >> iLength;
  ArrayX aobj (iLength);
  aobj.Accept();
  aobj.Display();

  aobj.Arr = NULL;
  aobj.iSize =
  return 0;
}
