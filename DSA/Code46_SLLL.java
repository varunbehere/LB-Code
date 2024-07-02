class node{                       // Representation of node using class instead of struct
  public int data;
  public node next;
}

class SinglyLL{
  public node First;
  public int iCount;

  SinglyLL(){
    System.out.println("Object of SinglyLL gets created Successfully!");
    First = null;
    iCount = 0;
  }

  public void Display (){
    System.out.println("Elements: ");
    node temp = null;
    temp = First;

    while (temp != null){
      System.out.print("|"+temp.data+"|-> ");
      temp = temp.next;
    }
    System.out.println("null");
  }

  public void InsertFirst (int iNo){
    node newn = null;

    newn = new node();

    newn.data = iNo;
    newn.next = null;

    if (First == null){
      First = newn;
    }
    else{
      newn.next =First;
      First = newn;
    }
    iCount ++;
  }
  public void InsertLast (int iNo){
    node newn = null;
    newn = new node();

    newn.data = iNo;
    newn.next = null;

    if (First == null){
      First =newn;
    }
    else{
      node temp = First;
      while (temp.next != null){
        temp = temp.next;
      }
      temp.next = newn;
    }
    iCount++;
  }

}


class Code46_SLLL{
  public static void main (String args[]){
    SinglyLL obj = new SinglyLL();

    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    obj.InsertLast(111);

        obj.Display();
  }
}
