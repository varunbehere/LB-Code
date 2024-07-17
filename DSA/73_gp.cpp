// Generic Singly Linear Linked List

#include <iostream>
using namespace std;

template <class T>
struct node {
    T data;
    struct node *next;
};

template <class T>
class SinglyLL {
private:
    struct node<T> *First;
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
    struct node<T> *temp = First;
    while (First != NULL) {
        First = First->next;
        delete temp;
        temp = First;
    }
}

template <class T>
void SinglyLL<T>::Display() {
    struct node<T> *temp = First;

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
    struct node<T> *newn = new node<T>;

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
    struct node<T> *newn = new node<T>;
    struct node<T> *temp = First;

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
        struct node<T> *newn = new node<T>;
        struct node<T> *temp = First;
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
        struct node<T> *temp = First;
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
        struct node<T> *temp = First;
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
        struct node<T> *temp1 = First;
        for (int i = 1; i < iPos - 1; i++) {
            temp1 = temp1->next;
        }
        struct node<T> *temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
        iCount--;
    }
}

int main() {
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

    return 0;
}
