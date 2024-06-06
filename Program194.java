import java.util.*;

class Program194 {
  public static void main (String args[]){
      Scanner sobj = new Scanner (System.in);

      int iValue1 = 0, iValue2 = 0;
      int iAns = 0;
      System.out.println ("First Number : ");
      iValue1 = sobj.nextInt();

      System.out.println("Second Number : ");
      iValue2 = sobj.nextInt();

      iAns = iValue1 + iValue2;
      System.out.println ("Addition : " +iAns);
  }
}
