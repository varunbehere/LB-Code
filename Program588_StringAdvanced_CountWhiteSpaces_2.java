import java.util.*;

class Program588_StringAdvanced_CountWhiteSpaces_2 {
  public static void main (String args[]){
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter String : ");
    String str = sobj.nextLine();

    int iCnt = 0, i = 0;
    for (i = 0; i<str.length(); i++){
      if (str.charAt(i) == ' '){
        iCnt ++;
      }
    }
    System.out.println("No of WhiteSpaces: " + iCnt);
  }
}
