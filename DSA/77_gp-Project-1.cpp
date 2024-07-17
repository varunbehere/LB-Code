#include <iostream>
using namespace std;
///////////////////////////////////////////
//
// code of Singly Linear
//
///////////////////////////////////////////
template <class T>
struct nodeSL {
    T data;
    struct nodeSL *next;
};

template <class T>
class SinglyLL {
private:
    struct nodeSL<T> *First;
    int iCount;

public:
    SinglyLL();
    ~SinglyLL();

    void Display();
    int Count();

    void InsertFirst(T No);
    void InsertLast(T No);
    void InsertAtPos(T No, int iPos);

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};

template <class T>
SinglyLL<T>::SinglyLL() {
    cout << "Inside the Constructor\n";
    First = NULL;
    iCount = 0;
}

template <class T>
SinglyLL<T>::~SinglyLL() {
    struct nodeSL<T> *temp = First;
    while (First != NULL) {
        First = First->next;
        delete temp;
        temp = First;
    }
}

template <class T>
void SinglyLL<T>::Display() {
    struct nodeSL<T> *temp = First;

    while (temp != NULL) {
        cout << "|" << temp->data << "| => ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

template <class T>
int SinglyLL<T>::Count() {
    return iCount;
}

template <class T>
void SinglyLL<T>::InsertFirst(T No) {
    struct nodeSL<T> *newn = new nodeSL<T>;

    newn->data = No;
    newn->next = NULL;

    if (First == NULL) {
        First = newn;
    } else {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertLast(T No) {
    struct nodeSL<T> *newn = new nodeSL<T>;
    struct nodeSL<T> *temp = First;

    newn->data = No;
    newn->next = NULL;

    if (First == NULL) {
        First = newn;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T No, int iPos) {
    if ((iPos < 1) || (iPos > iCount + 1)) {
        cout << "Invalid Position\n";
        return;
    }
    if (iPos == 1) {
        InsertFirst(No);
    }
    else if (iPos == iCount + 1) {
        InsertLast(No);
    }
    else {
        struct nodeSL<T> *newn = new nodeSL<T>;
        struct nodeSL<T> *temp = First;
        newn->data = No;
        newn->next = NULL;

        for (int i = 1; i < iPos - 1; i++) {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

template <class T>
void SinglyLL<T>::DeleteFirst() {
    if (First == NULL) {
        cout << "Unable to Perform the Operation\n";
        return;
    } else {
        struct nodeSL<T> *temp = First;
        First = First->next;
        delete temp;
        iCount--;
    }
}

template <class T>
void SinglyLL<T>::DeleteLast() {
    if (First == NULL) {
        cout << "Unable to Perform the Operation\n";
        return;
    } else if (First->next == NULL) {
        delete First;
        First = NULL;
        iCount--;
    } else {
        struct nodeSL<T> *temp = First;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
        iCount--;
    }
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos) {
    if ((iPos < 1) || (iPos > iCount)) {
        cout << "Invalid Position\n";
        return;
    }
    if (iPos == 1) {
        DeleteFirst();
    }
    else if (iPos == iCount) {
        DeleteLast();
    }
    else {
        struct nodeSL<T> *temp1 = First;
        for (int i = 1; i < iPos - 1; i++) {
            temp1 = temp1->next;
        }
        struct nodeSL<T> *temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
        iCount--;
    }
}
///////////////////////////////////////////
//
// code of Doubly Circular
//
///////////////////////////////////////////
template <class T>
struct nodeDC {
  T data;
  struct nodeDC * prev;
  struct nodeDC * next;
};

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
  //Linked List of Integers
    cout<<"Linked List of Integers---------------------------------------"<<endl;
    SinglyLL<int> *iobj = new SinglyLL<int>;

    int iRet = 0;

    iobj->InsertFirst(51);
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);

    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of Elements are: " << iRet << endl;

    iobj->InsertLast(101);
    iobj->InsertLast(111);
    iobj->InsertLast(121);

    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of Elements are: " << iRet << endl;

    iobj->InsertAtPos(105, 5);

    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of Elements are: " << iRet << endl;

    iobj->DeleteAtPos(5);

    iobj->Display();
    iRet = iobj->Count();
    cout << "Number of Elements are: " << iRet << endl <<endl;

    delete iobj;


    //Linked List of Character
    cout<<"Linked List of Characters---------------------------------------"<<endl;
    SinglyLL<char> *cobj = new SinglyLL<char>;

    cobj->InsertFirst('C');
    cobj->InsertFirst('B');
    cobj->InsertFirst('A');

    cobj->Display();
    iRet = cobj->Count();
    cout << "Number of Elements are: " << iRet << endl;

    cobj->InsertLast('D');
    cobj->InsertLast('E');
    cobj->InsertLast('F');

    cobj->Display();
    iRet = cobj->Count();
    cout << "Number of Elements are: " << iRet << endl;

    cobj->InsertAtPos('G', 5);

    cobj->Display();
    iRet = cobj->Count();
    cout << "Number of Elements are: " << iRet << endl;

    cobj->DeleteAtPos(5);

    cobj->Display();
    iRet = cobj->Count();
    cout << "Number of Elements are: " << iRet << endl <<endl;

    delete cobj;

    // Float Linked List
    cout<<"Linked List of Floats---------------------------------------"<<endl;
    SinglyLL<float> *fobj = new SinglyLL<float>;

    fobj->InsertFirst(30.20f);
    fobj->InsertFirst(20.20f);
    fobj->InsertFirst(10.20f);

    fobj->Display();
    iRet = fobj->Count();
    cout << "Number of Elements are: " << iRet << endl;

    fobj->InsertLast(40.20f);
    fobj->InsertLast(50.20f);
    fobj->InsertLast(60.20f);

    fobj->Display();
    iRet = fobj->Count();
    cout << "Number of Elements are: " << iRet << endl;

    fobj->InsertAtPos(45.10f, 5);

    fobj->Display();
    iRet = fobj->Count();
    cout << "Number of Elements are: " << iRet << endl;

    fobj->DeleteAtPos(5);

    fobj->Display();
    iRet = fobj->Count();
    cout << "Number of Elements are: " << iRet << endl<<endl;

    delete fobj;

    // Double Linked List
    cout<<"Linked List of Double---------------------------------------"<<endl;
    SinglyLL<double> *dobj = new SinglyLL<double>;

    dobj->InsertFirst(30.20f);
    dobj->InsertFirst(20.20f);
    dobj->InsertFirst(10.20f);

    dobj->Display();
    iRet = dobj->Count();
    cout << "Number of Elements are: " << iRet << endl;

    dobj->InsertLast(40.20f);
    dobj->InsertLast(50.20f);
    dobj->InsertLast(60.20f);

    dobj->Display();
    iRet = dobj->Count();
    cout << "Number of Elements are: " << iRet << endl;

    dobj->InsertAtPos(45.10f, 5);

    dobj->Display();
    iRet = dobj->Count();
    cout << "Number of Elements are: " << iRet << endl;

    dobj->DeleteAtPos(5);

    dobj->Display();
    iRet = dobj->Count();
    cout << "Number of Elements are: " << iRet << endl<<endl;

    delete fobj;

    DoublyCLL<int> *idobj = new DoublyCLL<int>();
    //InsertFirst
    idobj->InsertFirst(51);
    idobj->InsertFirst(21);
    idobj->InsertFirst(11);
    idobj->Display();
    iRet = idobj->Count();
    cout<<"Total Nodes: "<<iRet<<endl;

    // InsertLast
    idobj->InsertLast(101);
    idobj->InsertLast(111);
    idobj->InsertLast(121);
    idobj->Display();
    iRet = idobj->Count ();
    cout<<"Total Nodes: "<<iRet<<endl;

    // DeleteFirst(&First,&Last);
    idobj->DeleteFirst();
    idobj->Display();
    iRet = idobj->Count();
    cout<<"Total Nodes: "<<iRet<<endl;

    // Delete Last
    idobj->DeleteLast();
    idobj->Display();
    iRet = idobj->Count();
    cout<<"Total Nodes: "<<iRet<<endl;
    //
    idobj->InsertAtPos(71,3);
    idobj->Display();
    iRet = idobj->Count();
    cout<<"Total Nodes: "<<iRet<<endl;

    idobj->DeleteAtPos(3);
    idobj->Display();
    iRet = idobj->Count();
    cout<<"Total Nodes: "<<iRet<<endl;

  return 0;
}
