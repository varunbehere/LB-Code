#include <iostream>
using namespace std;

struct node {
  int data;
  struct node * next;
};


typedef struct node NODE;
typedef struct node * PNODE;

class SinglyCLL{
private:
    int iCount;
    PNODE First;
    PNODE Last;

  public:
    SinglyCLL();

    void Display();
    int Count();

    void InsertLast  (int No);
    void InsertFirst (int No);
    void InsertAtPos (int No, int Pos);

    void DeleteFirst();
    void DeleteLast ();
    void DeleteAtPos(int Pos);

};

SinglyCLL::SinglyCLL(){
  First = NULL;
  Last = NULL;
  iCount = 0;
}

void SinglyCLL:: Display(){
  if (First == NULL) {
    cout<<"Linked List is empty"<< endl;
    return;
  }

  PNODE temp = First;
  do{
    cout<< "|"<<temp->data<<"|-> ";
    temp = temp -> next;
  }
  while (temp != Last->next);
  cout<<endl;

}
int SinglyCLL::Count(){
  return iCount;
}

void SinglyCLL::InsertFirst (int No){
  PNODE newn = NULL;
  newn = new NODE;

  newn -> data = No;
  newn -> next = NULL;

  if (First == NULL){
    First = newn;
    Last = newn;
  }
  else{
    newn -> next = First;
    First = newn;
  }
  Last -> next = First;
  iCount ++;
}
void SinglyCLL::InsertLast  (int No){
  PNODE newn = NULL;
  newn = new NODE;

  newn -> data = No;
  newn -> next = NULL;

  if ((First == NULL) && (Last == NULL)){
    First = newn;
    Last = newn;
  }
  else{
    Last -> next = newn;
    Last = newn;
  }
  Last -> next = First;
  iCount++;
}
void SinglyCLL::InsertAtPos (int No, int Pos){

  if ((Pos < 1) || (Pos > (iCount+1))){
    cout << "Invalid Position"<<endl;
    return;
  }

  if (Pos == 1){
    InsertFirst(No);
  }
  else if (Pos == (iCount+1)){
    InsertLast(No);
  }
  else{
    PNODE newn = NULL;
    PNODE temp = First;
    int i = 0;
    newn = new NODE;
    newn -> data = No;
    newn -> next = NULL;

    for ( i = 1; i < (Pos-1); i++) {
      temp = temp->next;
    }

    newn -> next = temp->next;
    temp -> next = newn;

    iCount++;
  }

}
//
void SinglyCLL::DeleteFirst(){
  if ((First == NULL) && (Last == NULL)){
    cout<<"Linked List is already empty"<<endl;
    return;
  }
  else if(First == Last){
    First = NULL;
    Last = NULL;
  }
  else{
    First = First -> next;
    delete (Last-> next);
    Last -> next = First;
  }
  iCount --;
}
void SinglyCLL::DeleteLast (){
  if ((First == NULL) && (Last == NULL)){
    cout<<"Linked List is already empty"<<endl;
    return;
  }
  else if (First == Last){
    First = NULL;
    Last  = NULL;
  }
  else{
    PNODE temp = First;
    while (temp->next != Last){
      temp = temp-> next;
    }
    delete Last;
    Last = temp;
    Last -> next = First;
  }
  iCount--;
}

void SinglyCLL::DeleteAtPos(int Pos){
  if (Pos < 1 || Pos > iCount){
    cout<<"Invalid Position";
    return;
  }

  if(Pos == 1){
    DeleteFirst();
  }
  else if (Pos == iCount){
    DeleteLast();
  }
  else{
    PNODE temp1 = First;
    PNODE temp2 = NULL;
    int i = 0;
    for (i = 1 ; i< (Pos -1); i++){
      temp1 = temp1->next;
    }
    temp2 = temp1 -> next;
    temp1 ->next = temp2-> next;
    delete temp2;

    iCount --;
  }
}

int main (){
  int iRet = 0;
  SinglyCLL obj;

  obj.InsertFirst(51);
  obj.InsertFirst(21);
  obj.InsertFirst(11);

  obj.Display();
  iRet = obj.Count();
  cout <<"Total No of nodes : "<<iRet<<endl<<endl;

  obj.InsertLast(101);
  obj.InsertLast(111);
  obj.InsertLast(121);

  obj.Display();
  iRet = obj.Count();
  cout <<"Total No of nodes : "<<iRet<<endl<<endl;

  obj.InsertAtPos(71,4);

  obj.Display();
  iRet = obj.Count();
  cout <<"Total No of nodes : "<<iRet<<endl<<endl;

  obj.DeleteFirst();

  obj.Display();
  iRet = obj.Count();
  cout <<"Total No of nodes : "<<iRet<<endl<<endl;

  obj.DeleteLast();

  obj.Display();
  iRet = obj.Count();
  cout <<"Total No of nodes : "<<iRet<<endl<<endl;

  obj.DeleteAtPos(4);

  obj.Display();
  iRet = obj.Count();
  cout <<"Total No of nodes : "<<iRet<<endl<<endl;

}
