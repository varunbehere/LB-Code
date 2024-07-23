import java.util.*;

class Program604_Word_in_String {
  public static void main (String args[]){
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter String : ");
    String str = sobj.nextLine();

    System.out.println("Enter word to be searched : ");
    String word = sobj.nextLine();

    str = str.trim();
    str = str.replaceAll ("\\s+", " ");

    String Arr[] = str.split(" ");

    int iCnt = 0;
    for (String s : Arr){
      if (word.equals(s)){
        iCnt++;
      }
    }
    System.out.println("Frequency of Word : " + iCnt);
  }
}
