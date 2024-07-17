#include <iostream>
using namespace std;

template <class T>
struct nodeDC {
  T data;
  struct nodeDC * prev;
  struct nodeDC * next;
};

// typedef struct node NODE;
// typedef struct node * PNODE;
template <class T>
class DoublyCLL {
  private:
    struct nodeDC<T> * First;
    struct nodeDC<T> * Last;
    int iCount;

  public:
    DoublyCLL();

    void Display();
    int Count();

    void InsertFirst(T No);
    void InsertLast(T No);
    void InsertAtPos(T No, int Pos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int Pos);

};
template <class T>
DoublyCLL<T>::DoublyCLL(){
  First = NULL;
  Last = NULL;
  iCount = 0;
}

template <class T>
void DoublyCLL<T>::Display(){
  struct nodeDC<T> * temp = First;
  do{
    cout<<"|p|"<<temp->data<<"|n|-> ";
    temp = temp->next;
  } while(temp != First);
  cout<<endl;
}

template <class T>
int DoublyCLL<T>::Count(){
  return iCount;
}

template <class T>
void DoublyCLL<T>::InsertFirst(T No){
  struct nodeDC<T> * newn = NULL;
  newn = new nodeDC<T>;
  newn -> data = No;
  newn -> next = NULL;
  newn -> prev = NULL;

  if (First == NULL && Last == NULL){
    First = newn;
    Last = newn;
  }
  else{
    newn -> next = First;
    First -> prev = newn;
    First = newn;
  }
  First -> prev = Last;
  Last -> next = First;
  iCount ++;
}

template <class T>
void DoublyCLL<T>::InsertLast(T No){
  struct nodeDC<T> *newn = NULL;
  newn = new nodeDC<T>;

  newn -> data = No;
  newn -> next = NULL;
  newn -> prev = NULL;

  if (First == NULL && Last == NULL){
    First = newn;
    Last = newn;
  }
  else{
    newn -> prev = Last;
    Last -> next = newn;
    Last = newn;
  }
  Last -> next = First;
  First -> prev = Last;

  iCount ++;
}

template <class T>
void DoublyCLL<T>::InsertAtPos(T No, int Pos){

  if (Pos < 1 || Pos > (iCount + 1)){
    cout<<"Invalid Position"<<endl;
    return;
  }

  if (Pos == 1){
    InsertFirst(No);
  }
  else if (Pos == (iCount+1)){
    InsertLast(No);
  }
  else{
    struct nodeDC<T> *newn = NULL;
    newn = new nodeDC<T>;

    newn -> data = No;
    newn -> next = NULL;
    newn -> prev = NULL;

    int i = 0;
    struct nodeDC<T> * temp = First;
    for (i = 1; i < (Pos - 1); i++){
      temp = temp -> next;
    }

    newn -> next = temp -> next;
    temp -> next -> prev = newn;
    temp -> next = newn;
    newn -> prev = temp;

    iCount++;
  }
}

template <class T>
void DoublyCLL<T>::DeleteFirst(){

  if (First == NULL && Last == NULL){
    cout<<"Already empty"<<endl;
    return;
  }
  else if (First == Last){
    delete First;
    First = NULL;
    Last = NULL;
  }
  else{
    First = First -> next;
    delete First -> prev;
  }
  First -> prev = Last;
  Last -> next = First;
  iCount --;

}

template <class T>
void DoublyCLL<T>::DeleteLast(){
  if (First == NULL && Last == NULL){
    cout<<"Already empty"<<endl;
    return;
  }
  else if (First == Last){
    delete First;
    First = NULL;
    Last = NULL;
  }
  else{
    Last = Last -> prev;
    delete Last -> next;
  }
  Last -> next = First;
  First -> prev = Last;
  iCount --;
}

template <class T>
void DoublyCLL<T>::DeleteAtPos(int Pos){

  if (Pos < 1 || Pos > iCount){
    cout << "Invalid Position"<<endl;
    return;
  }

  if(Pos == 1){
    DeleteFirst();
  }
  else if (Pos == iCount){
    DeleteLast();
  }
  else{

    struct nodeDC<T> *temp1 = First;
    struct nodeDC<T> *temp2 = NULL;
    int i = 0;
    for (i = 1; i < (Pos - 1); i++){
      temp1 = temp1 -> next;
    }
    temp2 = temp1 -> next;
    temp1 -> next = temp2-> next;
    temp2 -> next -> prev = temp1;

    delete temp2;

    iCount--;
  }
}

int main (){
  int iRet = 0;
  DoublyCLL<int> *iobj = new DoublyCLL<int>();
  //InsertFirst
  iobj->InsertFirst(51);
  iobj->InsertFirst(21);
  iobj->InsertFirst(11);
  iobj->Display();
  iRet = iobj->Count();
  cout<<"Total Nodes: "<<iRet<<endl;

  // InsertLast
  iobj->InsertLast(101);
  iobj->InsertLast(111);
  iobj->InsertLast(121);
  iobj->Display();
  iRet = iobj->Count ();
  cout<<"Total Nodes: "<<iRet<<endl;

  // DeleteFirst(&First,&Last);
  iobj->DeleteFirst();
  iobj->Display();
  iRet = iobj->Count();
  cout<<"Total Nodes: "<<iRet<<endl;

  // Delete Last
  iobj->DeleteLast();
  iobj->Display();
  iRet = iobj->Count();
  cout<<"Total Nodes: "<<iRet<<endl;
  //
  iobj->InsertAtPos(71,3);
  iobj->Display();
  iRet = iobj->Count();
  cout<<"Total Nodes: "<<iRet<<endl;

  iobj->DeleteAtPos(3);
  iobj->Display();
  iRet = iobj->Count();
  cout<<"Total Nodes: "<<iRet<<endl;

  return 0;
}
