import java.util.*;

class Program606_Reverse_String1 {
  public static void main (String args[]){
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter String : ");
    String str = sobj.nextLine();
    StringBuffer sb = new StringBuffer (str);

    sb  = sb.reverse();                   /// has error here due immutability

    System.out.println("Reverse String : " + sb);
  }
}
