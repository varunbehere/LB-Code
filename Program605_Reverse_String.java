import java.util.*;

class Program605_Reverse_String {
  public static void main (String args[]){
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter String : ");
    String str = sobj.nextLine();

    str  = str.reverse();                   /// has error here due immutability

    System.out.println("String : " + str);
  }
}
