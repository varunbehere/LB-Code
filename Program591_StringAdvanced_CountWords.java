import java.util.*;

class Program591_StringAdvanced_CountWords {
  public static void main (String args[]){
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter String : ");
    String str = sobj.nextLine();

    System.out.println("String before- " + str);

    str = str.replaceAll("a","z");

    System.out.println("String after- " + str);
  }
}
