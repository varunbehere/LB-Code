import java.util.*;

class Program594_StringAdvanced_Splitting {
  public static void main (String args[]){
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter String : ");
    String str = sobj.nextLine();
    str = str.trim ();

    str = str.replaceAll("\\s+"," ");

    String Arr[] = str.split (" ");

    System.out.println("No of Words: " + Arr.length);
  }
}

//incomplete
