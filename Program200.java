import java.util.*;
class Program200 {
  public static int CountDigits (int iNo){
    int iCnt = 0;
    while (iNo > 0){
      iNo = iNo/ 10;
      iCnt ++;
    }
    return iCnt;
  }
  public static void main (String Args [] ){
    int iValue = 0;
    int iRet = 0;

    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter Number : ");
    iValue = sobj.nextInt();
    iRet = CountDigits(iValue);
    System.out.println ("No of Digits : " + iRet);
  }
}
