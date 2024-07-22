import java.util.*;

class Program587_StringAdvanced_CountWhiteSpaces {
  public static void main (String args[]){
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter String : ");
    String str = sobj.nextLine();

    char Arr[] = str.toCharArray();
    int iCnt = 0, i = 0;
    for (i = 0; i<Arr.length; i++){
      if (Arr[i] == ' '){
        iCnt ++;
      }
    }
    System.out.println("No of WhiteSpaces: " + iCnt);
  }
}
