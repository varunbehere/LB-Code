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
    SinglyLL<int> *obj = new SinglyLL<int>;

    int iRet = 0;

    obj->InsertFirst(51);
    obj->InsertFirst(21);
    obj->InsertFirst(11);

    obj->Display();
    iRet = obj->Count();
    cout << "Number of Elements are: " << iRet << endl;

    obj->InsertLast(101);
    obj->InsertLast(111);
    obj->InsertLast(121);

    obj->Display();
    iRet = obj->Count();
    cout << "Number of Elements are: " << iRet << endl;

    obj->InsertAtPos(105, 5);

    obj->Display();
    iRet = obj->Count();
    cout << "Number of Elements are: " << iRet << endl;

    obj->DeleteAtPos(5);

    obj->Display();
    iRet = obj->Count();
    cout << "Number of Elements are: " << iRet << endl;

    delete obj;
    return 0;
}
