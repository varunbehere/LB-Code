import java.util.*;

class Program198{

  public static int SumFactors (int iNo){
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 1 ; iCnt <= (iNo / 2) ; iCnt ++){
      if ((iNo % iCnt) == 0){
        iSum += iCnt;
      }
    }
    return iSum;
  }
  public static void main (String Args [] ){
    int iValue = 0;
    int iRet = 0;

    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter Number : ");
    iValue = sobj.nextInt();
    iRet = SumFactors(iValue);
    System.out.println ("Summation of Factors : " + iRet);
  }
}
