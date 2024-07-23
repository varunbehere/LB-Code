import java.util.*;

class Program591_StringAdvanced_CountWords {
  public static void main (String args[]){
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter String : ");
    String str = sobj.nextLine();

    String Arr[] = str.split (" ");
    int i = 0;

    System.out.println("Words of the String: ");
    // for (i = 0; i<Arr.length; i++){
    //   System.out.println(Arr[i]);
    // }
    for (String s : Arr){
      System.out.println(s);
    }
  }
}

//incomplete
