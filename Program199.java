import java.util.*;

class Program199{

  public static int Difference (int iNo){
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;
    int iDifference = 0;

    for (iCnt = 1 ; iCnt <= iNo ; iCnt ++){
      if ((iNo % iCnt) == 0){
        iSumFact += iCnt;
      }
      else {
        iSumNonFact += iCnt;
      }
    }
    iDifference =  iSumNonFact - iSumFact;
    return iDifference;
  }
  public static void main (String Args [] ){
    int iValue = 0;
    int iRet = 0;

    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter Number : ");
    iValue = sobj.nextInt();
    iRet = Difference(iValue);
    System.out.println ("Difference of Factors : " + iRet);
  }
}
