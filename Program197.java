import java.util.*;

class Program197{
  public static void main (String Args [] ){
    int iValue = 0;
    int iCnt = 0;
    int iSum = 0;
    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter Number : ");
    iValue = sobj.nextInt();

    for (iCnt = 1 ; iCnt <= (iValue / 2) ; iCnt ++){
      if ((iValue % iCnt) == 0){
        iSum += iCnt;
      }
    }
    System.out.println ("Summation of Factors : " + iSum);
  }
}
