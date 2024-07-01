#include <iostream>
using namespace std;

struct node {
  int data;
  struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class Stack {
  private:
    PNODE First;
    int iCount;

  public:
    Stack();
    void Display ();
    int Count();
    void Push (int No); // InsertFirst
    int Pop();          // DeleteFirst;
};

Stack :: Stack(){
  First = NULL;
  iCount = 0;
}
void Stack :: Display (){
  cout<<"Elements in Stack: "<<endl;
  PNODE temp = First;
  while (temp!=NULL){
    cout<<temp->data<<endl;
    temp = temp->next;
  }
  cout<<endl;
}
int Stack :: Count(){
  return iCount;
}
void Stack :: Push (int No){      // InsertFirst
  PNODE newn= NULL;
  newn = new NODE;

  newn -> data = No;
  newn -> next = NULL;

  if (First == NULL){
    First = newn;
  }
  else{
    newn ->next = First;
    First = newn;
  }
  iCount++;
}
int Stack :: Pop(){
  int iValue = 0;
  PNODE temp = NULL;
  if (First == NULL){
    cout << "Stack already empty"<<endl;
    return -1;
  }
  else{
    temp = First;
    iValue = First -> data;
    First = First -> next;
    delete temp;

    iCount --;
  }
  return iValue;
}

int main (){
  int iRet = 0;
  Stack obj;
  obj.Push(10);
  obj.Push(20);
  obj.Push(30);
  obj.Push(40);

  obj.Display();
  iRet = obj.Count();
  cout<<"No of Elements in the stack are :"<<iRet<<endl;

  iRet = obj.Pop();
  cout<<"Popped Element: "<<iRet<<endl;
  iRet = obj.Pop();
  cout<<"Popped Element: "<<iRet<<endl;
  obj.Display();
  iRet = obj.Count();
  cout<<"No of Elements in the stack are :"<<iRet<<endl;


  return 0;
}
