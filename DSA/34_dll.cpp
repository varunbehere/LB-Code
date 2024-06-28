#include <iostream>
using namespace std;

struct node {
  int data;
  struct node* next;
  struct node* prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyLL{
  private:
    PNODE First;
    int iCount;

  public :
    DoublyLL();

    void Display();
    int Count();

    void InsertFirst(int No);
    void InsertLast(int No);
    void InsertAtPos(int No, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

DoublyLL::DoublyLL(){
  First = NULL;
  iCount = 0;
}

void DoublyLL :: Display(){
  PNODE temp = NULL;
  temp = First;
  while (temp != NULL){
    cout<<"|prev|"<<temp->data<<"|next|"<<" -> ";
    temp = temp->next;
  }
  cout<<"NULL"<<endl;
}

int DoublyLL ::Count(){
  return iCount;
}

void DoublyLL :: InsertFirst(int No){
  PNODE newn = NULL;
  newn = new NODE;

  newn -> data = No;
  newn -> prev = NULL;
  newn -> next = NULL;

  if (First == NULL){
    First = newn;
  }
  else{
    newn -> next = First;
    First -> prev = newn;
    First  = newn;
  }
  iCount ++;
}
void DoublyLL :: InsertLast(int No){
  PNODE newn = NULL;
  newn = new NODE;

  newn -> data = No;
  newn -> next = NULL;
  newn -> prev = NULL;

  if (First == NULL){
    First = newn;
  }
  else{
    PNODE temp = NULL;
    temp = First;
    while (temp -> next != NULL){
      temp = temp-> next;
    }
    temp->next = newn;
    newn->prev = temp;
  }
  iCount++;
}
void DoublyLL :: InsertAtPos(int No, int iPos){

  if (iPos < 1 || iPos > (iCount + 1)){
    cout<<"Invalid Position"<<endl;
    return;
  }

  if (iPos == 1) InsertFirst(No);
  else if (iPos == (iCount+1)) InsertLast(No);
  else{
    int i = 0;
    PNODE temp = NULL;
    PNODE newn = NULL;
    newn = new NODE;

    newn -> data = No;
    newn -> prev = NULL;
    newn -> next = NULL;

    temp = First;
    for ( i = 1; i < (iPos -1 ); i++) {
      temp = temp->next;
    }
    newn -> next = temp-> next;
    temp -> next-> prev = newn;
    temp -> next = newn;
    newn -> prev = temp;
    iCount++;
  }
}

void DoublyLL :: DeleteFirst(){
  if (First == NULL){
    cout<<"No node exist"<<endl;
  }
  else if (First -> next == NULL){
    delete First;
    First = NULL;
  }
  else{
    First = First->next;
    delete First -> prev;
    First -> prev = NULL;       // we are deleting not inserting hence the next will have first nodes address in its prev
  }
  iCount--;
}
void DoublyLL :: DeleteLast(){
  PNODE temp = NULL;
  if (First == NULL){
    cout<<"LL has no nodes"<<endl;
    return;
  }
  else if(First -> next == NULL) {
    delete First;
    First = NULL;
  }
  else{
    temp = First;
    while (temp -> next->next != NULL){
      temp = temp-> next;
    }
    delete temp->next;
    temp -> next =NULL;
  }
  iCount --;
}
void DoublyLL :: DeleteAtPos(int iPos){
    if (iPos < 1 || iPos > iCount){
      cout<<"invalid Position"<<endl;
      return;
    }
     if (iPos == 1){}
     else if (iPos == iCount);
     else{
       int i = 0;
       PNODE temp = First;
       for (i = 1; i < (iPos-1); i++) {
         temp = temp -> next;
       }
       temp->next = temp->next->next;
       delete temp->next->prev;
       temp->next->prev = temp;
       iCount --;
     }
}


int main (){
  int iRet = 0 ;
  DoublyLL obj;

  obj.InsertFirst(51);
  obj.InsertFirst(21);
  obj.InsertFirst(11);

  obj.Display();
  iRet = obj.Count();
  cout <<"Total No of nodes : "<<iRet<<endl<<endl;
  //
  // obj.Display();
  //
  obj.InsertLast(101);
  obj.InsertLast(111);
  obj.InsertLast(121);
  obj.Display();
  iRet = obj.Count();
  cout <<"Total No of nodes : "<<iRet<<endl<<endl;

  obj.InsertAtPos(105,5);
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

  return 0;
}
