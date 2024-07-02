class Node { // Representation of node using class instead of struct
    public int data;
    public Node next;
    public Node prev;

    // Constructor to initialize node
    public Node(int iValue) {                     // this will help reduce the code
        data = iValue;
        next = null;
        prev = null;
    }
}

class DoublyCLL {
    public Node First;
    public Node Last;
    public int iCount;

    public DoublyCLL() {
        System.out.println("Object of DoublyCLL gets created Successfully!");
        First = null;
        Last = null;
        iCount = 0;
    }
    public void Display() {
      Node temp = First;
      do{
        System.out.print("|p|"+temp.data+"|n|-> ");
        temp = temp.next;
      }while(temp != First);
      System.out.println("");
    }
    public int Count() {
        return iCount;
    }
    public void InsertFirst(int iNo) {
      Node newn = new Node(iNo);

      if (First == null && Last == null){
        First = newn;
        Last = newn;
      }
      else{
        newn.next = First;
        newn.prev = Last;
        First.prev = newn;
        Last.next = newn;
        First = newn;
      }
      iCount ++;
    }
    public void InsertLast(int iNo) {
      Node newn = new Node(iNo);

      if (First == null && Last == null){
        First = newn;
        Last = newn;
      }
      else{
        newn.next = First;
        newn.prev = Last;
        Last.next = newn;
        First.prev = newn;
        Last = newn;
      }
      iCount++;
    }
    public void DeleteFirst() {
        if (First == null && Last == null) {
            System.out.println("List is empty.");
            return;
        } else if (First == Last) { // Only one node
            First = null;
            Last = null;
        } else {
            First = First.next;
            First.prev = Last;
            Last.next = First;
        }
        iCount--;
    }

    public void DeleteLast() {
        if (First == null && Last == null) {
            System.out.println("List is empty.");
            return;
        } else if (First == Last) { // Only one node
            First = null;
            Last = null;
        } else {
            Last = Last.prev;
            Last.next = First;
            First.prev = Last;
        }
        iCount--;
    }
    public void InsertAtPos(int iPos,int iNo){
      if (iPos < 1 || iPos > iCount + 1) {
        System.out.println("Invalid position.");
        return;
      }

        if (iPos == 1) {
            InsertFirst(iNo);
        } else if (iPos == iCount + 1) {
            InsertLast(iNo);
        } else {
            Node newn = new Node(iNo);
            Node temp = First;

            for (int i = 1; i < iPos - 1; i++) {
                temp = temp.next;
            }

            newn.next = temp.next;
            newn.prev = temp;
            temp.next.prev = newn;
            temp.next = newn;
            iCount++;
        }
    }
    public void DeleteAtPos(int iPos) {
        if (iPos < 1 || iPos > iCount) {
            System.out.println("Invalid position.");
            return;
        }

        if (iPos == 1) {
            DeleteFirst();
        } else if (iPos == iCount) {
            DeleteLast();
        } else {
            Node temp = First;

            for (int i = 1; i < iPos - 1; i++) {
                temp = temp.next;
            }

            temp.next = temp.next.next;
            temp.next.prev = temp;
            iCount--;
        }
    }
}

class Code49_DCLL {
    public static void main(String args[]) {
      DoublyCLL obj = new DoublyCLL();
      int iRet = 0;
      obj.InsertFirst (51);
      obj.InsertFirst (21);
      obj.InsertFirst (11);
      obj.Display();
      iRet = obj.Count ();
      System.out.println("Total no of Nodes: " +iRet+"\n\n");
      obj.InsertLast (111);
      obj.InsertLast (101);
      obj.Display();
      iRet = obj.Count ();
      System.out.println("Total no of Nodes: " +iRet+"\n\n");

    }
}
