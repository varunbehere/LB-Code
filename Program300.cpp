#include<iostream>
using namespace std;

int strlenX(char *str){
  static int iCnt = 0;
  while (*str != '\0'){
    iCnt++;
    str++;
  }
  return iCnt;
}
int main (){
  char Arr[30];
  int iRet= 0;
  cout <<"String : ";
  cin.getline (Arr,30);
  iRet = strlenX(Arr);
  cout <<"Length: "<<iRet <<endl;
  return 0;
}
