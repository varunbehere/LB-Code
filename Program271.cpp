#include <iostream>
using namespace std;
void Display(){
  int i = 0;
  i = 1;
  if (i <= 4){
    cout << "*"<< endl;
    i++;
    Display();
  }
}
int main (){
  Display ();
  return 0;
}
