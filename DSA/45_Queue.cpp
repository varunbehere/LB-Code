#include <iostream>
using namespace std;

struct node {
  int data;
  struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class Queue {
  private:
    PNODE First;
    int iCount;

  public:
    Queue();
    void Display ();
    int Count();
    void Enqueue (int No); // InsertLast
    int Dequeue();          // DeleteFirst;
};

Queue :: Queue(){
  First = NULL;
  iCount = 0;
}

void Queue :: Display (){
  cout<<"Elements in Queue: "<<endl;
  PNODE temp = First;
  while (temp!=NULL){
    cout<<temp->data<<"\t";
    temp = temp->next;
  }
  cout<<endl;
}

int Queue :: Count(){
  return iCount;
}

void Queue :: Enqueue (int No){      // InsertLast
  PNODE newn= NULL;
  newn = new NODE;

  newn -> data = No;
  newn -> next = NULL;

  if (First == NULL){
    First = newn;
  }
  else{
    PNODE temp =First;
    while (temp -> next != NULL){
      temp = temp -> next;
    }
    temp -> next = newn;
  }
  iCount++;
}

int Queue :: Dequeue(){
  int iValue = 0;
  PNODE temp = NULL;
  if (First == NULL){
    cout << "Queue already empty"<<endl;
    return -1;
  }
  else{
    PNODE temp = First;
    First = First -> next;
    iValue = temp->data;
    delete temp;
    iCount --;
  }
  return iValue;
}

int main (){
  int iRet = 0;
  Queue obj;
  obj.Enqueue(10);
  obj.Enqueue(20);
  obj.Enqueue(30);
  obj.Enqueue(40);

  obj.Display();
  iRet = obj.Count();
  cout<<"No of Elements in the Queue are :"<<iRet<<endl;

  iRet = obj.Dequeue();
  cout<<"Removed Element: "<<iRet<<endl;
  iRet = obj.Dequeue();
  cout<<"Removed Element: "<<iRet<<endl;
  obj.Display();
  iRet = obj.Count();
  cout<<"No of Elements in the Queue are :"<<iRet<<endl;

  return 0;
}
