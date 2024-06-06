import java.util.*;
class Program202 {
  public static int SumOddDigits (int iNo){
    int iSum= 0;
    int iDigit = 0;
    while (iNo > 0){
      iDigit = iNo % 10;
      if ((iDigit % 2) != 0){
        iSum = iSum + iDigit;
      }
      iNo = iNo / 10;
    }
    return iSum;
  }
  public static void main (String Args [] ){
    int iValue = 0;
    int iRet = 0;

    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter Number : ");
    iValue = sobj.nextInt();
    iRet = SumOddDigits(iValue);
    System.out.println ("No of Digits : " + iRet);
  }
}
