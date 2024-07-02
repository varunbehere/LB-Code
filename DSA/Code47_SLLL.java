class node{                       // Representation of node using class instead of struct
  public int data;
  public node next;
}

class SinglyLL{
  public node First;
  public int iCount;

  public SinglyLL(){
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

  public int Count(){
    return iCount;
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

  public void DeleteFirst(){
    if (First == null){
      System.out.println("Already Empty");
      return;
    }
    else{
      First = First.next;
      iCount--;
    }
  }

  public void DeleteLast(){
    if (First == null){
      System.out.println("Already Empty");
      return;
    }
    else{
      node temp = First;
      while (temp.next.next != null){
        temp = temp.next;
      }
      temp.next = null;
      iCount--;
    }
  }
}

class Code47_SLLL{
  public static void main (String args[]){
    SinglyLL obj = new SinglyLL();
    int iRet = 0;

    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.Display();
    iRet = obj.Count();
    System.out.println("Total Nodes: "+iRet+"\n");

    obj.InsertLast(111);
    obj.Display();
    iRet = obj.Count();
    System.out.println("Total Nodes: "+iRet+"\n");

    obj.DeleteFirst();
    obj.Display();
    iRet = obj.Count();
    System.out.println("Total Nodes: "+iRet+"\n");

    obj.DeleteLast();
    obj.Display();
    iRet = obj.Count();
    System.out.println("Total Nodes: "+iRet+"\n");

  }
}
