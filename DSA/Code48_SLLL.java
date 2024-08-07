class Node { // Representation of node using class instead of struct
    public int data;
    public Node next;

    // Constructor to initialize node
    public Node(int iValue) {                     // this will help reduce the code
        data = iValue;
        next = null;
    }
}

class SinglyLL {
    public Node First;
    public int iCount;

    public SinglyLL() {
        System.out.println("Object of SinglyLL gets created Successfully!");
        First = null;
        iCount = 0;
    }

    public void Display() {
        System.out.println("Elements: ");
        Node temp = First;

        while (temp != null) {
            System.out.print("|" + temp.data + "|-> ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count() {
        return iCount;
    }

    public void InsertFirst(int iNo) {
        Node newn = new Node(iNo);

        if (First == null) {
            First = newn;
        } else {
            newn.next = First;
            First = newn;
        }
        iCount++;
    }

    public void InsertLast(int iNo) {
        Node newn = new Node(iNo);

        if (First == null) {
            First = newn;
        } else {
            Node temp = First;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newn;
        }
        iCount++;
    }

    public void DeleteFirst() {
        if (First == null) {
            System.out.println("Already Empty");
            return;
        } else {
            First = First.next;
            iCount--;
        }
    }

    public void DeleteLast() {
        if (First == null) {
            System.out.println("Already Empty");
            return;
        } else if (First.next == null) {
            First = null;
        } else {
            Node temp = First;
            while (temp.next.next != null) {
                temp = temp.next;
            }
            temp.next = null;
            iCount--;
        }
    }


    public void InsertAtPos(int iPos,int iNo){
      if ((iPos< 1) || iPos > (iCount+1)){
        System.out.println("Invalid position");
        return;
      }

      if (iPos == 1){
        InsertFirst(iNo);
      }
      else if (iPos == (iCount+1)){
        InsertLast(iNo);
      }
      else{
        int i = 0;
        Node temp = First;

        Node newn = new Node(iNo);

        for (i = 1; i<(iPos - 1); i++){
          temp = temp.next;
        }

        newn.next= temp.next;
        temp.next = newn;

        iCount++;
      }
    }
    public void DeleteAtPos(int iPos){
      if ((iPos< 1) || iPos > iCount){
        System.out.println("Invalid position");
        return;
      }

      if (iPos == 1){
        DeleteFirst();
      }
      else if (iPos == iCount){
        DeleteLast();
      }
      else{
        int i = 0;
        Node temp1 = First;
        Node temp2 = null;
        for (i = 1; i<(iPos - 1); i++){
          temp1 = temp1.next;
        }

        temp2 = temp1.next;
        temp1.next = temp2.next;

        iCount--;
      }
    }
}

class Code48_SLLL {
    public static void main(String args[]) {
        SinglyLL obj = new SinglyLL();
        int iRet = 0;

        obj.InsertFirst(101);
        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Total Nodes: " + iRet + "\n");

        obj.InsertLast(111);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Total Nodes: " + iRet + "\n");

        obj.DeleteFirst();
        obj.Display();
        iRet = obj.Count();
        System.out.println("Total Nodes: " + iRet + "\n");

        obj.DeleteLast();
        obj.Display();
        iRet = obj.Count();
        System.out.println("Total Nodes: " + iRet + "\n");

        obj.InsertAtPos(4,111);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Total Nodes: " + iRet + "\n");

        obj.DeleteAtPos(3);
        obj.Display();
        iRet = obj.Count();
        System.out.println("Total Nodes: " + iRet + "\n");

    }
}
