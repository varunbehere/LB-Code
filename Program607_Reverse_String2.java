import java.util.*;

class Program607_Reverse_String2 {
  public static void main (String args[]){
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter String : ");
    String str = sobj.nextLine();

    str = str.trim ();
    str = str.replaceAll("\\s+", " ");

    String Arr[] = str .split(" ");

    StringBuffer temp = null;
    StringBuffer finalstr = new StringBuffer("");

    for (String s : Arr){
      temp = new StringBuffer (s);
      temp = temp.reverse();

      finalstr.append(temp + " ");
      // finalstr.append(" ");
    }
    System.out.println(finalstr);
  }
}
