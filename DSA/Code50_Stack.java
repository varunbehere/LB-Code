class Node { // Representation of node using class instead of struct
    public int data;
    public Node next;

    // Constructor to initialize node
    public Node(int iValue) {                     // this will help reduce the code
        data = iValue;
        next = null;
    }
}

class Stack {
    public Node First;
    public int iCount;

    public Stack() {
        System.out.println("Object of Stack gets created Successfully!");
        First = null;
        iCount = 0;
    }
    public void Push(int iNo){ //insertFirst
      Node newn = new Node(iNo);

      if (First == null){
        First = newn;
      }
      else{
        newn.next = First;
        First = newn;
      }
      iCount++;
    }
    public int Pop(){
      int iValue = 0;
      if (First == null){
        System.out.println("Already Empty");
        return -1;
      }
      else{
        iValue = First.data;
        First = First.next;
      }
      iCount--;
      return iValue;
    }
    public void Display(){
      System.out.println("Stack: ");
      Node temp = First;
      while (temp != null){
        System.out.println(temp.data);
        temp = temp.next;
      }
      System.out.println();
    }
    public int Count(){
      return iCount;
    }

}

class Code50_Stack {
    public static void main(String args[]) {
      Stack obj = new Stack();
      int iRet = 0;

      obj.Push (10);
      obj.Push (20);
      obj.Push (30);
      obj.Push (40);
      obj.Push (50);

      obj.Display();

      iRet = obj.Pop();
      System.out.println("Popped Element: "+iRet);
      obj.Display();
      
    }
}
