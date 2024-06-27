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

void SinglyLL:: Display(){
  PNODE temp = First;
  while (temp != NULL){
    cout<< "|"<<temp->data<<"|"<<"->";
    temp = temp -> next;
  }
  cout<<"NULL"<<endl;
}
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
void SinglyLL::InsertLast (int iNo){
  PNODE newn = NULL;
  PNODE temp = NULL;
  newn = new NODE;     // in c we used to use malloc

  newn-> data = iNo;
  newn-> next = NULL;

  if (First == NULL){         // instead of First ==NULL we can also use iCount == 0
    First = newn;
  }
  else {
    temp = First;
    while (temp-> next != NULL){
      temp = temp->next;
    }
    temp->next = newn;
  }
  iCount++;
}
void SinglyLL::InsertAtPos(int iNo, int iPos) {

    PNODE newn = new NODE;
    newn->data = iNo;
    newn->next = NULL;

    PNODE temp = First;


    if (iPos < 1 || iPos > iCount + 1) {
        cout << "Invalid Position" << endl;
        return;
    }

    if (iPos == 1) {
        InsertFirst(iNo);
    }

    else if (iPos == iCount + 1) {
        InsertLast(iNo);
    }

    else{
        for (int i = 1; i < iPos - 1; i++) {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
}


void SinglyLL::DeleteFirst (){
  PNODE temp = First;

  if (First == NULL){
    cout <<"LL already empty";
    return;
  }
  else if (First -> next == NULL){
    delete First;
    First = NULL;
  }
  else{
    First = First -> next;
    delete temp;
  }
  iCount --;
}
void SinglyLL::DeleteLast (){
  PNODE temp = First;
  if (First == NULL){
    cout <<"LL already empty";
    return;
  }
  else if (First -> next == NULL){
    delete First;
    First = NULL;
  }
  else{
    while (temp->next->next !=NULL){
      temp  = temp->next;
    }
    delete (temp->next);
    temp->next = NULL;
  }
  iCount --;
}
void SinglyLL::DeleteAtPos (int iPos){
  PNODE temp1 = First;
  PNODE temp2 = NULL;

  if (iPos < 1 || iPos > iCount) {
      cout << "Invalid Position" << endl;
      return;
  }

  if (iPos == 1) {
      DeleteFirst();
  }

  else if (iPos == iCount + 1) {
      DeleteLast();
  }

  else{
      for (int i = 1; i < iPos - 1; i++) {
          temp1 = temp1->next;
      }
      temp2 = temp1->next;
      temp1 ->next = temp1->next->next;
      delete temp2;
      iCount--;
  }
}


int main (){
  int iRet = 0 ;
  SinglyLL obj;

  obj.InsertFirst(51);
  obj.InsertFirst(21);
  obj.InsertFirst(11);

  obj.Display();
  iRet = obj.Count();
  cout <<"Total No of nodes : "<<iRet<<endl;

  obj.Display();

  obj.InsertLast(101);
  obj.InsertLast(111);
  obj.InsertLast(121);
  obj.Display();

  obj.DeleteFirst();
  obj.Display();

  obj.DeleteLast();
  obj.Display();

  obj.InsertAtPos(105,4);
  obj.Display();

  obj.DeleteAtPos(4);
  obj.Display();


  return 0;
}
