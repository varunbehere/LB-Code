#include <iostream>
using namespace std;

struct node {
  int data;
  struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
// typedef struct node ** PPNODE;       in Cpp we dont need this

class SinglyLL{
  public :
    PNODE First;
    int iCount;

    SinglyLL();

    void Display();
    int Count();

    void InsertFirst (int iNo);
    void InsertLast (int iNo);
    void InsertAtPos (int iNo, int iPos);

    void DeleteFirst ();
    void DeleteLast ();
    void DeleteAtPos (int iPos);

};

SinglyLL :: SinglyLL(){
  cout<<"Inside Constructor"<<endl;
  First = NULL;
  iCount = 0;
}

void SinglyLL:: Display(){}
int SinglyLL::Count(){
  return iCount;

}

void SinglyLL::InsertFirst (int iNo){
  PNODE newn = NULL;
  newn = new NODE;     // in c we used to use malloc

  newn-> data = iNo;
  newn-> next = NULL;

  if (First == NULL){         // instead of First ==NULL we can also use iCount == 0
    First = newn;
  }
  else {
    newn -> next = First;
    First = newn;
  }
  iCount++;
}
void SinglyLL::InsertLast (int iNo){}
void SinglyLL::InsertAtPos (int iNo, int iPos){}

void SinglyLL::DeleteFirst (){}
void SinglyLL::DeleteLast (){}
void SinglyLL::DeleteAtPos (int iPos){}


int main (){
  int iRet = 0 ;
  SinglyLL obj;

  obj.InsertFirst(51);
  obj.InsertFirst(21);
  obj.InsertFirst(11);

  iRet = obj.Count();
  cout <<"Total No of nodes : "<<iRet<<endl;
  return 0;
}
