import java.util.*;

class Program593_StringAdvanced_Splitting {
  public static void main (String args[]){
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter String : ");
    String str = sobj.nextLine();

    String Arr[] = str.split (" ");
    System.out.println("Words of the String: ");

    System.out.println("No of Words: " + Arr.length);
  }
}

//incomplete
