import java.util.*;

class Program590_StringAdvanced_CountWords {
  public static void main (String args[]){
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter String : ");
    String str = sobj.nextLine();
    str = str.trim();
    int iCnt = 0, i = 0;
    for (i = 0; i<str.length(); i++){
      if (str.charAt(i) == ' '){
        iCnt ++;
      }
    }
    System.out.println("No of Words are: " + (iCnt+1));
  }
}
