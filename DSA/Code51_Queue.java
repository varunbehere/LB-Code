class Node { // Representation of node using class instead of struct
    public int data;
    public Node next;

    // Constructor to initialize node
    public Node(int iValue) {                     // this will help reduce the code
        data = iValue;
        next = null;
    }
}

class Queue {
    public Node First;
    public int iCount;

    public Queue() {
        System.out.println("Object of Stack gets created Successfully!");
        First = null;
        iCount = 0;
    }
    public void Enqueue(int iNo){        //Insert Last
      Node newn = new Node(iNo);

      if (First == null){
        First = newn;
      }
      else{
        Node temp = First;
        while (temp.next != null){
          temp = temp.next;
        }
        temp.next = newn;
      }
      iCount++;
    }
    public int Dequeue(){               // Delete First
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
        System.out.print(temp.data+ "   ");
        temp = temp.next;
      } 
      System.out.println();
    }
    public int Count(){
      return iCount;
    }

}

class Code51_Queue {
    public static void main(String args[]) {
      Queue obj = new Queue();
      int iRet = 0;

      obj.Enqueue (10);
      obj.Enqueue (20);
      obj.Enqueue (30);
      obj.Enqueue (40);
      obj.Enqueue (50);

      obj.Display();

      iRet = obj.Dequeue();
      System.out.println("Dequeueped Element: "+iRet);
      obj.Display();

    }
}
