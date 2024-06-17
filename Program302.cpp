#include<iostream>
using namespace std;

int CountCapital(char *str){
  static int iCnt = 0;
  if (*str != '\0'){
    if (*str >= 'A' && *str <= 'Z'){
      iCnt++;
    }
    str++;
    CountCapital(str);
  }
  return iCnt;
}
int main (){
  char Arr[30];
  int iRet= 0;
  cout <<"String : ";
  cin.getline (Arr,30);
  iRet = CountCapital(Arr);
  cout <<"CApital Letters: "<<iRet <<endl;
  return 0;
}
