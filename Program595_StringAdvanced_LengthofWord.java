import java.util.*;

class Program595_StringAdvanced_LengthofWord {
  public static void main (String args[]){
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter String : ");
    String str = sobj.nextLine();

    str = str.trim ();

    str = str.replaceAll("\\s+"," ");

    String Arr[] = str.split (" ");

    for (int i = 0; i< Arr.length; i++){
      newStr[] = Arr[i];
      while (newStr != "\0"){
        iCnt ++;
        newStr++;
      }
    }

    System.out.println("No of Words: " + Arr.length);
  }
}
